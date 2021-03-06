//
//  BBBadgeBarButtonItem.h
//
//  Created by Tanguy Aladenise on 07/02/14.
//  Copyright (c) 2014 Riverie, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BBBadgeBarButtonItem : UIBarButtonItem

// Each time you change one of the properties, the badge will refresh with your changes

// Badge value to be display
@property (nonatomic) NSString *badgeValue;
// Badge background color
@property (nonatomic) UIColor *badgeBGColor;
// Badge text color
@property (nonatomic) UIColor *badgeTextColor;
// Badge font
@property (nonatomic) UIFont *badgeFont;
// Padding value for the badge
@property (nonatomic) CGFloat badgePadding;
// Minimum size badge to small
@property (nonatomic) CGFloat badgeMinSize;
// Values for offseting the badge over the BarButtonItem you picked
@property (nonatomic) CGFloat badgeOriginX;
@property (nonatomic) CGFloat badgeOriginY;
// In case of numbers, remove the badge when reaching zero
@property BOOL shouldHideBadgeAtZero;
// Badge has a bounce animation when value changes
@property BOOL shouldAnimateBadge;
// Sets the z-index of the badge to be frontmost, over the button, or under if NO.
@property (nonatomic) BOOL shouldBadgeOverlayButton;
// Sets a value indicating that the badge should be transluscent.
@property (nonatomic) BOOL transluscent;
// Sets the width of the badge.
@property (nonatomic) CGFloat badgeWidth;
// Sets the height of the badge.
@property (nonatomic) CGFloat badgeHeight;
// Sets the badge border width.
@property (nonatomic) CGFloat badgeBorderWidth;
// Sets the badge border width.
@property (nonatomic) UIColor *badgeBorderColor;

- (BBBadgeBarButtonItem *)initWithCustomUIButton:(UIButton *)customButton;

@end