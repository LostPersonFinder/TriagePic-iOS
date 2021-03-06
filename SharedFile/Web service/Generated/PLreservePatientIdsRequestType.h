/*
	PLreservePatientIdsRequestType.h
	The interface definition of properties and methods for the PLreservePatientIdsRequestType object.
	Generated by SudzC.com
*/

#import "Soap.h"
	

@interface PLreservePatientIdsRequestType : SoapObject
{
	NSString* _token;
	int _hospital_uuid;
	
}
		
	@property (retain, nonatomic) NSString* token;
	@property int hospital_uuid;

	+ (PLreservePatientIdsRequestType*) createWithNode: (CXMLNode*) node;
	- (id) initWithNode: (CXMLNode*) node;
	- (NSMutableString*) serialize;
	- (NSMutableString*) serialize: (NSString*) nodeName;
	- (NSMutableString*) serializeAttributes;
	- (NSMutableString*) serializeElements;

@end
