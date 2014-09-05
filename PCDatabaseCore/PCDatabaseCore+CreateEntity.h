//
//  PCDatabaseCore+CreateEntity.h
//  ShoobsCheckin
//
//  Created by Paweł Nużka on 05.03.2014.
//  Copyright (c) 2014 GoRailsGo. All rights reserved.
//

#import "PCDatabaseCore.h"


@interface PCDatabaseCore (CreateEntity)
#pragma mark - Create entities
/*!
 *  All following funtions do not save objects being returned
 *  It's developers responsibility to save them when appropriate
 */

- (NSError *)saveContext:(NSManagedObjectContext *)context forIndex:(NSInteger)index;
- (NSManagedObject *)createEntity:(NSString *)entityName;

- (NSManagedObject *)createEntity:(NSString *)entityName
                        inContext:(NSManagedObjectContext *)context;

- (NSManagedObject *)createEntity:(NSString *)entityName
                          withKey:(NSString *)key
                         andValue:(id)value;

- (NSManagedObject *)createEntity:(NSString *)entityName
                          withKey:(NSString *)key
                         andValue:(id)value
                        inContext:(NSManagedObjectContext *)context;

- (NSManagedObject *)createEntity:(NSString *)entityName
                           withID:(NSNumber *)entityId;

- (NSManagedObject *)createEntity:(NSString *)entityName
                           withID:(NSNumber *)entityId
                        inContext:(NSManagedObjectContext *)context;

- (NSManagedObject *)createEntity:(NSString *)entityName
                         withJSON:(NSDictionary *)json;

- (NSManagedObject *)createEntity:(NSString *)entityName
                         withJSON:(NSDictionary *)json
                        inContext:(NSManagedObjectContext *)context;


- (void)createEntity:(NSString *)entityName
            withJSON:(NSDictionary *)json
        inBackground:(void (^)(NSManagedObject *entity))success;

- (void)createEnitites:(NSString *)entityName
         withJSONArray:(NSArray *)jsonArray
          inBackground:(void (^)(NSArray * entities))success;

/*!
 *  All following functions save objects being returned
 *  Please see kSaveBatchSize
 */
- (NSArray *)createEntities:(NSString *)entityName
                    withKey:(NSString *)key
                  andValues:(NSArray *)values
                  inContext:(NSManagedObjectContext *)context;

@end
