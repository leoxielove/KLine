//
//  ChartsContentView.h
//  KLine
//
//  Created by 陈蕃坊 on 2017/7/29.
//  Copyright © 2017年 DanDanLiCai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChartsContentView : UIView

- (void)reDrawWithLineData:(id)lineData chartsType:(KLine_Enum_ChartsType)chartsType;

@end
