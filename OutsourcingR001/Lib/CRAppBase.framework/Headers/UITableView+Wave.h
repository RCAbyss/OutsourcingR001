/**
 *  ================UITableView================
 *  Wave UITableView
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <UIKit/UIKit.h>

/** 回弹的距离 */
#define rPRE_WAVE_BOUNCE  2

typedef NS_ENUM(NSInteger,WaveAnimation)
{
    LeftToRightWaveAnimation = -1,
    RightToLeftWaveAnimation = 1
};


@interface UITableView (Wave)

- (void)reloadDataAnimateWithWave:(WaveAnimation)animation;

@end
