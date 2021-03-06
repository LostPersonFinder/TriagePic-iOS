/*
	PLgetSessionCookieResponseType.h
	The interface definition of properties and methods for the PLgetSessionCookieResponseType object.
	Generated by SudzC.com
*/

#import "Soap.h"
	

@interface PLgetSessionCookieResponseType : SoapObject
{
	NSString* _SESSION_ID;
	NSString* _SESS_KEY;
	int _errorCode;
	NSString* _errorMessage;
	
}
		
	@property (retain, nonatomic) NSString* SESSION_ID;
	@property (retain, nonatomic) NSString* SESS_KEY;
	@property int errorCode;
	@property (retain, nonatomic) NSString* errorMessage;

	+ (PLgetSessionCookieResponseType*) createWithNode: (CXMLNode*) node;
	- (id) initWithNode: (CXMLNode*) node;
	- (NSMutableString*) serialize;
	- (NSMutableString*) serialize: (NSString*) nodeName;
	- (NSMutableString*) serializeAttributes;
	- (NSMutableString*) serializeElements;

@end
