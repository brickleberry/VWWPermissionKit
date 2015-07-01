//
//  VWWHealthPermission.h
//  VWWPermissionsManager
//
//  Created by Zakk Hoyt on 6/12/15.
//  Copyright (c) 2015 Zakk Hoyt. All rights reserved.
//

#import "VWWPermission.h"
@import  HealthKit;

// NSHealthShareUsageDescription
// NSHealthUpdateUsageDescription
static NSString *VWWHealthPermissionType = @"Health";

@interface VWWHealthPermission : VWWPermission
+(instancetype)permissionWithLabelText:(NSString*)labelText
                            shareTypes:(NSSet*)shareTypes
                             readTypes:(NSSet*)readTypes;
@end
