//
//  DotHudController.h
//  disappear
//
//  Created by CpyShine on 13-6-5.
//  Copyright 2013年 CpyShine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "configdouble.h"

@class UpStateLayer;
@class DownStateLayer;
@class doublePauseLayer;
@class TopScoreLayer;

@interface DotdoubleHudController : CCNode {
    
    UpStateLayer * m_upstateLayer;
    DownStateLayer * m_downStateLayer;
    doublePauseLayer * m_pauseLayer;
    
    TopScoreLayer * m_topScoreLayer;
    
    BOOL m_pause;
}

-(void) gamePause;

-(void) currentGameOver:(NSInteger)score;

-(void) resetTimeString:(NSString*)string;
-(void) resetScoreString:(NSString*) string;

-(void) startGame;

-(void) playerUseSkill:(PLAYERTOOLTYPE) skillTpye;

@end
