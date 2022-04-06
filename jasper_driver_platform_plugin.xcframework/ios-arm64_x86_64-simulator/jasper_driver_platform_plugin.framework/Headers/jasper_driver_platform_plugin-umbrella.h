#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "JasperDriverPlatformPlugin.h"
#import "Pigeon.h"

FOUNDATION_EXPORT double jasper_driver_platform_pluginVersionNumber;
FOUNDATION_EXPORT const unsigned char jasper_driver_platform_pluginVersionString[];

