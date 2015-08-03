/**
 *  CRRefreshController.h
 *
 *  NetClient.framework
 *  Copyright (c) 2015年 Roger Abyss. All rights reserved.
 *
 *  列表刷新控制器
 *  封装基于:  MJRefresh
 *  支持 UITableView,UICollectionView,UIScrollView等所以基于ScrollView实现的列表
 *
 *  Useage:
 *  1.Delegate里定义静态请求发送器、请求接收器、公共参数转化器等
 *  2.使用CRRefreshController控制页面的UITableView等类或其子类，请定义参数构成器
 *  3.像往常一样使用UITableView等类或其子类,数据控制交给CRRefreshController.
 *  4.详情见Demo
 *
 *
 *
 *  Function:
 *  1.控制数据请求（上拉，下拉）
 *  2.高度自定义适用于任何返回接受数据形式
 *  3.接受类型为CRDictionaryWrapper 具体用法、拓展自行查看
 *
 */

#import <UIKit/UIkit.h>
#import <Foundation/Foundation.h>
#import "CRDictionaryWrapper.h"
#import "CRRequest.h"

@class CRDictionaryWrapper;
@class CRRefreshController;

typedef NSDictionary* (^ MJRefreshURLGenerator)(NSString* refreshName, int pageIndex,int pageSize);
//typedef NSDictionary* (^ MJRefreshNetData2MJData)(CRDictionaryWrapper* refreshData);
typedef NSDictionary* (^ MJRefreshNetData2MJData)(CRRequest* request);

typedef void (^ MJRefreshRequest)(CRRefreshController* controller, SEL seletor, BOOL byHeader, NSDictionary* refreshData);
//typedef void (^ MJRefreshOnRequestDone)(CRRefreshController* controller, BOOL byHeader, CRDictionaryWrapper* netData);
typedef void (^ MJRefreshOnRequestDone)(CRRefreshController* controller, BOOL byHeader, CRRequest* request);

typedef BOOL (^ MJRefreshPrevRequestHandler)(CRRefreshController* controller, BOOL byHeader, id arguments);
typedef void (^ MJRefreshPostRequestHandler)(CRRefreshController* controller, BOOL byHeader, id arguments);

typedef enum
{
    RefreshTypeNone = 0,
    RefreshTypeHeader = 1 << 0,
    RefreshTypeFooter = 1 << 1,
    
    RefreshTypeAll    = (RefreshTypeHeader | RefreshTypeFooter),
}RefreshType;

@interface CRRefreshController : NSObject
@property (nonatomic, strong, readonly) NSArray* netData;
@property (nonatomic, strong, readonly) id refreshView;

@property (nonatomic, assign, readonly) int16_t  currentPage;
@property (nonatomic, assign, readonly) int16_t  refreshCount;

@property (nonatomic, assign) RefreshType style;
@property (nonatomic, assign) int16_t pageSize;

/**
 *  create Controller for refresh
 *
 *  @param refreshView UITableView
 *  @param refreshName request
 *
 *  @return Controller
 */

+ (instancetype)controllerFrom:(id)refreshView name:(NSString*)refreshName;
- (void)addHeader;
- (void)addFooter;

/**
 *  refreshData
 */

- (void)refresh;
- (void)refreshWithLoading;
- (id)dataAtIndex:(int16_t)index;
- (void)removeDataAtIndex:(int16_t)index;


- (void) setURLGenerator:               (MJRefreshURLGenerator) urlGenerator;           // 1.url generate
- (void) setRequester:                  (MJRefreshRequest)requester;                    // 2.requestor
- (void) setDataConverter:              (MJRefreshNetData2MJData) dataConverter;        // 3.convert recive data

- (void) setOnRequestDone:              (MJRefreshOnRequestDone)onRequestDone;          // request done


- (void) setPrevRequestHandler:         (MJRefreshPrevRequestHandler)prev;              // recive data before done
- (void) setPostRequestHandler:         (MJRefreshPostRequestHandler)post;              // recive data after  done

// Defualt

+ (void) setDefaultURLGenerator:        (MJRefreshURLGenerator) urlGenerator;
+ (void) setDefaultDataConverter:       (MJRefreshNetData2MJData) dataConverter;
+ (void) setDefaultRequester:           (MJRefreshRequest)requester;
+ (void) setDefaultOnRequestDone:       (MJRefreshOnRequestDone)onRequestDone;
+ (void) setDefaultPrevRequestHandler:  (MJRefreshPrevRequestHandler)prev;
+ (void) setDefaultPostRequestHandler:  (MJRefreshPostRequestHandler)post;

@end
