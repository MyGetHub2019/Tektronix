//
//  VisaDriver.h
//  Tektronix
//
//  Created by Jerry.Yang on 2020/6/10.
//  Copyright © 2020 Jerry.Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "visa.h"

@interface VisaDriver : NSObject
-(short)searchDevice;
@end
