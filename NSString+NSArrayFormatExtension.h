//
//  NSString+NSArrayFormatExtension.h
//
//  Created by linwaiwai on 9/29/14.
//  Copyright (c) 2014 linwaiwai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (NSArrayFormatExtension)

+ (id)stringWithFormat:(NSString *)format array:(NSArray*) arguments;

@end
