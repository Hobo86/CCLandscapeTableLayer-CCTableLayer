//
//  HelloWorldLayer.h
//  CCTableLayerTest
//
//  Created by Joe on 13-2-27.
//  Copyright __MyCompanyName__ 2013年. All rights reserved.
//


// When you import this file, you import all the cocos2d classes

#import <Foundation/Foundation.h>
#import "cocos2d.h"

#import "CCLandscapeTableLayer.h"
// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
<CCLandscapeTableLayerDelegate,
CCLandscapeTableLayerDataSource>
{
    //CCTableLayer *_tableLayer;
    CCLandscapeTableLayer *_tableLayer;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
