/**
 *  CRActionSheetController.h
 *
 *  NetClient.framework
 *  Copyright (c) 2015年 Roger Abyss. All rights reserved.
 *
 *  ActionSheet
 *
 *  Tips:
 *  拓展性还很低！有需要的时候我会改进！不建议使用。
 *
 */

#import <UIKit/UIKit.h>

/**
 *  创建九宫格按钮
 */
#define Sudoku_BORDER_WIDTH 0.5
#define Sudoku_BORDER_COLOR [UIColor colorWithRed:240/255.0 green:240/255.0 blue:240/255.0 alpha:1]
#define Sudoku_BG_COLOR_NORMAL [UIColor whiteColor]
#define Sudoku_BG_COLOR_HIGHLIGHT [UIColor lightGrayColor]

@class SudokuItem;
typedef void(^TouchBlock)(SudokuItem* item,NSInteger index);
typedef SudokuItem* (^ItemWillSetBlock)(SudokuItem* item,NSDictionary* data);
@interface CRSudokuView : UIView
@property (strong, nonatomic) NSArray* data;

@property (copy, nonatomic) TouchBlock       block;
@property (copy, nonatomic) ItemWillSetBlock willSetBlock;

@property (assign, nonatomic) NSInteger numOfItem;
@property (assign, nonatomic) NSInteger numOfVertical;
@property (assign, nonatomic) NSInteger numOfHorizontal;

+ (CRSudokuView *)sudokuFrom:(NSArray *)array;
+ (CRSudokuView *)sudokuFrom:(NSArray *)array v:(NSInteger)v h:(NSInteger)h;
- (CRSudokuView *)sudokuFrom:(NSArray *)array v:(NSInteger)v h:(NSInteger)h;
@end

@interface SudokuItem : UIView

+ (SudokuItem *)itemFrom:(NSDictionary *)data;
- (UIButton *)touchInstance;
@end