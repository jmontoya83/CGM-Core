#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Cgm_shared_moduleBloodGlucoseScale, Cgm_shared_moduleTimeScale, Cgm_shared_moduleGoalRange, Cgm_shared_moduleEGV, Cgm_shared_moduleLatestEGV, Cgm_shared_moduleTrend, Cgm_shared_moduleOperationMode, Cgm_shared_moduleLatestIOB, Cgm_shared_modulePodEvent, Cgm_shared_moduleCGMGraph, Cgm_shared_moduleCGMGraphHistoryPeriod, Cgm_shared_moduleCircle, Cgm_shared_moduleRectangle, Cgm_shared_moduleGoalRange_, Cgm_shared_moduleScale, Cgm_shared_moduleLatestEGVAvailable, Cgm_shared_moduleMedicalValue, Cgm_shared_moduleMedicalValueAvailable, Cgm_shared_moduleAutomatedStatus, Cgm_shared_moduleManualStatus, Cgm_shared_modulePodEventAutomated, Cgm_shared_moduleViewSize, Cgm_shared_moduleCGMGraphFacade, Cgm_shared_moduleDrawGCMGraphStrategy, Cgm_shared_moduleBitmapReference, Cgm_shared_moduleDottedLine, Cgm_shared_moduleLabel, Cgm_shared_moduleLine, Cgm_shared_moduleGraphColorsConstants, Cgm_shared_moduleDegrees, Cgm_shared_moduleEGVColorsConstants, Cgm_shared_moduleIOBColorsConstants, Cgm_shared_moduleOperationModeColorsConstants, Cgm_shared_moduleCommonColor, Cgm_shared_moduleTrend_, Cgm_shared_moduleTrend_Double, Cgm_shared_moduleTrend_Normal, Cgm_shared_moduleCGMValueColorsConstants, Cgm_shared_moduleColorMode, Cgm_shared_moduleAutomatedStatus_, Cgm_shared_modulePoint, Cgm_shared_moduleBadge, Cgm_shared_moduleLineCap, Cgm_shared_modulePopup, Cgm_shared_moduleTextAlignment, Cgm_shared_moduleTextStyle, Cgm_shared_moduleManualStatus_, Cgm_shared_moduleMedicalValue_, Cgm_shared_modulePopupDescription, Cgm_shared_modulePopupDescriptionAutomated, Cgm_shared_modulePopupDescriptionAutomatedHypoProtected, Cgm_shared_modulePopupDescriptionAutomatedLimited, Cgm_shared_modulePopupDescriptionAutomatedNormal, Cgm_shared_modulePopupDescriptionBolus, Cgm_shared_modulePopupDescriptionManual, Cgm_shared_modulePopupDescriptionPod, Cgm_shared_modulePopupDescriptionPodActivated, Cgm_shared_modulePopupDescriptionPodDeactivated;

