//
//  MMSheetView.h
//  MMPopupView
//
//  Created by Ralph Li on 9/6/15.
//  Copyright © 2015 LJC. All rights reserved.
//

#import "MMPopupView.h"
#import "MMPopupDefine.h"

@interface MMSheetView : MMPopupView

- (instancetype) initWithTitle:(NSString*)title
                         items:(NSArray*)items;

@end


/**
 *  Global Configuration of MMSheetView.
 */
@interface MMSheetViewConfig : NSObject

+ (MMSheetViewConfig*) globalConfig;

@property (nonatomic, assign) CGFloat buttonHeight;         // Default is 64.
@property (nonatomic, assign) CGFloat innerMargin;          // Default is 24.

@property (nonatomic, assign) CGFloat titleFontSize;        // Default is 18.
@property (nonatomic, assign) CGFloat buttonFontSize;       // Default is 16.

@property (nonatomic, strong) UIColor *backgroundColor;     // Default is #FFFFFFFF.
@property (nonatomic, strong) UIColor *titleColor;          // Default is #454545FF.
@property (nonatomic, strong) UIColor *splitColor;          // Default is #E3E3E3FF

@property (nonatomic, strong) UIColor *itemNormalColor;     // Default is #454545FF. effect with MMItemTypeNormal
@property (nonatomic, strong) UIColor *itemDisableColor;    // Default is #CCCCCCFF. effect with MMItemTypeDisabled
@property (nonatomic, strong) UIColor *itemHighlightColor;  // Default is #FF5C39FF. effect with MMItemTypeHighlight
@property (nonatomic, strong) UIColor *itemPressedColor;    // Default is #EFEDE7FF.

@property (nonatomic, strong) NSString *defaultTextCancel;  // Default is "Cancel"

@end
