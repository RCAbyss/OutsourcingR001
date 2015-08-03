/**
 *  ==================CALayer==================
 *   CALayer+Base
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */


@interface CALayer (Strategy)

/**
 *  CALayer 属性拓展
 */

@property CGSize size;

@property CGPoint center;
@property CGPoint origin;

@property CGFloat width;
@property CGFloat height;

@property CGFloat top;
@property CGFloat left;
@property CGFloat right;
@property CGFloat bottom;

@property (readonly) CGPoint topRight;
@property (readonly) CGPoint bottomLeft;
@property (readonly) CGPoint bottomRight;

/**
 *  圆角 默认5.f
 */
- (void)setRoundCorner;
- (void)setRoundCornerWith:(CGFloat)dgree;
- (void)setRoundCornerAll;

/**
 *  边界 默认颜色rCOLOR_LINE
 */

- (void)setBorder;
- (void)setBorderWith:(UIColor *)color;

/**
 *  添加或删除 CALayer
 */

- (void)addLayers:(CALayer *)layer,...NS_REQUIRES_NIL_TERMINATION;
- (void)removeAllSublayers;

/**
 *  CALayer判断
 */

- (BOOL)containsSubLayer:(CALayer *)subLayer;
- (BOOL)containsSubLayerOfClassType:(Class)anyClass;

@end