@protocol Cgm_shared_moduleCGMGraphRender, Cgm_shared_moduleCGMStatusBarBinder, Cgm_shared_moduleCGMStatusBarCoordinator, Cgm_shared_moduleCGMGraphRenderCoordinator, Cgm_shared_moduleCGMGraphRenderCoordinatorDrawer, Cgm_shared_moduleCGMGraphRenderCoordinatorCreator, Cgm_shared_moduleUITools, Cgm_shared_moduleOperationModeBinder, Cgm_shared_moduleIobBinder, Cgm_shared_moduleLatestEGVBindStrategyFactory, Cgm_shared_moduleLatestEGVBindStrategy, Cgm_shared_moduleCGMLatestEGVNotAvailableBinder, Cgm_shared_moduleCGMLatestEGVOnRangeBinder, Cgm_shared_moduleCGMValueColorFactory, Cgm_shared_moduleUITrendFactory, Cgm_shared_moduleCGMLatestEGVOutOfRangeBinder, Cgm_shared_moduleCGMIobBinder, Cgm_shared_moduleCGMLatestEGVBinder, Cgm_shared_moduleCGMOperationModeBinder, Cgm_shared_moduleCGMGraphFacadeFactory, Cgm_shared_moduleCGMRenderView, Cgm_shared_moduleColorConstantProvider, Cgm_shared_moduleDarkColors, Cgm_shared_moduleDarkableColors;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface Cgm_shared_moduleBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Cgm_shared_moduleBase (Cgm_shared_moduleBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Cgm_shared_moduleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Cgm_shared_moduleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCgm_shared_moduleKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Cgm_shared_moduleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Cgm_shared_moduleByte : Cgm_shared_moduleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Cgm_shared_moduleUByte : Cgm_shared_moduleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Cgm_shared_moduleShort : Cgm_shared_moduleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Cgm_shared_moduleUShort : Cgm_shared_moduleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Cgm_shared_moduleInt : Cgm_shared_moduleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Cgm_shared_moduleUInt : Cgm_shared_moduleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Cgm_shared_moduleLong : Cgm_shared_moduleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Cgm_shared_moduleULong : Cgm_shared_moduleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Cgm_shared_moduleFloat : Cgm_shared_moduleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Cgm_shared_moduleDouble : Cgm_shared_moduleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Cgm_shared_moduleBoolean : Cgm_shared_moduleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BloodGlucoseScale")))
@interface Cgm_shared_moduleBloodGlucoseScale : Cgm_shared_moduleBase
- (instancetype)initWithMaxValue:(int32_t)maxValue minValue:(int32_t)minValue intervalReference:(int32_t)intervalReference __attribute__((swift_name("init(maxValue:minValue:intervalReference:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(int32_t)value __attribute__((swift_name("contains(value:)")));
@property (readonly) int32_t intervalReference __attribute__((swift_name("intervalReference")));
@property (readonly) int32_t maxValue __attribute__((swift_name("maxValue")));
@property (readonly) int32_t minValue __attribute__((swift_name("minValue")));
@property (readonly) int32_t range __attribute__((swift_name("range")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BloodGlucoseScale.Companion")))
@interface Cgm_shared_moduleBloodGlucoseScaleCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t BG_LIMITS_OFFSET __attribute__((swift_name("BG_LIMITS_OFFSET")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraph")))
@interface Cgm_shared_moduleCGMGraph : Cgm_shared_moduleBase
- (instancetype)initWithBloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale timeScale:(Cgm_shared_moduleTimeScale *)timeScale goalRange:(Cgm_shared_moduleGoalRange *)goalRange egvList:(NSArray<Cgm_shared_moduleEGV *> *)egvList latestEGV:(Cgm_shared_moduleLatestEGV *)latestEGV trend:(Cgm_shared_moduleTrend *)trend operationMode:(Cgm_shared_moduleOperationMode *)operationMode latestIOB:(Cgm_shared_moduleLatestIOB *)latestIOB events:(NSArray<Cgm_shared_modulePodEvent *> *)events __attribute__((swift_name("init(bloodGlucoseScale:timeScale:goalRange:egvList:latestEGV:trend:operationMode:latestIOB:events:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleBloodGlucoseScale *)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleTimeScale *)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleGoalRange *)component3 __attribute__((swift_name("component3()")));
- (NSArray<Cgm_shared_moduleEGV *> *)component4 __attribute__((swift_name("component4()")));
- (Cgm_shared_moduleLatestEGV *)component5 __attribute__((swift_name("component5()")));
- (Cgm_shared_moduleTrend *)component6 __attribute__((swift_name("component6()")));
- (Cgm_shared_moduleOperationMode *)component7 __attribute__((swift_name("component7()")));
- (Cgm_shared_moduleLatestIOB *)component8 __attribute__((swift_name("component8()")));
- (NSArray<Cgm_shared_modulePodEvent *> *)component9 __attribute__((swift_name("component9()")));
- (Cgm_shared_moduleCGMGraph *)doCopyBloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale timeScale:(Cgm_shared_moduleTimeScale *)timeScale goalRange:(Cgm_shared_moduleGoalRange *)goalRange egvList:(NSArray<Cgm_shared_moduleEGV *> *)egvList latestEGV:(Cgm_shared_moduleLatestEGV *)latestEGV trend:(Cgm_shared_moduleTrend *)trend operationMode:(Cgm_shared_moduleOperationMode *)operationMode latestIOB:(Cgm_shared_moduleLatestIOB *)latestIOB events:(NSArray<Cgm_shared_modulePodEvent *> *)events __attribute__((swift_name("doCopy(bloodGlucoseScale:timeScale:goalRange:egvList:latestEGV:trend:operationMode:latestIOB:events:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleBloodGlucoseScale *bloodGlucoseScale __attribute__((swift_name("bloodGlucoseScale")));
@property (readonly) NSArray<Cgm_shared_moduleEGV *> *egvList __attribute__((swift_name("egvList")));
@property (readonly) NSArray<Cgm_shared_modulePodEvent *> *events __attribute__((swift_name("events")));
@property (readonly) Cgm_shared_moduleGoalRange *goalRange __attribute__((swift_name("goalRange")));
@property (readonly) Cgm_shared_moduleLatestEGV *latestEGV __attribute__((swift_name("latestEGV")));
@property (readonly) Cgm_shared_moduleLatestIOB *latestIOB __attribute__((swift_name("latestIOB")));
@property (readonly) Cgm_shared_moduleOperationMode *operationMode __attribute__((swift_name("operationMode")));
@property (readonly) Cgm_shared_moduleTimeScale *timeScale __attribute__((swift_name("timeScale")));
@property (readonly) Cgm_shared_moduleTrend *trend __attribute__((swift_name("trend")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraph.Companion")))
@interface Cgm_shared_moduleCGMGraphCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) Cgm_shared_moduleCGMGraph *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((swift_name("CGMGraphHistoryPeriod")))
@interface Cgm_shared_moduleCGMGraphHistoryPeriod : Cgm_shared_moduleBase
@property (readonly) int64_t halfHoursInPeriod __attribute__((swift_name("halfHoursInPeriod")));
@property (readonly) int64_t hoursInPeriod __attribute__((swift_name("hoursInPeriod")));
@property (readonly) int64_t milliseconds __attribute__((swift_name("milliseconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraphHistoryPeriod.ThreeHours")))
@interface Cgm_shared_moduleCGMGraphHistoryPeriodThreeHours : Cgm_shared_moduleCGMGraphHistoryPeriod
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)threeHours __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("CGMGraphRenderCoordinatorDrawer")))
@protocol Cgm_shared_moduleCGMGraphRenderCoordinatorDrawer
@required
- (void)drawEGVListCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender circles:(NSArray<Cgm_shared_moduleCircle *> *)circles __attribute__((swift_name("drawEGVList(cgmGraphRender:circles:)")));
- (void)drawEventsCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender events:(NSArray<Cgm_shared_moduleRectangle *> *)events __attribute__((swift_name("drawEvents(cgmGraphRender:events:)")));
- (void)drawGoalRangeCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender goalRange:(Cgm_shared_moduleGoalRange_ *)goalRange __attribute__((swift_name("drawGoalRange(cgmGraphRender:goalRange:)")));
- (void)drawScaleCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender scale:(Cgm_shared_moduleScale *)scale __attribute__((swift_name("drawScale(cgmGraphRender:scale:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGV")))
@interface Cgm_shared_moduleEGV : Cgm_shared_moduleBase
- (instancetype)initWithValue:(int32_t)value time:(int64_t)time __attribute__((swift_name("init(value:time:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleEGV *)doCopyValue:(int32_t)value time:(int64_t)time __attribute__((swift_name("doCopy(value:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isWithinScalesBloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale timeScale:(Cgm_shared_moduleTimeScale *)timeScale __attribute__((swift_name("isWithinScales(bloodGlucoseScale:timeScale:)")));
- (BOOL)isWithinThresholdUntil:(int64_t)until __attribute__((swift_name("isWithinThreshold(until:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGV.Companion")))
@interface Cgm_shared_moduleEGVCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int64_t EGV_TIME_THRESHOLD __attribute__((swift_name("EGV_TIME_THRESHOLD")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoalRange")))
@interface Cgm_shared_moduleGoalRange : Cgm_shared_moduleBase
- (instancetype)initWithUpperLimit:(int32_t)upperLimit lowerLimit:(int32_t)lowerLimit targetBloodGlucose:(int32_t)targetBloodGlucose __attribute__((swift_name("init(upperLimit:lowerLimit:targetBloodGlucose:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsLatestEGVAvailable:(Cgm_shared_moduleLatestEGVAvailable *)latestEGVAvailable __attribute__((swift_name("contains(latestEGVAvailable:)")));
- (BOOL)containsValue:(int32_t)value __attribute__((swift_name("contains(value:)")));
@property (readonly) int32_t lowerLimit __attribute__((swift_name("lowerLimit")));
@property (readonly) int32_t targetBloodGlucose __attribute__((swift_name("targetBloodGlucose")));
@property (readonly) int32_t upperLimit __attribute__((swift_name("upperLimit")));
@end;

__attribute__((swift_name("LatestEGV")))
@interface Cgm_shared_moduleLatestEGV : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestEGV.Available")))
@interface Cgm_shared_moduleLatestEGVAvailable : Cgm_shared_moduleLatestEGV
- (instancetype)initWithEgv:(Cgm_shared_moduleEGV *)egv __attribute__((swift_name("init(egv:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToGoalRange:(Cgm_shared_moduleGoalRange *)goalRange __attribute__((swift_name("compareTo(goalRange:)")));
@property (readonly) Cgm_shared_moduleEGV *egv __attribute__((swift_name("egv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestEGV.NotAvailable")))
@interface Cgm_shared_moduleLatestEGVNotAvailable : Cgm_shared_moduleLatestEGV
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notAvailable __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("LatestIOB")))
@interface Cgm_shared_moduleLatestIOB : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestIOB.Available")))
@interface Cgm_shared_moduleLatestIOBAvailable : Cgm_shared_moduleLatestIOB
- (instancetype)initWithValue:(float)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestIOB.NotAvailable")))
@interface Cgm_shared_moduleLatestIOBNotAvailable : Cgm_shared_moduleLatestIOB
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notAvailable __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("MedicalValue")))
@interface Cgm_shared_moduleMedicalValue : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalValue.Available")))
@interface Cgm_shared_moduleMedicalValueAvailable : Cgm_shared_moduleMedicalValue
- (instancetype)initWithValue:(float)value units:(NSString *)units __attribute__((swift_name("init(value:units:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleMedicalValueAvailable *)doCopyValue:(float)value units:(NSString *)units __attribute__((swift_name("doCopy(value:units:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *units __attribute__((swift_name("units")));
@property (readonly) float value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalValue.NotAvailable")))
@interface Cgm_shared_moduleMedicalValueNotAvailable : Cgm_shared_moduleMedicalValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notAvailable __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("OperationMode")))
@interface Cgm_shared_moduleOperationMode : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationMode.Automated")))
@interface Cgm_shared_moduleOperationModeAutomated : Cgm_shared_moduleOperationMode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)automated __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationMode.AutomatedLimited")))
@interface Cgm_shared_moduleOperationModeAutomatedLimited : Cgm_shared_moduleOperationMode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)automatedLimited __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationMode.Manual")))
@interface Cgm_shared_moduleOperationModeManual : Cgm_shared_moduleOperationMode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)manual __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeScale")))
@interface Cgm_shared_moduleTimeScale : Cgm_shared_moduleBase
- (instancetype)initWithUntil:(int64_t)until cgmGraphHistoryPeriod:(Cgm_shared_moduleCGMGraphHistoryPeriod *)cgmGraphHistoryPeriod __attribute__((swift_name("init(until:cgmGraphHistoryPeriod:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleCGMGraphHistoryPeriod *)component2 __attribute__((swift_name("component2()")));
- (BOOL)containsTime:(int64_t)time __attribute__((swift_name("contains(time:)")));
- (Cgm_shared_moduleTimeScale *)doCopyUntil:(int64_t)until cgmGraphHistoryPeriod:(Cgm_shared_moduleCGMGraphHistoryPeriod *)cgmGraphHistoryPeriod __attribute__((swift_name("doCopy(until:cgmGraphHistoryPeriod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCGMGraphHistoryPeriod *cgmGraphHistoryPeriod __attribute__((swift_name("cgmGraphHistoryPeriod")));
@property (readonly) int64_t since __attribute__((swift_name("since")));
@property (readonly) int64_t until __attribute__((swift_name("until")));
@end;

__attribute__((swift_name("Trend")))
@interface Cgm_shared_moduleTrend : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.DoubleDown")))
@interface Cgm_shared_moduleTrendDoubleDown : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)doubleDown __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.DoubleUp")))
@interface Cgm_shared_moduleTrendDoubleUp : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)doubleUp __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.Down")))
@interface Cgm_shared_moduleTrendDown : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)down __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.GoingDown")))
@interface Cgm_shared_moduleTrendGoingDown : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goingDown __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.GoingUp")))
@interface Cgm_shared_moduleTrendGoingUp : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goingUp __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.InRange")))
@interface Cgm_shared_moduleTrendInRange : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inRange __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend.Up")))
@interface Cgm_shared_moduleTrendUp : Cgm_shared_moduleTrend
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)up __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("AutomatedStatus")))
@interface Cgm_shared_moduleAutomatedStatus : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus.MaximumInsulin")))
@interface Cgm_shared_moduleAutomatedStatusMaximumInsulin : Cgm_shared_moduleAutomatedStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)maximumInsulin __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus.Normal")))
@interface Cgm_shared_moduleAutomatedStatusNormal : Cgm_shared_moduleAutomatedStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)normal __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus.Paused")))
@interface Cgm_shared_moduleAutomatedStatusPaused : Cgm_shared_moduleAutomatedStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paused __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ManualStatus")))
@interface Cgm_shared_moduleManualStatus : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManualStatus.Normal")))
@interface Cgm_shared_moduleManualStatusNormal : Cgm_shared_moduleManualStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)normal __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManualStatus.TempBasal")))
@interface Cgm_shared_moduleManualStatusTempBasal : Cgm_shared_moduleManualStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tempBasal __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("PodEvent")))
@interface Cgm_shared_modulePodEvent : Cgm_shared_moduleBase
- (BOOL)containsSubEvent __attribute__((swift_name("containsSubEvent()")));
- (BOOL)shouldExtendEventPodEvent:(Cgm_shared_modulePodEvent * _Nullable)podEvent __attribute__((swift_name("shouldExtendEvent(podEvent:)")));
- (BOOL)shouldExtendSubEventPodEvent:(Cgm_shared_modulePodEvent * _Nullable)podEvent __attribute__((swift_name("shouldExtendSubEvent(podEvent:)")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end;

__attribute__((swift_name("PodEvent.Automated")))
@interface Cgm_shared_modulePodEventAutomated : Cgm_shared_modulePodEvent
@property (readonly) Cgm_shared_moduleAutomatedStatus *automatedStatus __attribute__((swift_name("automatedStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.AutomatedHypoProtected")))
@interface Cgm_shared_modulePodEventAutomatedHypoProtected : Cgm_shared_modulePodEventAutomated
- (instancetype)initWithTime:(int64_t)time automatedStatus:(Cgm_shared_moduleAutomatedStatus *)automatedStatus __attribute__((swift_name("init(time:automatedStatus:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.AutomatedLimited")))
@interface Cgm_shared_modulePodEventAutomatedLimited : Cgm_shared_modulePodEventAutomated
- (instancetype)initWithTime:(int64_t)time automatedStatus:(Cgm_shared_moduleAutomatedStatus *)automatedStatus __attribute__((swift_name("init(time:automatedStatus:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.AutomatedNormal")))
@interface Cgm_shared_modulePodEventAutomatedNormal : Cgm_shared_modulePodEventAutomated
- (instancetype)initWithTime:(int64_t)time automatedStatus:(Cgm_shared_moduleAutomatedStatus *)automatedStatus __attribute__((swift_name("init(time:automatedStatus:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.Bolus")))
@interface Cgm_shared_modulePodEventBolus : Cgm_shared_modulePodEvent
- (instancetype)initWithTime:(int64_t)time bolus:(Cgm_shared_moduleMedicalValue *)bolus cgm:(Cgm_shared_moduleMedicalValue *)cgm carbs:(Cgm_shared_moduleMedicalValue *)carbs __attribute__((swift_name("init(time:bolus:cgm:carbs:)"))) __attribute__((objc_designated_initializer));
@property (readonly) Cgm_shared_moduleMedicalValue *bolus __attribute__((swift_name("bolus")));
@property (readonly) Cgm_shared_moduleMedicalValue *carbs __attribute__((swift_name("carbs")));
@property (readonly) Cgm_shared_moduleMedicalValue *cgm __attribute__((swift_name("cgm")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.Manual")))
@interface Cgm_shared_modulePodEventManual : Cgm_shared_modulePodEvent
- (instancetype)initWithTime:(int64_t)time manualStatus:(Cgm_shared_moduleManualStatus *)manualStatus __attribute__((swift_name("init(time:manualStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) Cgm_shared_moduleManualStatus *manualStatus __attribute__((swift_name("manualStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.NoPod")))
@interface Cgm_shared_modulePodEventNoPod : Cgm_shared_modulePodEvent
- (instancetype)initWithTime:(int64_t)time __attribute__((swift_name("init(time:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("CGMGraphFacade")))
@interface Cgm_shared_moduleCGMGraphFacade : Cgm_shared_moduleBase
- (instancetype)initWithCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender cgmStatusBarBinder:(id<Cgm_shared_moduleCGMStatusBarBinder>)cgmStatusBarBinder __attribute__((swift_name("init(cgmGraphRender:cgmStatusBarBinder:)"))) __attribute__((objc_designated_initializer));
- (void)renderGraphViewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("renderGraph(viewSize:)")));
- (void)renderStatus __attribute__((swift_name("renderStatus()")));
- (void)updateCGMGraphCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("updateCGMGraph(cgmGraph:)")));
@property (readonly) id<Cgm_shared_moduleCGMGraphRender> cgmGraphRender __attribute__((swift_name("cgmGraphRender")));
@property (readonly) id<Cgm_shared_moduleCGMStatusBarBinder> cgmStatusBarBinder __attribute__((swift_name("cgmStatusBarBinder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraphFacadeImpl")))
@interface Cgm_shared_moduleCGMGraphFacadeImpl : Cgm_shared_moduleCGMGraphFacade
- (instancetype)initWithCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender cgmStatusBarBinder:(id<Cgm_shared_moduleCGMStatusBarBinder>)cgmStatusBarBinder statusBarCoordinator:(id<Cgm_shared_moduleCGMStatusBarCoordinator>)statusBarCoordinator drawGCMGraphStrategy:(Cgm_shared_moduleDrawGCMGraphStrategy *)drawGCMGraphStrategy __attribute__((swift_name("init(cgmGraphRender:cgmStatusBarBinder:statusBarCoordinator:drawGCMGraphStrategy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender cgmStatusBarBinder:(id<Cgm_shared_moduleCGMStatusBarBinder>)cgmStatusBarBinder __attribute__((swift_name("init(cgmGraphRender:cgmStatusBarBinder:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)renderGraphViewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("renderGraph(viewSize:)")));
- (void)renderStatus __attribute__((swift_name("renderStatus()")));
- (void)updateCGMGraphCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("updateCGMGraph(cgmGraph:)")));
@property (readonly) Cgm_shared_moduleDrawGCMGraphStrategy *drawGCMGraphStrategy __attribute__((swift_name("drawGCMGraphStrategy")));
@property (readonly) id<Cgm_shared_moduleCGMStatusBarCoordinator> statusBarCoordinator __attribute__((swift_name("statusBarCoordinator")));
@end;

__attribute__((swift_name("CGMGraphRender")))
@protocol Cgm_shared_moduleCGMGraphRender
@required
- (void)redrawGraph __attribute__((swift_name("redrawGraph()")));
- (void)renderBitmapBitmapReference:(Cgm_shared_moduleBitmapReference *)bitmapReference __attribute__((swift_name("renderBitmap(bitmapReference:)")));
- (void)renderCircleCircle:(Cgm_shared_moduleCircle *)circle __attribute__((swift_name("renderCircle(circle:)")));
- (void)renderDottedLineDottedLine:(Cgm_shared_moduleDottedLine *)dottedLine __attribute__((swift_name("renderDottedLine(dottedLine:)")));
- (void)renderLabelLabel:(Cgm_shared_moduleLabel *)label __attribute__((swift_name("renderLabel(label:)")));
- (void)renderLineLine:(Cgm_shared_moduleLine *)line __attribute__((swift_name("renderLine(line:)")));
- (void)renderRectangleRect:(Cgm_shared_moduleRectangle *)rect __attribute__((swift_name("renderRectangle(rect:)")));
@end;

__attribute__((swift_name("CGMGraphRenderCoordinator")))
@protocol Cgm_shared_moduleCGMGraphRenderCoordinator
@required
- (void)drawBloodGlucoseScaleCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawBloodGlucoseScale(cgmGraph:render:viewSize:)")));
- (void)drawEGVListCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawEGVList(cgmGraph:render:viewSize:)")));
- (void)drawEventsCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawEvents(cgmGraph:render:viewSize:)")));
- (void)drawGoalRangeCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawGoalRange(cgmGraph:render:viewSize:)")));
- (void)drawTimeScaleCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawTimeScale(cgmGraph:render:viewSize:)")));
@property BOOL eventsEnabled __attribute__((swift_name("eventsEnabled")));
@property float textSize __attribute__((swift_name("textSize")));
@end;

__attribute__((swift_name("CGMGraphRenderCoordinatorCreator")))
@protocol Cgm_shared_moduleCGMGraphRenderCoordinatorCreator
@required
- (NSArray<Cgm_shared_moduleCircle *> *)createACircleListFromEgvList:(NSArray<Cgm_shared_moduleEGV *> *)egvList timeScale:(Cgm_shared_moduleTimeScale *)timeScale bloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createACircleListFrom(egvList:timeScale:bloodGlucoseScale:viewSize:)")));
- (Cgm_shared_moduleGoalRange_ *)createAGoalRangeFromGoalRange:(Cgm_shared_moduleGoalRange *)goalRange bloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createAGoalRangeFrom(goalRange:bloodGlucoseScale:viewSize:)")));
- (NSArray<Cgm_shared_moduleRectangle *> *)createEventsFromEvents:(NSArray<Cgm_shared_modulePodEvent *> *)events timeScale:(Cgm_shared_moduleTimeScale *)timeScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createEventsFrom(events:timeScale:viewSize:)")));
- (Cgm_shared_moduleScale *)createScaleFromBloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale domainGoalRange:(Cgm_shared_moduleGoalRange *)domainGoalRange viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createScaleFrom(bloodGlucoseScale:domainGoalRange:viewSize:)")));
- (Cgm_shared_moduleScale *)createScaleFromTimeScale:(Cgm_shared_moduleTimeScale *)timeScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createScaleFrom(timeScale:viewSize:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraphRenderCoordinatorImpl")))
@interface Cgm_shared_moduleCGMGraphRenderCoordinatorImpl : Cgm_shared_moduleBase <Cgm_shared_moduleCGMGraphRenderCoordinator, Cgm_shared_moduleCGMGraphRenderCoordinatorDrawer, Cgm_shared_moduleCGMGraphRenderCoordinatorCreator>
- (instancetype)initWithUITools:(id<Cgm_shared_moduleUITools>)uITools cgmColorsConstants:(Cgm_shared_moduleGraphColorsConstants *)cgmColorsConstants __attribute__((swift_name("init(uITools:cgmColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (NSArray<Cgm_shared_moduleCircle *> *)createACircleListFromEgvList:(NSArray<Cgm_shared_moduleEGV *> *)egvList timeScale:(Cgm_shared_moduleTimeScale *)timeScale bloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createACircleListFrom(egvList:timeScale:bloodGlucoseScale:viewSize:)")));
- (Cgm_shared_moduleGoalRange_ *)createAGoalRangeFromGoalRange:(Cgm_shared_moduleGoalRange *)goalRange bloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createAGoalRangeFrom(goalRange:bloodGlucoseScale:viewSize:)")));
- (NSArray<Cgm_shared_moduleRectangle *> *)createEventsFromEvents:(NSArray<Cgm_shared_modulePodEvent *> *)events timeScale:(Cgm_shared_moduleTimeScale *)timeScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createEventsFrom(events:timeScale:viewSize:)")));
- (Cgm_shared_moduleScale *)createScaleFromBloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale domainGoalRange:(Cgm_shared_moduleGoalRange *)domainGoalRange viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createScaleFrom(bloodGlucoseScale:domainGoalRange:viewSize:)")));
- (Cgm_shared_moduleScale *)createScaleFromTimeScale:(Cgm_shared_moduleTimeScale *)timeScale viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("createScaleFrom(timeScale:viewSize:)")));
- (void)drawBloodGlucoseScaleCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawBloodGlucoseScale(cgmGraph:render:viewSize:)")));
- (void)drawEGVListCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawEGVList(cgmGraph:render:viewSize:)")));
- (void)drawEGVListCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender circles:(NSArray<Cgm_shared_moduleCircle *> *)circles __attribute__((swift_name("drawEGVList(cgmGraphRender:circles:)")));
- (void)drawEventsCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawEvents(cgmGraph:render:viewSize:)")));
- (void)drawEventsCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender events:(NSArray<Cgm_shared_moduleRectangle *> *)events __attribute__((swift_name("drawEvents(cgmGraphRender:events:)")));
- (void)drawGoalRangeCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawGoalRange(cgmGraph:render:viewSize:)")));
- (void)drawGoalRangeCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender goalRange:(Cgm_shared_moduleGoalRange_ *)goalRange __attribute__((swift_name("drawGoalRange(cgmGraphRender:goalRange:)")));
- (void)drawScaleCgmGraphRender:(id<Cgm_shared_moduleCGMGraphRender>)cgmGraphRender scale:(Cgm_shared_moduleScale *)scale __attribute__((swift_name("drawScale(cgmGraphRender:scale:)")));
- (void)drawTimeScaleCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("drawTimeScale(cgmGraph:render:viewSize:)")));
@property id<Cgm_shared_moduleCGMGraphRenderCoordinatorCreator> cgmGraphRenderCoordinatorCreator __attribute__((swift_name("cgmGraphRenderCoordinatorCreator")));
@property id<Cgm_shared_moduleCGMGraphRenderCoordinatorDrawer> cgmGraphRenderCoordinatorDrawer __attribute__((swift_name("cgmGraphRenderCoordinatorDrawer")));
@property BOOL eventsEnabled __attribute__((swift_name("eventsEnabled")));
@property float textSize __attribute__((swift_name("textSize")));
@end;

__attribute__((swift_name("CGMGraphView")))
@protocol Cgm_shared_moduleCGMGraphView
@required
@property Cgm_shared_moduleCGMGraph *cgmGraph __attribute__((swift_name("cgmGraph")));
@end;

__attribute__((swift_name("UITools")))
@protocol Cgm_shared_moduleUITools
@required
- (BOOL)intersectLabelOne:(Cgm_shared_moduleLabel *)labelOne labelTwo:(Cgm_shared_moduleLabel *)labelTwo __attribute__((swift_name("intersect(labelOne:labelTwo:)")));
@end;

__attribute__((swift_name("CGMRenderView")))
@protocol Cgm_shared_moduleCGMRenderView <Cgm_shared_moduleCGMGraphRender, Cgm_shared_moduleUITools>
@required
- (void)setCGMGraphFacadeFacade:(Cgm_shared_moduleCGMGraphFacade *)facade __attribute__((swift_name("setCGMGraphFacade(facade:)")));
@end;

__attribute__((swift_name("CGMStatusBarCoordinator")))
@protocol Cgm_shared_moduleCGMStatusBarCoordinator
@required
- (void)bindCGMGraphCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("bindCGMGraph(cgmGraph:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMStatusBarCoordinatorImpl")))
@interface Cgm_shared_moduleCGMStatusBarCoordinatorImpl : Cgm_shared_moduleBase <Cgm_shared_moduleCGMStatusBarCoordinator>
- (instancetype)initWithOperationModeBinder:(id<Cgm_shared_moduleOperationModeBinder>)operationModeBinder iobBinder:(id<Cgm_shared_moduleIobBinder>)iobBinder factory:(id<Cgm_shared_moduleLatestEGVBindStrategyFactory>)factory __attribute__((swift_name("init(operationModeBinder:iobBinder:factory:)"))) __attribute__((objc_designated_initializer));
- (void)bindCGMGraphCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("bindCGMGraph(cgmGraph:)")));
@property (readonly) id<Cgm_shared_moduleLatestEGVBindStrategyFactory> factory __attribute__((swift_name("factory")));
@property (readonly) id<Cgm_shared_moduleIobBinder> iobBinder __attribute__((swift_name("iobBinder")));
@property (readonly) id<Cgm_shared_moduleOperationModeBinder> operationModeBinder __attribute__((swift_name("operationModeBinder")));
@end;

__attribute__((swift_name("Degrees")))
@interface Cgm_shared_moduleDegrees : Cgm_shared_moduleBase
@property (readonly) float value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Degrees.Down")))
@interface Cgm_shared_moduleDegreesDown : Cgm_shared_moduleDegrees
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)down __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Degrees.GoingDown")))
@interface Cgm_shared_moduleDegreesGoingDown : Cgm_shared_moduleDegrees
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goingDown __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Degrees.GoingUp")))
@interface Cgm_shared_moduleDegreesGoingUp : Cgm_shared_moduleDegrees
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goingUp __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Degrees.InRange")))
@interface Cgm_shared_moduleDegreesInRange : Cgm_shared_moduleDegrees
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inRange __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Degrees.Up")))
@interface Cgm_shared_moduleDegreesUp : Cgm_shared_moduleDegrees
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)up __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("DrawGCMGraphStrategy")))
@interface Cgm_shared_moduleDrawGCMGraphStrategy : Cgm_shared_moduleBase
- (instancetype)initWithCoordinator:(id<Cgm_shared_moduleCGMGraphRenderCoordinator>)coordinator __attribute__((swift_name("init(coordinator:)"))) __attribute__((objc_designated_initializer));
- (void)invokeCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("invoke(cgmGraph:render:viewSize:)")));
@property (readonly) id<Cgm_shared_moduleCGMGraphRenderCoordinator> coordinator __attribute__((swift_name("coordinator")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrawGCMGraphStrategyLandscape")))
@interface Cgm_shared_moduleDrawGCMGraphStrategyLandscape : Cgm_shared_moduleDrawGCMGraphStrategy
- (instancetype)initWithCoordinator:(id<Cgm_shared_moduleCGMGraphRenderCoordinator>)coordinator __attribute__((swift_name("init(coordinator:)"))) __attribute__((objc_designated_initializer));
- (void)invokeCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("invoke(cgmGraph:render:viewSize:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrawGCMGraphStrategyPortrait")))
@interface Cgm_shared_moduleDrawGCMGraphStrategyPortrait : Cgm_shared_moduleDrawGCMGraphStrategy
- (instancetype)initWithCoordinator:(id<Cgm_shared_moduleCGMGraphRenderCoordinator>)coordinator __attribute__((swift_name("init(coordinator:)"))) __attribute__((objc_designated_initializer));
- (void)invokeCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph render:(id<Cgm_shared_moduleCGMGraphRender>)render viewSize:(Cgm_shared_moduleViewSize *)viewSize __attribute__((swift_name("invoke(cgmGraph:render:viewSize:)")));
@end;

__attribute__((swift_name("LatestEGVBindStrategy")))
@protocol Cgm_shared_moduleLatestEGVBindStrategy
@required
- (void)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVNotAvailableBindStrategy")))
@interface Cgm_shared_moduleEGVNotAvailableBindStrategy : Cgm_shared_moduleBase <Cgm_shared_moduleLatestEGVBindStrategy>
- (instancetype)initWithBinder:(id<Cgm_shared_moduleCGMLatestEGVNotAvailableBinder>)binder egvColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)egvColorsConstants __attribute__((swift_name("init(binder:egvColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (void)invoke __attribute__((swift_name("invoke()")));
@property (readonly) id<Cgm_shared_moduleCGMLatestEGVNotAvailableBinder> binder __attribute__((swift_name("binder")));
@property (readonly) Cgm_shared_moduleEGVColorsConstants *egvColorsConstants __attribute__((swift_name("egvColorsConstants")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVNotAvailableBindStrategy.Companion")))
@interface Cgm_shared_moduleEGVNotAvailableBindStrategyCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *EMPTY_VALUE __attribute__((swift_name("EMPTY_VALUE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVOnRangeBindStrategy")))
@interface Cgm_shared_moduleEGVOnRangeBindStrategy : Cgm_shared_moduleBase <Cgm_shared_moduleLatestEGVBindStrategy>
- (instancetype)initWithBinder:(id<Cgm_shared_moduleCGMLatestEGVOnRangeBinder>)binder cgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph cgmValueColorFactory:(id<Cgm_shared_moduleCGMValueColorFactory>)cgmValueColorFactory uiTrendFactory:(id<Cgm_shared_moduleUITrendFactory>)uiTrendFactory __attribute__((swift_name("init(binder:cgmGraph:cgmValueColorFactory:uiTrendFactory:)"))) __attribute__((objc_designated_initializer));
- (void)invoke __attribute__((swift_name("invoke()")));
@property (readonly) id<Cgm_shared_moduleCGMLatestEGVOnRangeBinder> binder __attribute__((swift_name("binder")));
@property (readonly) Cgm_shared_moduleCGMGraph *cgmGraph __attribute__((swift_name("cgmGraph")));
@property (readonly) id<Cgm_shared_moduleCGMValueColorFactory> cgmValueColorFactory __attribute__((swift_name("cgmValueColorFactory")));
@property (readonly) id<Cgm_shared_moduleUITrendFactory> uiTrendFactory __attribute__((swift_name("uiTrendFactory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVOutOfRangeBindStrategy")))
@interface Cgm_shared_moduleEGVOutOfRangeBindStrategy : Cgm_shared_moduleBase <Cgm_shared_moduleLatestEGVBindStrategy>
- (instancetype)initWithBinder:(id<Cgm_shared_moduleCGMLatestEGVOutOfRangeBinder>)binder latestEGVAvailable:(Cgm_shared_moduleLatestEGVAvailable *)latestEGVAvailable bloodGlucoseScale:(Cgm_shared_moduleBloodGlucoseScale *)bloodGlucoseScale egvColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)egvColorsConstants __attribute__((swift_name("init(binder:latestEGVAvailable:bloodGlucoseScale:egvColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (void)invoke __attribute__((swift_name("invoke()")));
@property (readonly) id<Cgm_shared_moduleCGMLatestEGVOutOfRangeBinder> binder __attribute__((swift_name("binder")));
@property (readonly) Cgm_shared_moduleBloodGlucoseScale *bloodGlucoseScale __attribute__((swift_name("bloodGlucoseScale")));
@property (readonly) Cgm_shared_moduleEGVColorsConstants *egvColorsConstants __attribute__((swift_name("egvColorsConstants")));
@property (readonly) Cgm_shared_moduleLatestEGVAvailable *latestEGVAvailable __attribute__((swift_name("latestEGVAvailable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVOutOfRangeBindStrategy.Companion")))
@interface Cgm_shared_moduleEGVOutOfRangeBindStrategyCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *HIGH_TEXT __attribute__((swift_name("HIGH_TEXT")));
@property (readonly) NSString *LOW_TEXT __attribute__((swift_name("LOW_TEXT")));
@end;

__attribute__((swift_name("IobBinder")))
@protocol Cgm_shared_moduleIobBinder
@required
- (void)bindIob:(Cgm_shared_moduleLatestIOB *)iob __attribute__((swift_name("bind(iob:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IobBinderImpl")))
@interface Cgm_shared_moduleIobBinderImpl : Cgm_shared_moduleBase <Cgm_shared_moduleIobBinder>
- (instancetype)initWithBinder:(id<Cgm_shared_moduleCGMIobBinder>)binder iobColorsConstants:(Cgm_shared_moduleIOBColorsConstants *)iobColorsConstants __attribute__((swift_name("init(binder:iobColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (void)bindIob:(Cgm_shared_moduleLatestIOB *)iob __attribute__((swift_name("bind(iob:)")));
@property (readonly) id<Cgm_shared_moduleCGMIobBinder> binder __attribute__((swift_name("binder")));
@property (readonly) Cgm_shared_moduleIOBColorsConstants *iobColorsConstants __attribute__((swift_name("iobColorsConstants")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IobBinderImpl.Companion")))
@interface Cgm_shared_moduleIobBinderImplCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("LatestEGVBindStrategyFactory")))
@protocol Cgm_shared_moduleLatestEGVBindStrategyFactory
@required
- (id<Cgm_shared_moduleLatestEGVBindStrategy>)createCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("create(cgmGraph:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestEGVBindStrategyFactoryImpl")))
@interface Cgm_shared_moduleLatestEGVBindStrategyFactoryImpl : Cgm_shared_moduleBase <Cgm_shared_moduleLatestEGVBindStrategyFactory>
- (instancetype)initWithCgmLatestEGVBinder:(id<Cgm_shared_moduleCGMLatestEGVBinder>)cgmLatestEGVBinder cgmValueColorFactory:(id<Cgm_shared_moduleCGMValueColorFactory>)cgmValueColorFactory uiTrendFactory:(id<Cgm_shared_moduleUITrendFactory>)uiTrendFactory egvColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)egvColorsConstants __attribute__((swift_name("init(cgmLatestEGVBinder:cgmValueColorFactory:uiTrendFactory:egvColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (id<Cgm_shared_moduleLatestEGVBindStrategy>)createCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("create(cgmGraph:)")));
@property (readonly) id<Cgm_shared_moduleCGMLatestEGVBinder> cgmLatestEGVBinder __attribute__((swift_name("cgmLatestEGVBinder")));
@property (readonly) id<Cgm_shared_moduleCGMValueColorFactory> cgmValueColorFactory __attribute__((swift_name("cgmValueColorFactory")));
@property (readonly) id<Cgm_shared_moduleUITrendFactory> uiTrendFactory __attribute__((swift_name("uiTrendFactory")));
@end;

__attribute__((swift_name("OperationModeBinder")))
@protocol Cgm_shared_moduleOperationModeBinder
@required
- (void)bindOperationMode:(Cgm_shared_moduleOperationMode *)operationMode __attribute__((swift_name("bind(operationMode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationModeBinderImpl")))
@interface Cgm_shared_moduleOperationModeBinderImpl : Cgm_shared_moduleBase <Cgm_shared_moduleOperationModeBinder>
- (instancetype)initWithBinder:(id<Cgm_shared_moduleCGMOperationModeBinder>)binder colorsConstants:(Cgm_shared_moduleOperationModeColorsConstants *)colorsConstants __attribute__((swift_name("init(binder:colorsConstants:)"))) __attribute__((objc_designated_initializer));
- (void)bindOperationMode:(Cgm_shared_moduleOperationMode *)operationMode __attribute__((swift_name("bind(operationMode:)")));
@property (readonly) id<Cgm_shared_moduleCGMOperationModeBinder> binder __attribute__((swift_name("binder")));
@property (readonly) Cgm_shared_moduleOperationModeColorsConstants *colorsConstants __attribute__((swift_name("colorsConstants")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationModeBinderImpl.Companion")))
@interface Cgm_shared_moduleOperationModeBinderImplCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Trend_")))
@interface Cgm_shared_moduleTrend_ : Cgm_shared_moduleBase
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) Cgm_shared_moduleDegrees *degrees __attribute__((swift_name("degrees")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend_.Double")))
@interface Cgm_shared_moduleTrend_Double : Cgm_shared_moduleTrend_
- (instancetype)initWithDegrees:(Cgm_shared_moduleDegrees *)degrees color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("init(degrees:color:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleDegrees *)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleCommonColor *)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleTrend_Double *)doCopyDegrees:(Cgm_shared_moduleDegrees *)degrees color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("doCopy(degrees:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) Cgm_shared_moduleDegrees *degrees __attribute__((swift_name("degrees")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trend_.Normal")))
@interface Cgm_shared_moduleTrend_Normal : Cgm_shared_moduleTrend_
- (instancetype)initWithDegrees:(Cgm_shared_moduleDegrees *)degrees color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("init(degrees:color:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleDegrees *)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleCommonColor *)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleTrend_Normal *)doCopyDegrees:(Cgm_shared_moduleDegrees *)degrees color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("doCopy(degrees:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) Cgm_shared_moduleDegrees *degrees __attribute__((swift_name("degrees")));
@end;

__attribute__((swift_name("CGMGraphFacadeFactory")))
@protocol Cgm_shared_moduleCGMGraphFacadeFactory
@required
- (Cgm_shared_moduleCGMGraphFacade *)createCGMGraphFacadeEventsEnabled:(BOOL)eventsEnabled __attribute__((swift_name("createCGMGraphFacade(eventsEnabled:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMGraphFacadeFactoryImpl")))
@interface Cgm_shared_moduleCGMGraphFacadeFactoryImpl : Cgm_shared_moduleBase <Cgm_shared_moduleCGMGraphFacadeFactory>
- (instancetype)initWithTextSize:(float)textSize cgmRenderView:(id<Cgm_shared_moduleCGMRenderView>)cgmRenderView cgmStatusBarBinder:(id<Cgm_shared_moduleCGMStatusBarBinder>)cgmStatusBarBinder colorProvider:(id<Cgm_shared_moduleColorConstantProvider>)colorProvider __attribute__((swift_name("init(textSize:cgmRenderView:cgmStatusBarBinder:colorProvider:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleCGMGraphFacade *)createCGMGraphFacadeEventsEnabled:(BOOL)eventsEnabled __attribute__((swift_name("createCGMGraphFacade(eventsEnabled:)")));
@property id<Cgm_shared_moduleCGMGraphRenderCoordinator> cgmGraphRenderCoordinator __attribute__((swift_name("cgmGraphRenderCoordinator")));
@property (readonly) id<Cgm_shared_moduleCGMRenderView> cgmRenderView __attribute__((swift_name("cgmRenderView")));
@property (readonly) id<Cgm_shared_moduleCGMStatusBarBinder> cgmStatusBarBinder __attribute__((swift_name("cgmStatusBarBinder")));
@property (readonly) float textSize __attribute__((swift_name("textSize")));
@end;

__attribute__((swift_name("CGMValueColorFactory")))
@protocol Cgm_shared_moduleCGMValueColorFactory
@required
- (Cgm_shared_moduleCommonColor *)createColorStringLatestEGVAvailable:(Cgm_shared_moduleLatestEGVAvailable *)latestEGVAvailable goalRange:(Cgm_shared_moduleGoalRange *)goalRange __attribute__((swift_name("createColorString(latestEGVAvailable:goalRange:)")));
@end;

__attribute__((swift_name("CGMValueColorFactoryImpl")))
@interface Cgm_shared_moduleCGMValueColorFactoryImpl : Cgm_shared_moduleBase <Cgm_shared_moduleCGMValueColorFactory>
- (instancetype)initWithCgmValueColorsConstants:(Cgm_shared_moduleCGMValueColorsConstants *)cgmValueColorsConstants __attribute__((swift_name("init(cgmValueColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleCommonColor *)createColorStringLatestEGVAvailable:(Cgm_shared_moduleLatestEGVAvailable *)latestEGVAvailable goalRange:(Cgm_shared_moduleGoalRange *)goalRange __attribute__((swift_name("createColorString(latestEGVAvailable:goalRange:)")));
@end;

__attribute__((swift_name("ColorMode")))
@interface Cgm_shared_moduleColorMode : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorMode.Day")))
@interface Cgm_shared_moduleColorModeDay : Cgm_shared_moduleColorMode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)day __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorMode.Night")))
@interface Cgm_shared_moduleColorModeNight : Cgm_shared_moduleColorMode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)night __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("UITrendFactory")))
@protocol Cgm_shared_moduleUITrendFactory
@required
- (Cgm_shared_moduleTrend_ *)createUITrendCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("createUITrend(cgmGraph:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITrendFactoryImpl")))
@interface Cgm_shared_moduleUITrendFactoryImpl : Cgm_shared_moduleBase <Cgm_shared_moduleUITrendFactory>
- (instancetype)initWithOperationModeColors:(Cgm_shared_moduleOperationModeColorsConstants *)operationModeColors EGVColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)EGVColorsConstants __attribute__((swift_name("init(operationModeColors:EGVColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleTrend_ *)createUITrendCgmGraph:(Cgm_shared_moduleCGMGraph *)cgmGraph __attribute__((swift_name("createUITrend(cgmGraph:)")));
@property (readonly) Cgm_shared_moduleEGVColorsConstants *EGVColorsConstants __attribute__((swift_name("EGVColorsConstants")));
@property (readonly) Cgm_shared_moduleOperationModeColorsConstants *operationModeColors __attribute__((swift_name("operationModeColors")));
@end;

__attribute__((swift_name("DarkColors")))
@protocol Cgm_shared_moduleDarkColors
@required
- (id _Nullable)darkColors __attribute__((swift_name("darkColors()")));
@end;

__attribute__((swift_name("DarkableColors")))
@protocol Cgm_shared_moduleDarkableColors <Cgm_shared_moduleDarkColors>
@required
@end;

__attribute__((swift_name("CGMValueColorsConstants")))
@interface Cgm_shared_moduleCGMValueColorsConstants : Cgm_shared_moduleBase <Cgm_shared_moduleDarkableColors>
- (instancetype)initWithEgvColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)egvColorsConstants __attribute__((swift_name("init(egvColorsConstants:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleCGMValueColorsConstants *)darkColors __attribute__((swift_name("darkColors()")));
@property (readonly) Cgm_shared_moduleCommonColor *textAboveRange __attribute__((swift_name("textAboveRange")));
@property (readonly) Cgm_shared_moduleCommonColor *textBelowRange __attribute__((swift_name("textBelowRange")));
@property (readonly) Cgm_shared_moduleCommonColor *textInRange __attribute__((swift_name("textInRange")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CGMValueColorsConstants.Dark")))
@interface Cgm_shared_moduleCGMValueColorsConstantsDark : Cgm_shared_moduleCGMValueColorsConstants
- (instancetype)initWith:(Cgm_shared_moduleCGMValueColorsConstants *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEgvColorsConstants:(Cgm_shared_moduleEGVColorsConstants *)egvColorsConstants __attribute__((swift_name("init(egvColorsConstants:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleCommonColor *textInRange __attribute__((swift_name("textInRange")));
@end;

__attribute__((swift_name("ColorConstantProvider")))
@protocol Cgm_shared_moduleColorConstantProvider
@required
- (Cgm_shared_moduleCGMValueColorsConstants *)provideCGMValueColorsConstants __attribute__((swift_name("provideCGMValueColorsConstants()")));
- (Cgm_shared_moduleEGVColorsConstants *)provideEGVColorsConstants __attribute__((swift_name("provideEGVColorsConstants()")));
- (Cgm_shared_moduleGraphColorsConstants *)provideGraphColorsConstants __attribute__((swift_name("provideGraphColorsConstants()")));
- (Cgm_shared_moduleIOBColorsConstants *)provideIOBColorsConstants __attribute__((swift_name("provideIOBColorsConstants()")));
- (Cgm_shared_moduleOperationModeColorsConstants *)provideOperationModeColorsConstants __attribute__((swift_name("provideOperationModeColorsConstants()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorConstantProviderImpl")))
@interface Cgm_shared_moduleColorConstantProviderImpl : Cgm_shared_moduleBase <Cgm_shared_moduleColorConstantProvider>
- (instancetype)initWithIsDarkMode:(BOOL)isDarkMode __attribute__((swift_name("init(isDarkMode:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_moduleCGMValueColorsConstants *)provideCGMValueColorsConstants __attribute__((swift_name("provideCGMValueColorsConstants()")));
- (Cgm_shared_moduleEGVColorsConstants *)provideEGVColorsConstants __attribute__((swift_name("provideEGVColorsConstants()")));
- (Cgm_shared_moduleGraphColorsConstants *)provideGraphColorsConstants __attribute__((swift_name("provideGraphColorsConstants()")));
- (Cgm_shared_moduleIOBColorsConstants *)provideIOBColorsConstants __attribute__((swift_name("provideIOBColorsConstants()")));
- (Cgm_shared_moduleOperationModeColorsConstants *)provideOperationModeColorsConstants __attribute__((swift_name("provideOperationModeColorsConstants()")));
@end;

__attribute__((swift_name("EGVColorsConstants")))
@interface Cgm_shared_moduleEGVColorsConstants : Cgm_shared_moduleBase <Cgm_shared_moduleDarkableColors>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Cgm_shared_moduleEGVColorsConstants *)darkColors __attribute__((swift_name("darkColors()")));
@property (readonly) Cgm_shared_moduleCommonColor *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) Cgm_shared_moduleCommonColor *highBG __attribute__((swift_name("highBG")));
@property (readonly) Cgm_shared_moduleCommonColor *lowBG __attribute__((swift_name("lowBG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EGVColorsConstants.Dark")))
@interface Cgm_shared_moduleEGVColorsConstantsDark : Cgm_shared_moduleEGVColorsConstants
- (instancetype)initWith:(Cgm_shared_moduleEGVColorsConstants *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleCommonColor *emptyText __attribute__((swift_name("emptyText")));
@end;

__attribute__((swift_name("GraphColorsConstants")))
@interface Cgm_shared_moduleGraphColorsConstants : Cgm_shared_moduleBase <Cgm_shared_moduleDarkableColors>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Cgm_shared_moduleGraphColorsConstants *)darkColors __attribute__((swift_name("darkColors()")));
@property (readonly) Cgm_shared_moduleCommonColor *background __attribute__((swift_name("background")));
@property (readonly) Cgm_shared_moduleCommonColor *badgeBorderColor __attribute__((swift_name("badgeBorderColor")));
@property (readonly) Cgm_shared_moduleCommonColor *badgeContentColor __attribute__((swift_name("badgeContentColor")));
@property (readonly) Cgm_shared_moduleCommonColor *badgeFillColor __attribute__((swift_name("badgeFillColor")));
@property (readonly) Cgm_shared_moduleCommonColor *bgEGV __attribute__((swift_name("bgEGV")));
@property (readonly) Cgm_shared_moduleCommonColor *bgGoalRange __attribute__((swift_name("bgGoalRange")));
@property (readonly) Cgm_shared_moduleCommonColor *bgLowerLimitLine __attribute__((swift_name("bgLowerLimitLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleGoalRangeLabel __attribute__((swift_name("bgScaleGoalRangeLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLabel __attribute__((swift_name("bgScaleLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLine __attribute__((swift_name("bgScaleLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLongLine __attribute__((swift_name("bgScaleLongLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgTargetLine __attribute__((swift_name("bgTargetLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgUpperLimitLine __attribute__((swift_name("bgUpperLimitLine")));
@property (readonly) Cgm_shared_moduleCommonColor *podEmptyDot __attribute__((swift_name("podEmptyDot")));
@property (readonly) Cgm_shared_moduleCommonColor *podEmptyDotBorder __attribute__((swift_name("podEmptyDotBorder")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedHypoProtected __attribute__((swift_name("podEventAutomatedHypoProtected")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedLimited __attribute__((swift_name("podEventAutomatedLimited")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedNormal __attribute__((swift_name("podEventAutomatedNormal")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedPaused __attribute__((swift_name("podEventAutomatedPaused")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventBolus __attribute__((swift_name("podEventBolus")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventManual __attribute__((swift_name("podEventManual")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventManualTempBasal __attribute__((swift_name("podEventManualTempBasal")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventMaximumInsulin __attribute__((swift_name("podEventMaximumInsulin")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventNoPod __attribute__((swift_name("podEventNoPod")));
@property (readonly) Cgm_shared_moduleCommonColor *podSubEventBorder __attribute__((swift_name("podSubEventBorder")));
@property (readonly) Cgm_shared_moduleCommonColor *singleTimePodEvent __attribute__((swift_name("singleTimePodEvent")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLine __attribute__((swift_name("timeLine")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLineLabel __attribute__((swift_name("timeLineLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLineLabelNow __attribute__((swift_name("timeLineLabelNow")));
@property (readonly) Cgm_shared_moduleCommonColor *timeScaleBackground __attribute__((swift_name("timeScaleBackground")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphColorsConstants.Dark")))
@interface Cgm_shared_moduleGraphColorsConstantsDark : Cgm_shared_moduleGraphColorsConstants
- (instancetype)initWith:(Cgm_shared_moduleGraphColorsConstants *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleCommonColor *background __attribute__((swift_name("background")));
@property (readonly) Cgm_shared_moduleCommonColor *badgeFillColor __attribute__((swift_name("badgeFillColor")));
@property (readonly) Cgm_shared_moduleCommonColor *bgEGV __attribute__((swift_name("bgEGV")));
@property (readonly) Cgm_shared_moduleCommonColor *bgGoalRange __attribute__((swift_name("bgGoalRange")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleGoalRangeLabel __attribute__((swift_name("bgScaleGoalRangeLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLabel __attribute__((swift_name("bgScaleLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLine __attribute__((swift_name("bgScaleLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgScaleLongLine __attribute__((swift_name("bgScaleLongLine")));
@property (readonly) Cgm_shared_moduleCommonColor *bgTargetLine __attribute__((swift_name("bgTargetLine")));
@property (readonly) Cgm_shared_moduleCommonColor *podEmptyDot __attribute__((swift_name("podEmptyDot")));
@property (readonly) Cgm_shared_moduleCommonColor *podEmptyDotBorder __attribute__((swift_name("podEmptyDotBorder")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedLimited __attribute__((swift_name("podEventAutomatedLimited")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventAutomatedNormal __attribute__((swift_name("podEventAutomatedNormal")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventManual __attribute__((swift_name("podEventManual")));
@property (readonly) Cgm_shared_moduleCommonColor *podEventNoPod __attribute__((swift_name("podEventNoPod")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLine __attribute__((swift_name("timeLine")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLineLabel __attribute__((swift_name("timeLineLabel")));
@property (readonly) Cgm_shared_moduleCommonColor *timeLineLabelNow __attribute__((swift_name("timeLineLabelNow")));
@end;

__attribute__((swift_name("IOBColorsConstants")))
@interface Cgm_shared_moduleIOBColorsConstants : Cgm_shared_moduleBase <Cgm_shared_moduleDarkableColors>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Cgm_shared_moduleIOBColorsConstants *)darkColors __attribute__((swift_name("darkColors()")));
@property (readonly) Cgm_shared_moduleCommonColor *latestIOBAvailableColor __attribute__((swift_name("latestIOBAvailableColor")));
@property (readonly) Cgm_shared_moduleCommonColor *latestIOBNotAvailableColor __attribute__((swift_name("latestIOBNotAvailableColor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOBColorsConstants.Dark")))
@interface Cgm_shared_moduleIOBColorsConstantsDark : Cgm_shared_moduleIOBColorsConstants
- (instancetype)initWith:(Cgm_shared_moduleIOBColorsConstants *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleCommonColor *latestIOBAvailableColor __attribute__((swift_name("latestIOBAvailableColor")));
@property (readonly) Cgm_shared_moduleCommonColor *latestIOBNotAvailableColor __attribute__((swift_name("latestIOBNotAvailableColor")));
@end;

__attribute__((swift_name("OperationModeColorsConstants")))
@interface Cgm_shared_moduleOperationModeColorsConstants : Cgm_shared_moduleBase <Cgm_shared_moduleDarkableColors>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Cgm_shared_moduleOperationModeColorsConstants *)darkColors __attribute__((swift_name("darkColors()")));
@property (readonly) Cgm_shared_moduleCommonColor *automatedColor __attribute__((swift_name("automatedColor")));
@property (readonly) Cgm_shared_moduleCommonColor *limitedColor __attribute__((swift_name("limitedColor")));
@property (readonly) Cgm_shared_moduleCommonColor *manualColor __attribute__((swift_name("manualColor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationModeColorsConstants.Dark")))
@interface Cgm_shared_moduleOperationModeColorsConstantsDark : Cgm_shared_moduleOperationModeColorsConstants
- (instancetype)initWith:(Cgm_shared_moduleOperationModeColorsConstants *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleCommonColor *automatedColor __attribute__((swift_name("automatedColor")));
@property (readonly) Cgm_shared_moduleCommonColor *limitedColor __attribute__((swift_name("limitedColor")));
@property (readonly) Cgm_shared_moduleCommonColor *manualColor __attribute__((swift_name("manualColor")));
@end;

__attribute__((swift_name("CGMIobBinder")))
@protocol Cgm_shared_moduleCGMIobBinder
@required
- (void)bindIobText:(NSString *)text color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("bindIob(text:color:)")));
@end;

__attribute__((swift_name("CGMLatestEGVNotAvailableBinder")))
@protocol Cgm_shared_moduleCGMLatestEGVNotAvailableBinder
@required
- (void)bindLatestEGVNotAvailableText:(NSString *)text color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("bindLatestEGVNotAvailable(text:color:)")));
@end;

__attribute__((swift_name("CGMLatestEGVOnRangeBinder")))
@protocol Cgm_shared_moduleCGMLatestEGVOnRangeBinder
@required
- (void)bindOnRangeText:(NSString *)text color:(Cgm_shared_moduleCommonColor *)color trend:(Cgm_shared_moduleTrend_ *)trend __attribute__((swift_name("bindOnRange(text:color:trend:)")));
@end;

__attribute__((swift_name("CGMLatestEGVOutOfRangeBinder")))
@protocol Cgm_shared_moduleCGMLatestEGVOutOfRangeBinder
@required
- (void)bindOutRangeText:(NSString *)text color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("bindOutRange(text:color:)")));
@end;

__attribute__((swift_name("CGMLatestEGVBinder")))
@protocol Cgm_shared_moduleCGMLatestEGVBinder <Cgm_shared_moduleCGMLatestEGVNotAvailableBinder, Cgm_shared_moduleCGMLatestEGVOnRangeBinder, Cgm_shared_moduleCGMLatestEGVOutOfRangeBinder>
@required
@end;

__attribute__((swift_name("CGMOperationModeBinder")))
@protocol Cgm_shared_moduleCGMOperationModeBinder
@required
- (void)bindOperationModeText:(NSString *)text color:(Cgm_shared_moduleCommonColor *)color __attribute__((swift_name("bindOperationMode(text:color:)")));
@end;

__attribute__((swift_name("CGMStatusBarBinder")))
@protocol Cgm_shared_moduleCGMStatusBarBinder <Cgm_shared_moduleCGMIobBinder, Cgm_shared_moduleCGMLatestEGVBinder, Cgm_shared_moduleCGMOperationModeBinder>
@required
- (void)redrawGraph __attribute__((swift_name("redrawGraph()")));
- (void)setCGMGraphFacadeCgmGraphFacade:(Cgm_shared_moduleCGMGraphFacade *)cgmGraphFacade __attribute__((swift_name("setCGMGraphFacade(cgmGraphFacade:)")));
@end;

__attribute__((swift_name("AutomatedStatus_")))
@interface Cgm_shared_moduleAutomatedStatus_ : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus_.MaximumInsulin")))
@interface Cgm_shared_moduleAutomatedStatus_MaximumInsulin : Cgm_shared_moduleAutomatedStatus_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)maximumInsulin __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus_.Normal")))
@interface Cgm_shared_moduleAutomatedStatus_Normal : Cgm_shared_moduleAutomatedStatus_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)normal __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomatedStatus_.Paused")))
@interface Cgm_shared_moduleAutomatedStatus_Paused : Cgm_shared_moduleAutomatedStatus_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paused __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Circle")))
@interface Cgm_shared_moduleCircle : Cgm_shared_moduleBase
- (instancetype)initWithPoint:(Cgm_shared_modulePoint *)point radius:(float)radius color:(Cgm_shared_moduleCommonColor *)color borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth __attribute__((swift_name("init(point:radius:color:borderColor:borderWidth:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *borderColor __attribute__((swift_name("borderColor")));
@property (readonly) float borderWidth __attribute__((swift_name("borderWidth")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) Cgm_shared_modulePoint *point __attribute__((swift_name("point")));
@property (readonly) float radius __attribute__((swift_name("radius")));
@end;

__attribute__((swift_name("Badge")))
@interface Cgm_shared_moduleBadge : Cgm_shared_moduleCircle
- (instancetype)initWithPoint:(Cgm_shared_modulePoint *)point radius:(float)radius color:(Cgm_shared_moduleCommonColor *)color borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth __attribute__((swift_name("init(point:radius:color:borderColor:borderWidth:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Badge.BadgeIcon")))
@interface Cgm_shared_moduleBadgeBadgeIcon : Cgm_shared_moduleBadge
- (instancetype)initWithPoint:(Cgm_shared_modulePoint *)point radius:(float)radius borderWidth:(float)borderWidth color:(Cgm_shared_moduleCommonColor *)color borderColor:(Cgm_shared_moduleCommonColor *)borderColor icon:(Cgm_shared_moduleBitmapReference *)icon __attribute__((swift_name("init(point:radius:borderWidth:color:borderColor:icon:)"))) __attribute__((objc_designated_initializer));
@property (readonly) Cgm_shared_moduleBitmapReference *icon __attribute__((swift_name("icon")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Badge.BadgeLabel")))
@interface Cgm_shared_moduleBadgeBadgeLabel : Cgm_shared_moduleBadge
- (instancetype)initWithPoint:(Cgm_shared_modulePoint *)point radius:(float)radius borderWidth:(float)borderWidth color:(Cgm_shared_moduleCommonColor *)color borderColor:(Cgm_shared_moduleCommonColor *)borderColor label:(Cgm_shared_moduleLabel *)label __attribute__((swift_name("init(point:radius:borderWidth:color:borderColor:label:)"))) __attribute__((objc_designated_initializer));
@property (readonly) Cgm_shared_moduleLabel *label __attribute__((swift_name("label")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Badge.NoBadge")))
@interface Cgm_shared_moduleBadgeNoBadge : Cgm_shared_moduleBadge
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noBadge __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("BitmapReference")))
@interface Cgm_shared_moduleBitmapReference : Cgm_shared_moduleBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_modulePoint *centerPoint __attribute__((swift_name("centerPoint")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BitmapReference.Bolus")))
@interface Cgm_shared_moduleBitmapReferenceBolus : Cgm_shared_moduleBitmapReference
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint width:(float)width height:(float)height __attribute__((swift_name("init(startPoint:width:height:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BitmapReference.CheckMark")))
@interface Cgm_shared_moduleBitmapReferenceCheckMark : Cgm_shared_moduleBitmapReference
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint width:(float)width height:(float)height __attribute__((swift_name("init(startPoint:width:height:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BitmapReference.CloseMark")))
@interface Cgm_shared_moduleBitmapReferenceCloseMark : Cgm_shared_moduleBitmapReference
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint width:(float)width height:(float)height __attribute__((swift_name("init(startPoint:width:height:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BitmapReference.Pod")))
@interface Cgm_shared_moduleBitmapReferencePod : Cgm_shared_moduleBitmapReference
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint width:(float)width height:(float)height __attribute__((swift_name("init(startPoint:width:height:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonColor")))
@interface Cgm_shared_moduleCommonColor : Cgm_shared_moduleBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property (readonly) NSString *hex __attribute__((swift_name("hex")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonColor.Companion")))
@interface Cgm_shared_moduleCommonColorCompanion : Cgm_shared_moduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (Cgm_shared_moduleCommonColor *)fromHexHex:(NSString *)hex __attribute__((swift_name("fromHex(hex:)")));
- (Cgm_shared_moduleCommonColor *)fromRGBARed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(float)alpha __attribute__((swift_name("fromRGBA(red:green:blue:alpha:)")));
@property (readonly) Cgm_shared_moduleCommonColor *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((swift_name("Line")))
@interface Cgm_shared_moduleLine : Cgm_shared_moduleBase
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint endPoint:(Cgm_shared_modulePoint *)endPoint width:(float)width color:(Cgm_shared_moduleCommonColor *)color lineCap:(Cgm_shared_moduleLineCap *)lineCap __attribute__((swift_name("init(startPoint:endPoint:width:color:lineCap:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) Cgm_shared_modulePoint *endPoint __attribute__((swift_name("endPoint")));
@property (readonly) Cgm_shared_moduleLineCap *lineCap __attribute__((swift_name("lineCap")));
@property (readonly) Cgm_shared_modulePoint *startPoint __attribute__((swift_name("startPoint")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DottedLine")))
@interface Cgm_shared_moduleDottedLine : Cgm_shared_moduleLine
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint endPoint:(Cgm_shared_modulePoint *)endPoint width:(float)width color:(Cgm_shared_moduleCommonColor *)color dashWidth:(float)dashWidth dashGap:(float)dashGap __attribute__((swift_name("init(startPoint:endPoint:width:color:dashWidth:dashGap:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStartPoint:(Cgm_shared_modulePoint *)startPoint endPoint:(Cgm_shared_modulePoint *)endPoint width:(float)width color:(Cgm_shared_moduleCommonColor *)color lineCap:(Cgm_shared_moduleLineCap *)lineCap __attribute__((swift_name("init(startPoint:endPoint:width:color:lineCap:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) float dashGap __attribute__((swift_name("dashGap")));
@property (readonly) float dashWidth __attribute__((swift_name("dashWidth")));
@end;

__attribute__((swift_name("Rectangle")))
@interface Cgm_shared_moduleRectangle : Cgm_shared_moduleBase
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color cornerRadius:(float)cornerRadius borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth popup:(Cgm_shared_modulePopup * _Nullable)popup __attribute__((swift_name("init(leftTop:rightBottom:color:cornerRadius:borderColor:borderWidth:popup:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *borderColor __attribute__((swift_name("borderColor")));
@property (readonly) float borderWidth __attribute__((swift_name("borderWidth")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) float cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) Cgm_shared_modulePoint *leftTop __attribute__((swift_name("leftTop")));
@property (readonly) Cgm_shared_modulePopup * _Nullable popup __attribute__((swift_name("popup")));
@property Cgm_shared_modulePoint *rightBottom __attribute__((swift_name("rightBottom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoalRange_")))
@interface Cgm_shared_moduleGoalRange_ : Cgm_shared_moduleRectangle
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color upperLimit:(Cgm_shared_moduleLine *)upperLimit lowerLimit:(Cgm_shared_moduleLine *)lowerLimit targetBg:(Cgm_shared_moduleDottedLine *)targetBg __attribute__((swift_name("init(leftTop:rightBottom:color:upperLimit:lowerLimit:targetBg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color cornerRadius:(float)cornerRadius borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth popup:(Cgm_shared_modulePopup * _Nullable)popup __attribute__((swift_name("init(leftTop:rightBottom:color:cornerRadius:borderColor:borderWidth:popup:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleLine *lowerLimit __attribute__((swift_name("lowerLimit")));
@property (readonly) Cgm_shared_moduleDottedLine *targetBg __attribute__((swift_name("targetBg")));
@property (readonly) Cgm_shared_moduleLine *upperLimit __attribute__((swift_name("upperLimit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Label")))
@interface Cgm_shared_moduleLabel : Cgm_shared_moduleBase
- (instancetype)initWithText:(NSString *)text textPoint:(Cgm_shared_modulePoint *)textPoint size:(float)size color:(Cgm_shared_moduleCommonColor *)color textAlignment:(Cgm_shared_moduleTextAlignment *)textAlignment textStyle:(Cgm_shared_moduleTextStyle *)textStyle __attribute__((swift_name("init(text:textPoint:size:color:textAlignment:textStyle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_modulePoint *)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_moduleCommonColor *)component4 __attribute__((swift_name("component4()")));
- (Cgm_shared_moduleTextAlignment *)component5 __attribute__((swift_name("component5()")));
- (Cgm_shared_moduleTextStyle *)component6 __attribute__((swift_name("component6()")));
- (Cgm_shared_moduleLabel *)doCopyText:(NSString *)text textPoint:(Cgm_shared_modulePoint *)textPoint size:(float)size color:(Cgm_shared_moduleCommonColor *)color textAlignment:(Cgm_shared_moduleTextAlignment *)textAlignment textStyle:(Cgm_shared_moduleTextStyle *)textStyle __attribute__((swift_name("doCopy(text:textPoint:size:color:textAlignment:textStyle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleCommonColor *color __attribute__((swift_name("color")));
@property (readonly) float size __attribute__((swift_name("size")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) Cgm_shared_moduleTextAlignment *textAlignment __attribute__((swift_name("textAlignment")));
@property (readonly) Cgm_shared_modulePoint *textPoint __attribute__((swift_name("textPoint")));
@property (readonly) Cgm_shared_moduleTextStyle *textStyle __attribute__((swift_name("textStyle")));
@end;

__attribute__((swift_name("LineCap")))
@interface Cgm_shared_moduleLineCap : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineCap.Butt")))
@interface Cgm_shared_moduleLineCapButt : Cgm_shared_moduleLineCap
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)butt __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineCap.Round")))
@interface Cgm_shared_moduleLineCapRound : Cgm_shared_moduleLineCap
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)round __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineCap.Square")))
@interface Cgm_shared_moduleLineCapSquare : Cgm_shared_moduleLineCap
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)square __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("ManualStatus_")))
@interface Cgm_shared_moduleManualStatus_ : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManualStatus_.Normal")))
@interface Cgm_shared_moduleManualStatus_Normal : Cgm_shared_moduleManualStatus_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)normal __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManualStatus_.TempBasal")))
@interface Cgm_shared_moduleManualStatus_TempBasal : Cgm_shared_moduleManualStatus_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tempBasal __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("MedicalValue_")))
@interface Cgm_shared_moduleMedicalValue_ : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalValue_.Available")))
@interface Cgm_shared_moduleMedicalValue_Available : Cgm_shared_moduleMedicalValue_
- (instancetype)initWithValue:(float)value units:(NSString *)units __attribute__((swift_name("init(value:units:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *units __attribute__((swift_name("units")));
@property (readonly) float value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicalValue_.NotAvailable")))
@interface Cgm_shared_moduleMedicalValue_NotAvailable : Cgm_shared_moduleMedicalValue_
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notAvailable __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface Cgm_shared_modulePoint : Cgm_shared_moduleBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_modulePoint *)doCopyX:(float)x y:(float)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Popup")))
@interface Cgm_shared_modulePopup : Cgm_shared_moduleBase
- (instancetype)initWithPoint:(Cgm_shared_modulePoint *)point descriptions:(NSArray<Cgm_shared_modulePopupDescription *> *)descriptions __attribute__((swift_name("init(point:descriptions:)"))) __attribute__((objc_designated_initializer));
- (Cgm_shared_modulePoint *)component1 __attribute__((swift_name("component1()")));
- (NSArray<Cgm_shared_modulePopupDescription *> *)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_modulePopup *)doCopyPoint:(Cgm_shared_modulePoint *)point descriptions:(NSArray<Cgm_shared_modulePopupDescription *> *)descriptions __attribute__((swift_name("doCopy(point:descriptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Cgm_shared_modulePopupDescription *> *descriptions __attribute__((swift_name("descriptions")));
@property Cgm_shared_modulePoint *point __attribute__((swift_name("point")));
@end;

__attribute__((swift_name("PopupDescription")))
@interface Cgm_shared_modulePopupDescription : Cgm_shared_moduleBase
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((swift_name("PopupDescription.Automated")))
@interface Cgm_shared_modulePopupDescriptionAutomated : Cgm_shared_modulePopupDescription
@property (readonly) Cgm_shared_moduleAutomatedStatus_ *automatedStatus __attribute__((swift_name("automatedStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.AutomatedHypoProtected")))
@interface Cgm_shared_modulePopupDescriptionAutomatedHypoProtected : Cgm_shared_modulePopupDescriptionAutomated
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("init(startTime:endTime:automatedStatus:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleAutomatedStatus_ *)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_modulePopupDescriptionAutomatedHypoProtected *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("doCopy(startTime:endTime:automatedStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleAutomatedStatus_ *automatedStatus __attribute__((swift_name("automatedStatus")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.AutomatedLimited")))
@interface Cgm_shared_modulePopupDescriptionAutomatedLimited : Cgm_shared_modulePopupDescriptionAutomated
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("init(startTime:endTime:automatedStatus:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleAutomatedStatus_ *)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_modulePopupDescriptionAutomatedLimited *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("doCopy(startTime:endTime:automatedStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleAutomatedStatus_ *automatedStatus __attribute__((swift_name("automatedStatus")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.AutomatedNormal")))
@interface Cgm_shared_modulePopupDescriptionAutomatedNormal : Cgm_shared_modulePopupDescriptionAutomated
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("init(startTime:endTime:automatedStatus:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleAutomatedStatus_ *)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_modulePopupDescriptionAutomatedNormal *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime automatedStatus:(Cgm_shared_moduleAutomatedStatus_ *)automatedStatus __attribute__((swift_name("doCopy(startTime:endTime:automatedStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleAutomatedStatus_ *automatedStatus __attribute__((swift_name("automatedStatus")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.Bolus")))
@interface Cgm_shared_modulePopupDescriptionBolus : Cgm_shared_modulePopupDescription
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime carbs:(Cgm_shared_moduleMedicalValue_ *)carbs cgm:(Cgm_shared_moduleMedicalValue_ *)cgm bolus:(Cgm_shared_moduleMedicalValue_ *)bolus __attribute__((swift_name("init(startTime:endTime:carbs:cgm:bolus:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleMedicalValue_ *)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_moduleMedicalValue_ *)component4 __attribute__((swift_name("component4()")));
- (Cgm_shared_moduleMedicalValue_ *)component5 __attribute__((swift_name("component5()")));
- (Cgm_shared_modulePopupDescriptionBolus *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime carbs:(Cgm_shared_moduleMedicalValue_ *)carbs cgm:(Cgm_shared_moduleMedicalValue_ *)cgm bolus:(Cgm_shared_moduleMedicalValue_ *)bolus __attribute__((swift_name("doCopy(startTime:endTime:carbs:cgm:bolus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleMedicalValue_ *bolus __attribute__((swift_name("bolus")));
@property (readonly) Cgm_shared_moduleMedicalValue_ *carbs __attribute__((swift_name("carbs")));
@property (readonly) Cgm_shared_moduleMedicalValue_ *cgm __attribute__((swift_name("cgm")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.Manual")))
@interface Cgm_shared_modulePopupDescriptionManual : Cgm_shared_modulePopupDescription
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime manualStatus:(Cgm_shared_moduleManualStatus_ *)manualStatus __attribute__((swift_name("init(startTime:endTime:manualStatus:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleManualStatus_ *)component3 __attribute__((swift_name("component3()")));
- (Cgm_shared_modulePopupDescriptionManual *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime manualStatus:(Cgm_shared_moduleManualStatus_ *)manualStatus __attribute__((swift_name("doCopy(startTime:endTime:manualStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) Cgm_shared_moduleManualStatus_ *manualStatus __attribute__((swift_name("manualStatus")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((swift_name("PopupDescription.Pod")))
@interface Cgm_shared_modulePopupDescriptionPod : Cgm_shared_modulePopupDescription
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.PodActivated")))
@interface Cgm_shared_modulePopupDescriptionPodActivated : Cgm_shared_modulePopupDescriptionPod
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime __attribute__((swift_name("init(startTime:endTime:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_modulePopupDescriptionPodActivated *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime __attribute__((swift_name("doCopy(startTime:endTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PopupDescription.PodDeactivated")))
@interface Cgm_shared_modulePopupDescriptionPodDeactivated : Cgm_shared_modulePopupDescriptionPod
- (instancetype)initWithStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime __attribute__((swift_name("init(startTime:endTime:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (Cgm_shared_moduleLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_modulePopupDescriptionPodDeactivated *)doCopyStartTime:(int64_t)startTime endTime:(Cgm_shared_moduleLong * _Nullable)endTime __attribute__((swift_name("doCopy(startTime:endTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Cgm_shared_moduleLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Scale")))
@interface Cgm_shared_moduleScale : Cgm_shared_moduleRectangle
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color lines:(NSArray<Cgm_shared_moduleLine *> *)lines labels:(NSArray<Cgm_shared_moduleLabel *> *)labels __attribute__((swift_name("init(leftTop:rightBottom:color:lines:labels:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color cornerRadius:(float)cornerRadius borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth popup:(Cgm_shared_modulePopup * _Nullable)popup __attribute__((swift_name("init(leftTop:rightBottom:color:cornerRadius:borderColor:borderWidth:popup:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<Cgm_shared_moduleLabel *> *labels __attribute__((swift_name("labels")));
@property (readonly) NSArray<Cgm_shared_moduleLine *> *lines __attribute__((swift_name("lines")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleTimeEvent")))
@interface Cgm_shared_moduleSingleTimeEvent : Cgm_shared_moduleRectangle
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color cornerRadius:(float)cornerRadius borderWidth:(float)borderWidth popup:(Cgm_shared_modulePopup *)popup icon:(Cgm_shared_moduleBitmapReference *)icon badge:(Cgm_shared_moduleBadge *)badge __attribute__((swift_name("init(leftTop:rightBottom:color:cornerRadius:borderWidth:popup:icon:badge:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLeftTop:(Cgm_shared_modulePoint *)leftTop rightBottom:(Cgm_shared_modulePoint *)rightBottom color:(Cgm_shared_moduleCommonColor *)color cornerRadius:(float)cornerRadius borderColor:(Cgm_shared_moduleCommonColor *)borderColor borderWidth:(float)borderWidth popup:(Cgm_shared_modulePopup * _Nullable)popup __attribute__((swift_name("init(leftTop:rightBottom:color:cornerRadius:borderColor:borderWidth:popup:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) Cgm_shared_moduleBadge *badge __attribute__((swift_name("badge")));
@property (readonly) Cgm_shared_moduleBitmapReference *icon __attribute__((swift_name("icon")));
@end;

__attribute__((swift_name("TextAlignment")))
@interface Cgm_shared_moduleTextAlignment : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextAlignment.Center")))
@interface Cgm_shared_moduleTextAlignmentCenter : Cgm_shared_moduleTextAlignment
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)center __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextAlignment.Start")))
@interface Cgm_shared_moduleTextAlignmentStart : Cgm_shared_moduleTextAlignment
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)start __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("TextStyle")))
@interface Cgm_shared_moduleTextStyle : Cgm_shared_moduleBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextStyle.Bold")))
@interface Cgm_shared_moduleTextStyleBold : Cgm_shared_moduleTextStyle
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bold __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextStyle.Normal")))
@interface Cgm_shared_moduleTextStyleNormal : Cgm_shared_moduleTextStyle
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)normal __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewSize")))
@interface Cgm_shared_moduleViewSize : Cgm_shared_moduleBase
- (instancetype)initWithWidth:(float)width height:(float)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (Cgm_shared_moduleViewSize *)doCopyWidth:(float)width height:(float)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonBadgeDimensKt")))
@interface Cgm_shared_moduleCommonBadgeDimensKt : Cgm_shared_moduleBase
+ (float)calculatedBadgeBorderWidth __attribute__((swift_name("calculatedBadgeBorderWidth()")));
+ (float)calculatedBadgeRadius __attribute__((swift_name("calculatedBadgeRadius()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonPointPositionsKt")))
@interface Cgm_shared_moduleCommonPointPositionsKt : Cgm_shared_moduleBase
+ (float)calculatedCircleRadius __attribute__((swift_name("calculatedCircleRadius()")));
+ (float)calculatedTextPoint __attribute__((swift_name("calculatedTextPoint()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculatedLineWidthKt")))
@interface Cgm_shared_moduleCalculatedLineWidthKt : Cgm_shared_moduleBase
+ (float)calculatedLineWidth __attribute__((swift_name("calculatedLineWidth()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonRectDimensKt")))
@interface Cgm_shared_moduleCommonRectDimensKt : Cgm_shared_moduleBase
+ (float)calculatedPodEventCornerRadius __attribute__((swift_name("calculatedPodEventCornerRadius()")));
+ (float)calculatedPodSubEventCornerRadius __attribute__((swift_name("calculatedPodSubEventCornerRadius()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonGraphMarginKt")))
@interface Cgm_shared_moduleCommonGraphMarginKt : Cgm_shared_moduleBase
+ (float)staticBgScaleBottomMargin __attribute__((swift_name("staticBgScaleBottomMargin()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
