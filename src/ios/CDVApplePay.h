#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
#import <PassKit/PassKit.h>
#import <AddressBook/AddressBook.h>
#import <PayeezyClient/PayeezyClient.h>

#define kSupportedNetworks8 @[PKPaymentNetworkVisa, PKPaymentNetworkMasterCard, PKPaymentNetworkAmex]
#define kSupportedNetworks9 @[PKPaymentNetworkVisa, PKPaymentNetworkMasterCard, PKPaymentNetworkAmex, PKPaymentNetworkDiscover]

@interface CDVApplePay: CDVPlugin <PKPaymentAuthorizationViewControllerDelegate>

@property (nonatomic, strong) NSString* paymentCallbackId;
@property (nonatomic) NSString* api_key;
@property (nonatomic) NSString* api_secret;
@property (nonatomic) NSString* merchant_token;
@property (nonatomic) NSString* merchant_ref;
@property (nonatomic) NSString* merchant_id;
@property (nonatomic) NSString* environment;
@property (nonatomic) NSString* transaction_type;

- (void)makePaymentRequest:(CDVInvokedUrlCommand*)command;
- (void)canMakePayments:(CDVInvokedUrlCommand*)command;

@end
