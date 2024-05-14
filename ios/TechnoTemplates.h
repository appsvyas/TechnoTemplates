
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTechnoTemplatesSpec.h"

@interface TechnoTemplates : NSObject <NativeTechnoTemplatesSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TechnoTemplates : NSObject <RCTBridgeModule>
#endif

@end
