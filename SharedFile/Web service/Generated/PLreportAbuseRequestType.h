/*
	PLreportAbuseRequestType.h
	The interface definition of properties and methods for the PLreportAbuseRequestType object.
	Generated by SudzC.com
*/

#import "Soap.h"
	

@interface PLreportAbuseRequestType : SoapObject
{
	NSString* _token;
	NSString* _uuid;
	NSString* _explanation;
	
}
		
	@property (retain, nonatomic) NSString* token;
	@property (retain, nonatomic) NSString* uuid;
	@property (retain, nonatomic) NSString* explanation;

	+ (PLreportAbuseRequestType*) createWithNode: (CXMLNode*) node;
	- (id) initWithNode: (CXMLNode*) node;
	- (NSMutableString*) serialize;
	- (NSMutableString*) serialize: (NSString*) nodeName;
	- (NSMutableString*) serializeAttributes;
	- (NSMutableString*) serializeElements;

@end
