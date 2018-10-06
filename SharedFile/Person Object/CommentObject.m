//
//  CommentObject.m
//  ReUnite + TriagePic
//
//  Created by Krittach on 7/17/13.
//  Copyright (c) 2013 Krittach. All rights reserved.
//

#import "CommentObject.h"

@implementation CommentObject{
    BOOL _hasImage;
}

+ (CommentObject *)commentObjectFromDicitonary:(NSDictionary *)commentDictionary rank:(int)rank statusCodeDict:(NSDictionary *)statusCodeDict uuid:(NSString *)uuid
{
    CommentObject *commentObject = [[CommentObject alloc] init];
    commentObject.rank = rank;
    
    NSString *commenter = commentDictionary[COMMENT_KEY_COMMENTER];
    NSString *text = commentDictionary[COMMENT_KEY_TEXT];
    NSString *timeStamp = commentDictionary[COMMENT_KEY_TIME_STAMP];
    NSString *suggestedStatus = commentDictionary[COMMENT_KEY_STATUS];
    suggestedStatus = [statusCodeDict objectForKey:suggestedStatus];
    NSDictionary *suggestedLocation = commentDictionary[COMMENT_KEY_LOCATION];
   
    commentObject.commenterName = (commenter && ![commenter isKindOfClass:[NSNull class]])?commenter:@"Unspecified User";
    commentObject.text = (text && ![text isKindOfClass:[NSNull class]])?text:@"";
    commentObject.timeStamp = [CommonFunctions getDateFromStandardString:timeStamp];
    commentObject.status = suggestedStatus?suggestedStatus:@"";
    commentObject.location = suggestedLocation?[LocationObject locationByLocationDictionary:suggestedLocation]:[LocationObject emptyLocation];
    commentObject.uuid = uuid;
    
    // Images
    NSString *imageURL = commentDictionary[COMMENT_KEY_IMAGE_URL];
    NSString *imagePath = commentDictionary[COMMENT_KEY_IMAGE_PATH];
    commentObject.imageURL = imageURL?imageURL:@"";
    commentObject.image = commentDictionary[COMMENT_KEY_IMAGE];
    commentObject.hasImage = (commentObject.image && [commentObject.image isKindOfClass:[UIImage class]])?YES:NO;
   
    
    if (!commentObject.image && imagePath && ![imagePath isEqualToString:@""]) {
        commentObject.hasImage = YES;
        commentObject.image = [[UIImage alloc] initWithData:[NSData dataWithContentsOfFile:imagePath]];
    }
    if (!commentObject.image && imageURL && ![imageURL isEqualToString:@""]) {
        commentObject.hasImage = YES;
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0), ^{
            UIImage *imageFromURL = [ImageObject getPLImagesFromURLExtension:imageURL];
            if (imageFromURL){
                dispatch_async(dispatch_get_main_queue(), ^{
                    commentObject.image = imageFromURL;
                    if (commentObject.delegate && [commentObject.delegate respondsToSelector:@selector(didFinishLoadingImage:)]) {
                        [commentObject.delegate didFinishLoadingImage:imageFromURL];
                    }
                });
            }
        });
    }
    //[commentObject showInLog];
    
    return commentObject;
}

+ (CommentObject *)testCommentObject
{
    NSDictionary *commentDictionary = @{
                                        COMMENT_KEY_TEXT: @"This is a comment test. This is a comment test. This is a comment test. This is a comment test. This is a comment test. This is a comment test.",
                                        COMMENT_KEY_COMMENTER: @"John Smith",
                                        COMMENT_KEY_TIME_STAMP: @"2013-07-16T15:16:50-04:00",
                                        COMMENT_KEY_STATUS: @"ali",
                                        COMMENT_KEY_LOCATION: @{
                                                @"city": @"Bethesda",
                                                @"country": @"United States",
                                                @"gps": @{
                                                        @"latitude": @"38.996347",
                                                        @"longitude": @"-77.09842"
                                                       },
                                                @"neighborhood": @"<null>",
                                                @"postal_code": @"20814",
                                                @"region": @"Maryland",
                                                @"street1": @"10 Center Drive"
                                                },
                                        COMMENT_KEY_IMAGE_URL: @"tmp/plus_cache/cc"
                                        };
    
    CommentObject *co = [CommentObject commentObjectFromDicitonary:commentDictionary rank:1 statusCodeDict:@{@"ali": @"Alive and Well"} uuid:@""];
    co.image = [UIImage imageNamed:@"sampleImage2"];
    /*co.location.hasGPS = NO;
    co.location = [LocationObject emptyLocation];
    co.location.hasAddress = YES;*/
    return co;
}

+ (NSDictionary *)dictionaryFromCommentObject:(CommentObject *)commentObject personID:(int)personID
{
    //get imagepath
    NSString *pathToImage = @"";
    if (commentObject.image) {
        NSData *imageData = UIImageJPEGRepresentation(commentObject.image, 1);
        pathToImage = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
        NSString *ReUnitePersonPhotoID = [NSString stringWithFormat:@"/ReUnitePersonCommentPhotoID-%i-%i.jpg", personID, commentObject.rank];
        pathToImage = [pathToImage stringByAppendingString:ReUnitePersonPhotoID];
        
        NSError *error;
        [imageData writeToFile:pathToImage options:NSDataWritingFileProtectionComplete error:&error];
        if (error !=nil){
            DLog(@"dictionaryFromCommentObject statement bug! %@", error);
        }
    }
    
    NSDictionary *commentDictionary = @{
                                        COMMENT_KEY_TEXT: commentObject.text?commentObject.text:@"",
                                        COMMENT_KEY_COMMENTER: commentObject.commenterName,
                                        COMMENT_KEY_TIME_STAMP: [CommonFunctions getStandardRepresentationFromDate:commentObject.timeStamp],
                                        COMMENT_KEY_STATUS: commentObject.status?commentObject.status:@"",
                                        COMMENT_KEY_LOCATION: [commentObject.location getLocationDictionary],
                                        COMMENT_KEY_IMAGE_URL: commentObject.imageURL?commentObject.imageURL:@"",
                                        COMMENT_KEY_UUID: commentObject.uuid,
                                        COMMENT_KEY_IMAGE_PATH: pathToImage
                                        };
    return commentDictionary;
}

- (BOOL)hasLocation
{
    return (_location?YES:NO) && _location.hasAddress;
}

- (BOOL)hasStatus
{
    return _status && ![_status isKindOfClass:[NSNull class]] && ![_status isEqualToString:@""] && ![_status isEqualToString:@"Unknown"];
}

- (void)showInLog
{
    DLog(@"\n name - %@ \n comment - %@ \n time - %@ \n status - %@ \n location - %@ \n hasgps - %@ \n hasImage - %@",_commenterName, _text, [_timeStamp description],_status,[_location getLocationString], [_location hasGPS]?@"YES":@"NO", _hasImage?@"YES":@"NO");
}
@end
