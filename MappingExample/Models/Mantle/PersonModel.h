//
// PersonModel.h 
// MappingExample
//
// Created by dmitriy on 3/12/14
// Copyright (c) 2014 Yalantis. All rights reserved. 
//
#import <Foundation/Foundation.h>

@interface PersonModel : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing>

@property (nonatomic, retain) NSNumber * personID;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSSet *phones;

+ (NSDictionary *)JSONKeyPathsByPropertyKey;

+ (NSString *)managedObjectEntityName;
+ (NSDictionary *)managedObjectKeysByPropertyKey;
+ (NSSet *)propertyKeysForManagedObjectUniquing;

@end