/*
 *
 *  ZDCurrencyRate.h
 *  ZDCurrencyConverter
 *
 *  Created by Steven Diviney on 7/26/15.
 *
 *  Copyright (c) 2015 Steven Diviney. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface ZDCurrencyRate : JSONModel

@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSNumber *Rate;
@property (nonatomic, strong) NSDate *Date;

@end
