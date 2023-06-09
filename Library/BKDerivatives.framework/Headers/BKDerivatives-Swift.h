#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef BKDERIVATIVES_SWIFT_H
#define BKDERIVATIVES_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import JXSegmentedView;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BKDerivatives",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;

SWIFT_CLASS("_TtC13BKDerivatives37BKAlertConfirmWithVerticalButtonsView")
@interface BKAlertConfirmWithVerticalButtonsView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13BKDerivatives19BKAlertIconInfoView")
@interface BKAlertIconInfoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end

@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC13BKDerivatives23BKFutureTradeController")
@interface BKFutureTradeController : UIViewController
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

@interface BKFutureTradeController (SWIFT_EXTENSION(BKDerivatives)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC13BKDerivatives12BKLangHelper")
@interface BKLangHelper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13BKDerivatives13BKMarqueeView")
@interface BKMarqueeView : UIView
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


/// An object that manages drag-and-drop reordering of table view cells.
SWIFT_CLASS("_TtC13BKDerivatives19BKReorderController")
@interface BKReorderController : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class UIGestureRecognizer;

@interface BKReorderController (SWIFT_EXTENSION(BKDerivatives)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end





SWIFT_CLASS("_TtC13BKDerivatives8BKRouter")
@interface BKRouter : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BKRouter * _Nonnull shared;)
+ (BKRouter * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)open:(NSString * _Nonnull)URL urlParams:(NSDictionary<NSString *, id> * _Nonnull)urlParams closure:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))closure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC13BKDerivatives20BKUltimatePositionVC")
@interface BKUltimatePositionVC : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface BKUltimatePositionVC (SWIFT_EXTENSION(BKDerivatives)) <JXSegmentedListContainerViewListDelegate>
- (UIView * _Nonnull)listView SWIFT_WARN_UNUSED_RESULT;
@end


