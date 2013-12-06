//
//  DotGameScene.h
//  disappear
//
//  Created by CpyShine on 13-5-31.
//  Copyright 2013年 CpyShine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import <GameKit/GameKit.h>

@interface DotGameScene : CCScene<UIActionSheetDelegate,
                                  GKGameCenterControllerDelegate,
                                  GKAchievementViewControllerDelegate,
                                  GKLeaderboardViewControllerDelegate>
{
    CCMenuItemImage * m_playnow;
    CCMenuItemImage * m_logo;
    CCMenuItemImage * m_singleplay;
}

@end
