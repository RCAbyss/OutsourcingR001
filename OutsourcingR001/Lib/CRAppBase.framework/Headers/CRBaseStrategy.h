/**
 *  ==============CRBaseStrategy=============
 *   Base Strategy
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#pragma mark - Collection

#import "UIView+Base.h"
#import "UIColor+Base.h"
#import "CALayer+Base.h"
#import "UIViewController+Base.h"

typedef void (^GetValueBlock)(id value);
/**
 *  系统尺寸
 */

#define rSCREEN_SIZE                    ([[UIScreen mainScreen] bounds].size)
#define rSTATUBAR_HEIGHT                20
#define rNAVIGATIONBAR_HEIGHT           44



/**
 *  获取图片
 *
 *  @ rIMAGE()              name
 *  @ rIMAGE_SELECT()       !name
 *  @ rIMAGE_HIGHLIGHT()    @name
 *
 *  为了以后的方便,请务必按照格式命名
 */

#define rIMAGE(_n)                      image2original(_n)
#define rIMAGE_SELECT(_n)               image2select(_n)
#define rIMAGE_HIGHLIGHT(_n)            image2highlight(_n)


/**
 *  获取颜色
 */

#define rCOLOR_HEX(_v)                  color2HexString(_v)

#define rCOLOR(_v)                      rCOLOR_RGB(_v,_v,_v)
#define rCOLOR_RGB(_r,_g,_b)            rCOLOR_RGBA(_r,_g,_b,1)
#define rCOLOR_RGBA(_r,_g,_b,_a)        [UIColor colorWithRGB:_r Green:_g Blue:_b alpha:_a]

#define rCOLOR_TOPIC                    rCOLOR(200)
#define rCOLOR_LINE                     rCOLOR(220)
#define rCOLOR_GRAY                     rCOLOR(100)
#define rCOLOR_WHITE                    rCOLOR(255)
#define rCOLOR_BLACK                    rCOLOR(0)


/**
 *  获取字体
 */

#define rFONT(_v)                       [UIFont systemFontOfSize:_v]
#define rFONT_S                         rFONT(12.f)
#define rFONT_M                         rFONT(14.f)
#define rFONT_G                         rFONT(16.f)


extern UIColor* color2HexString(NSString* hexString);

extern UIImage* image2original (NSString* image);
extern UIImage* image2select (NSString* image);
extern UIImage* image2highlight (NSString* image);

