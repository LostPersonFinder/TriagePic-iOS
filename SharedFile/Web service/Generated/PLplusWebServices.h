/*
 PLplusWebServices.h
 The interface definition of classes and methods for the plusWebServices web service.
 Generated by SudzC.com
 */

#import "Soap.h"

/* Add class references */

#import "PLrequestAnonTokenRequestType.h"
#import "PLgetEventListRequestType.h"
#import "PLgetGroupListRequestType.h"
#import "PLgetSessionCookieRequestType.h"
#import "PLgetImageCountsAndTokensRequestType.h"
#import "PLgetHospitalListRequestType.h"
#import "PLgetHospitalDataResponseType.h"
#import "PLrequestUserTokenRequestType.h"
#import "PLpurgeUserTokensResponseType.h"
#import "PLresetUserPasswordRequestType.h"
#import "PLforgotUsernameRequestType.h"
#import "PLupdateRecordResponseType.h"
#import "PLreportAbuseResponseType.h"
#import "PLaddCommentResponseType.h"
#import "PLappCheckRequestType.h"
#import "PLregisterApplePushTokenResponseType.h"
#import "PLgetHospitalDataRequestType.h"
#import "PLgetHospitalPolicyRequestType.h"
#import "PLgetHospitalLegaleseRequestType.h"
#import "PLgetHospitalLegaleseAnonRequestType.h"
#import "PLgetHospitalLegaleseTimestampsRequestType.h"
#import "PLreservePatientIdsRequestType.h"
#import "PLrequestAnonTokenResponseType.h"
#import "PLpurgeUserTokensRequestType.h"
#import "PLpingEchoRequestType.h"
#import "PLpingEchoResponseType.h"
#import "PLgetEventListResponseType.h"
#import "PLgetGroupListResponseType.h"
#import "PLregisterUserResponseType.h"
#import "PLchangeUserPasswordResponseType.h"
#import "PLresetUserPasswordResponseType.h"
#import "PLforgotUsernameResponseType.h"
#import "PLreportResponseType.h"
#import "PLreportAbuseRequestType.h"
#import "PLgetImageListRequestType.h"
#import "PLgetImageListResponseType.h"
#import "PLgetImageListBlockRequestType.h"
#import "PLgetImageListBlockResponseType.h"
#import "PLgetNullTokenListRequestType.h"
#import "PLgetNullTokenListResponseType.h"
#import "PLgetHospitalListResponseType.h"
#import "PLgetHospitalLegaleseResponseType.h"
#import "PLgetHospitalLegaleseAnonResponseType.h"
#import "PLgetUuidByMassCasualtyIdRequestType.h"
#import "PLgetUuidByMassCasualtyIdResponseType.h"
#import "PLreservePatientIdsResponseType.h"
#import "PLchangeUserPasswordRequestType.h"
#import "PLgetSessionCookieResponseType.h"
#import "PLreportRequestType.h"
#import "PLappCheckResponseType.h"
#import "PLgetHospitalLegaleseTimestampsResponseType.h"
#import "PLrequestUserTokenResponseType.h"
#import "PLsearchResponseType.h"
#import "PLupdateRecordRequestType.h"
#import "PLregisterApplePushTokenRequestType.h"
#import "PLregisterUserRequestType.h"
#import "PLaddCommentRequestType.h"
#import "PLgetImageCountsAndTokensResponseType.h"
#import "PLsearchRequestType.h"
#import "PLgetHospitalPolicyResponseType.h"
#import "PLfollowRecordRequestType.h"
#import "PLfollowRecordResponseType.h"

/* Interface for the service */

@interface PLplusWebServices : SoapService

// Returns NSString*
/*  */

- (SoapRequest*)requestUserToken:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)requestAnonToken:(id)target action:(SEL)action deserializeTo:(id)deserializeTo;


// Returns int
/*  */

- (SoapRequest*)purgeUserTokens:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)pingEcho:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getEventList:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getGroupList:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns BOOL
/*  */

- (SoapRequest*)registerUser:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns BOOL
/*  */

- (SoapRequest*)changeUserPassword:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns BOOL
/*  */

- (SoapRequest*)resetUserPassword:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns BOOL
/*  */

- (SoapRequest*)forgotUsername:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getSessionCookie:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)search:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)report:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns int
/*  */

- (SoapRequest*)updateRecord:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns int
/*  */

- (SoapRequest*)reportAbuse:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;




- (SoapRequest*)followRecord:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;

// Returns int
/*  */

- (SoapRequest*)addComment:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns int
/*  */

- (SoapRequest*)getImageCountsAndTokens:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getImageList:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getImageListBlock:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getNullTokenList:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)appCheck:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns int
/*  */

- (SoapRequest*)registerApplePushToken:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalList:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalData:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalPolicy:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalLegalese:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalLegaleseAnon:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getHospitalLegaleseTimestamps:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)getUuidByMassCasualtyId:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;


// Returns NSString*
/*  */

- (SoapRequest*)reservePatientIds:(id)target action:(SEL)action params:(NSMutableString *)params deserializeTo:(id)deserializeTo;



+ (PLplusWebServices*) service;
+ (PLplusWebServices*) serviceWithUsername: (NSString*) username andPassword: (NSString*) password;
@end
