/*
	PLgetUuidByMassCasualtyIdResponseType.h
	The interface definition of properties and methods for the PLgetUuidByMassCasualtyIdResponseType object.
	Generated by SudzC.com
*/

#import "Soap.h"
	

@interface PLgetUuidByMassCasualtyIdResponseType : SoapObject
{
	NSString* _uuid;
	int _errorCode;
	NSString* _errorMessage;
	
}
		
	@property (retain, nonatomic) NSString* uuid;
	@property int errorCode;
	@property (retain, nonatomic) NSString* errorMessage;

	+ (PLgetUuidByMassCasualtyIdResponseType*) createWithNode: (CXMLNode*) node;
	- (id) initWithNode: (CXMLNode*) node;
	- (NSMutableString*) serialize;
	- (NSMutableString*) serialize: (NSString*) nodeName;
	- (NSMutableString*) serializeAttributes;
	- (NSMutableString*) serializeElements;

@end
