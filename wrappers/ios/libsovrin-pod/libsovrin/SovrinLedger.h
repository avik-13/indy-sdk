//
//  SovrinLedger.h
//  libsovrin
//


#import <Foundation/Foundation.h>
#import "SovrinTypes.h"

@interface SovrinLedger : NSObject

+ (NSError*) signAndSubmitRequest:(SovrinHandle) walletHandle
                       poolHandle:(SovrinHandle) poolHandle
                     submitterDID:(NSString*) submitterDid
                      requestJSON:(NSString*) request
                       completion:(void (^)(NSError* error, NSString* requestResultJSON)) handler;

+ (NSError*) submitRequest:(SovrinHandle) poolHandle
               requestJSON:(NSString*) request
                completion:(void (^)(NSError* error, NSString* requestResultJSON)) handler;

+ (NSError*) buildGetDdoRequest:(NSString*) submitterDid
                      targetDID:(NSString*) targetDid
                     completion:(void (^)(NSError* error, NSString* requestResultJSON)) handler;

+ (NSError*) buildNymRequest:(NSString*) submitterDid
                   targetDID:(NSString*) targetDid
                      verkey:(NSString*) key
                        xref:(NSString*) ref
                        data:(NSString*) data
                        role:(NSString*) role
                  completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildAttribRequest:(NSString*) submitterDid
                      targetDID:(NSString*) targetDid
                           hash:(NSString*) hash
                            raw:(NSString*) raw
                            enc:(NSString*) enc
                     completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildGetAttribRequest:(NSString*) submitterDid
                         targetDID:(NSString*) targetDid
                              data:(NSString*) data
                        completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildGetNymRequest:(NSString*) submitterDid
                      targetDID:(NSString*) targetDid
                     completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildSchemaRequest:(NSString*) submitterDid
                           data:(NSString*) data
                     completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildGetSchemaRequest:(NSString*) submitterDid
                              dest:(NSString*) dest
                              data:(NSString*) data
                        completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildClaimDefTxn:(NSString*) submitterDid
                         xref:(NSString*) xref
                signatureType:(NSString*) signatureType
                         data:(NSString*) data
                   completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildGetClaimDefTxn:(NSString*) submitterDid
                            xref:(NSString*) xref
                   signatureType:(NSString *) signatureType
                          origin:(NSString *) origin
                      completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

+ (NSError*) buildNodeRequest:(NSString*) submitterDid
                    targetDid:(NSString*) targetDid
                         data:(NSString*) data
                   completion:(void (^)(NSError* error, NSString* requestJSON)) handler;

@end
