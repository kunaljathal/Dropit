//
//  DropitBehavior.h
//  Dropit
//
//  Created by Kunal Jathal on 1/8/15.
//  Copyright (c) 2015 Kunal Jathal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;

@end
