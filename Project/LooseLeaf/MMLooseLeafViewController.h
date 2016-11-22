//
//  MMViewController.h
//  Loose Leaf
//
//  Created by Adam Wulf on 6/7/12.
//  Copyright (c) 2012 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMCollapsableStackView.h"
#import <Fabric/Fabric.h>
#import <Crashlytics/Crashlytics.h>
#import <TwitterKit/TwitterKit.h>
#import "MMMemoryManager.h"


@interface MMLooseLeafViewController : UIViewController <MMMemoryManagerDelegate> {
    MMCollapsableStackView* currentStackView;
}

- (id)init NS_UNAVAILABLE;
- (id)initWithSilhouette:(MMShadowHandView*)silhouette;

@property (nonatomic, readonly) MMShadowHandView* silhouette;
@property (nonatomic, readonly) MMPagesInBezelContainerView* bezelPagesContainer;

- (void)importFileFrom:(NSURL*)url fromApp:(NSString*)sourceApplication;

- (void)willResignActive;

- (void)didEnterBackground;

@end
