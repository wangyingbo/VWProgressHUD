//
//  VWMsgContentView.h
//  VWProgressHUD
//
//  Created by Vaith on 16/7/19.
//  Copyright © 2016年 Vaith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VWBaseContentView.h"
#import "VWEnum.h"


@interface VWMsgContentView : VWBaseContentView
- (instancetype)initWithMsg:(NSString *)msg type:(VWMsgType)type;
- (void)setMsg:(NSString *)msg type:(VWMsgType)type;
@end