@interface BKUltimatePositionVC (SWIFT_EXTENSION(BKDerivatives)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC13BKDerivatives22BKVerificationCodeView")
@interface BKVerificationCodeView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



/// 数据元素
SWIFT_CLASS("_TtC13BKDerivatives11JPChartItem")
@interface JPChartItem : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@protocol CAAction;

SWIFT_CLASS("_TtC13BKDerivatives15JPGradientLayer")
@interface JPGradientLayer : CAGradientLayer
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class JPKLineChartView;
@class JPSection;
@class NSAttributedString;

/// K线数据源代理
SWIFT_PROTOCOL("_TtP13BKDerivatives20JPKLineChartDelegate_")
@protocol JPKLineChartDelegate
/// 获取图表Y轴的显示的内容
/// parameter chart:
/// parameter value:计算得出的y值
/// returns:
- (NSString * _Nonnull)lineChartWithChart:(JPKLineChartView * _Nonnull)chart yAxisTextForIndex:(NSInteger)index value:(CGFloat)value section:(JPSection * _Nonnull)section SWIFT_WARN_UNUSED_RESULT;
/// 获取图表X轴的显示的内容
/// parameter chart:
/// parameter itme:索引位
/// *returns:
- (NSString * _Nonnull)lineChartWithChart:(JPKLineChartView * _Nonnull)chart xAxisTextForIndex:(NSInteger)index item:(JPChartItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
/// 配置各个分区小数位保留数
/// parameter chart:
/// parameter decimalForSection: 分区
/// returns:
/// *
- (NSInteger)lineChartWithChart:(JPKLineChartView * _Nonnull)chart decimalForSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// 自定义section的头部View显示内容
/// Parameters:
/// chart: 图表
/// section: 分区的索引位
/// Returns: 自定义的View
/// *
- (NSAttributedString * _Nullable)lineChartWithChart:(JPKLineChartView * _Nonnull)chart titleForSection:(JPSection * _Nonnull)section index:(NSInteger)index item:(JPChartItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
@optional
/// 点击图表列响应方法
/// Parameters:
/// chart: 图表
/// item: 数据对象
/// *
- (void)lineChartWithChart:(JPKLineChartView * _Nonnull)chart didSelectItem:(JPChartItem * _Nonnull)item index:(NSInteger)index point:(CGPoint)point;
/// 滑动事件回调
/// Parameters:
/// chart: 图表
/// *
- (void)didScrollLineChartWithChart:(JPKLineChartView * _Nonnull)chart;
/// 长按事件回调
/// Parameters:
/// chart: 图表
/// *
- (void)didLongPressLineChartWithChart:(JPKLineChartView * _Nonnull)chart;
/// 双指事件回调
/// Parameters:
/// chart: 图表
/// *
- (void)didPinchLineChartWithChart:(JPKLineChartView * _Nonnull)chart;
/// 点击事件回调
/// Parameters:
/// chart: 图表
/// *
- (void)didTapLineChartWithChart:(JPKLineChartView * _Nonnull)chart;
/// 完成绘画图表
- (void)didRefreshCompleteWithChart:(JPKLineChartView * _Nonnull)chart;
/// 右滑加载更多
/// Parameters:
/// chart: 图表
/// *
- (void)loadMoreDataWithChart:(JPKLineChartView * _Nonnull)chart;
@end


SWIFT_CLASS("_TtC13BKDerivatives16JPKLineChartView")
@interface JPKLineChartView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end

@class UITouch;

@interface JPKLineChartView (SWIFT_EXTENSION(BKDerivatives))
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


@interface JPKLineChartView (SWIFT_EXTENSION(BKDerivatives))
- (void)layoutSubviews;
@end




/// K线的区域
SWIFT_CLASS("_TtC13BKDerivatives9JPSection")
@interface JPSection : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// 线段组
/// 在图表中一个要显示的“线段”都是以一个JPSeries进行封装。
/// 蜡烛图线段：包含一个蜡烛图点线模型（JPCandleModel）
/// 时分线段：包含一个线点线模型（JPLineModel）
/// 交易量线段：包含一个交易量点线模型（JPVolumeModel）
/// MA/EMA线段：包含一个线点线模型（JPLineModel）
/// KDJ线段：包含3个线点线模型（JPLineModel），3个点线的数值根据KDJ指标算法计算所得
/// MACD线段：包含2个线点线模型（JPLineModel），1个条形点线模型
/// *
SWIFT_CLASS("_TtC13BKDerivatives8JPSeries")
@interface JPSeries : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// *关 闭 CALayer 的隐式动画，
/// <ul>
///   <li>
///     避免滑动时候或者十字线出现时有残影的现象
///   </li>
///   <li>
///     (实际上是因为 Layer 的 position 属性变化而产生的隐式动画)
///   </li>
/// </ul>
SWIFT_CLASS("_TtC13BKDerivatives12JPShapeLayer")
@interface JPShapeLayer : CAShapeLayer
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13BKDerivatives11JPTextLayer")
@interface JPTextLayer : CATextLayer
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



/// “symbol”: [string]  币对
/// “side”:   [int32]   方向[1-买；2-卖]
/// “amount”: [float64] 加成额
/// “time”:   [int64]   时间
SWIFT_CLASS("_TtC13BKDerivatives15KLAdditionModel")
@interface KLAdditionModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13BKDerivatives11KLDealModel")
@interface KLDealModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13BKDerivatives12KLDepthModel")
@interface KLDepthModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13BKDerivatives12KLLineParser")
@interface KLLineParser : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13BKDerivatives12KLQuoteModel")
@interface KLQuoteModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





/// Represents a single ping instance. A ping instance has a single destination.
SWIFT_CLASS("_TtC13BKDerivatives10SwiftyPing")
@interface SwiftyPing : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







@interface UIColor (SWIFT_EXTENSION(BKDerivatives))
/// 16进制表示颜色
/// \param hex 
///
///
/// returns:
///
+ (UIColor * _Nonnull)hexColor:(NSUInteger)hex alpha:(float)alpha SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIColor (SWIFT_EXTENSION(BKDerivatives))
/// #202630  /#EAECEF
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c1;)
+ (UIColor * _Nonnull)c1 SWIFT_WARN_UNUSED_RESULT;
/// #F34718  /#F34718
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c2;)
+ (UIColor * _Nonnull)c2 SWIFT_WARN_UNUSED_RESULT;
/// #929AA5  /#707A8A
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c3;)
+ (UIColor * _Nonnull)c3 SWIFT_WARN_UNUSED_RESULT;
/// #848E9C /#848E9C
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c4;)
+ (UIColor * _Nonnull)c4 SWIFT_WARN_UNUSED_RESULT;
/// #B7BDC6 /#434C5A
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c5;)
+ (UIColor * _Nonnull)c5 SWIFT_WARN_UNUSED_RESULT;
/// #EAECEF /#333B47
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c6;)
+ (UIColor * _Nonnull)c6 SWIFT_WARN_UNUSED_RESULT;
/// #EAECEF /#434C5A
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c7;)
+ (UIColor * _Nonnull)c7 SWIFT_WARN_UNUSED_RESULT;
/// Up深度底色 alpha 0.2   #FDECEF /#352934   -M #FBF1EA /#332E2F
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c9;)
+ (UIColor * _Nonnull)c9 SWIFT_WARN_UNUSED_RESULT;
/// Down深度底色 alpha 0.2    #EAF8F3 /213538  -M #E7F6FE /#1E3244
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c10;)
+ (UIColor * _Nonnull)c10 SWIFT_WARN_UNUSED_RESULT;
/// #F7F7FA /#29313D
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c11;)
+ (UIColor * _Nonnull)c11 SWIFT_WARN_UNUSED_RESULT;
/// #FFFFFF /#29313D
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c12;)
+ (UIColor * _Nonnull)c12 SWIFT_WARN_UNUSED_RESULT;
/// #B7BDC6 / /#707A8A
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c13;)
+ (UIColor * _Nonnull)c13 SWIFT_WARN_UNUSED_RESULT;
/// #D8DCE1 /#434C5A
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull c14;)
+ (UIColor * _Nonnull)c14 SWIFT_WARN_UNUSED_RESULT;
/// #F7F7FA /#181E25
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull bc1;)
+ (UIColor * _Nonnull)bc1 SWIFT_WARN_UNUSED_RESULT;
/// #FFFFFF /#202630
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull bc2;)
+ (UIColor * _Nonnull)bc2 SWIFT_WARN_UNUSED_RESULT;
/// #2D2E31
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull kLine2;)
+ (UIColor * _Nonnull)kLine2 SWIFT_WARN_UNUSED_RESULT;
/// #DE1E4D
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull kLine3;)
+ (UIColor * _Nonnull)kLine3 SWIFT_WARN_UNUSED_RESULT;
/// #888B93
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull kLine4;)
+ (UIColor * _Nonnull)kLine4 SWIFT_WARN_UNUSED_RESULT;
/// #E9B740
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull ma5;)
+ (UIColor * _Nonnull)ma5 SWIFT_WARN_UNUSED_RESULT;
/// #406ce9
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull ma10;)
+ (UIColor * _Nonnull)ma10 SWIFT_WARN_UNUSED_RESULT;
/// #9040E9
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull ma30;)
+ (UIColor * _Nonnull)ma30 SWIFT_WARN_UNUSED_RESULT;
/// #848E9C
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull vol;)
+ (UIColor * _Nonnull)vol SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull up;)
+ (UIColor * _Nonnull)up SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull down;)
+ (UIColor * _Nonnull)down SWIFT_WARN_UNUSED_RESULT;
/// #EA2424 /#EA2424
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull G1;)
+ (UIColor * _Nonnull)G1 SWIFT_WARN_UNUSED_RESULT;
/// #F89912 /#F89912
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull G2;)
+ (UIColor * _Nonnull)G2 SWIFT_WARN_UNUSED_RESULT;
/// #0EC67F /#0EC67F
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull G3;)
+ (UIColor * _Nonnull)G3 SWIFT_WARN_UNUSED_RESULT;
@end















@interface UIView (SWIFT_EXTENSION(BKDerivatives))
- (UIView * _Nonnull)copyMarqueeView SWIFT_WARN_UNUSED_RESULT;
@end






#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
