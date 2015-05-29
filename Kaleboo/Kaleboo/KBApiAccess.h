//
//  KBApiAccess.h
//  Kaleboo
//
//  Created by OLX - Andres Ciaño on 5/29/15.
//  Copyright (c) 2015 Kaleboo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KBApiAccess : NSObject

// Success:
//          NSArray<KBState> | NSArray<KBFilter>
// Error
//          NSError
- (void)fetchInitializationInformationWithSuccess:(void (^)(NSArray *, NSArray *))success withFailure:(void (^)(NSError *))failure;

// Success:
//          NSArray<KBItem>
// Error
//          NSError
- (void)fetchItemsWithSuccess:(void (^)(NSArray *))success withFailure:(void (^)(NSError *))failure;



- (void)filterComboWithValue:(NSString *)value forKey:(NSString *)key;

- (void)filterNumericBiggerThanValue:(NSNumber *)value forKey:(NSString *)key;
- (void)filterNumericSmallerThanValue:(NSNumber *)value forKey:(NSString *)key;
- (void)filterNumericEqualToValue:(NSNumber *)value forKey:(NSString *)key;

- (void)resetFilters;

@end
