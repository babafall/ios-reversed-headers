/*
 * CoreTelephony indicators.
 */

#ifndef CTINDICATORS_H_
#define CTINDICATORS_H_

#include <CoreFoundation/CoreFoundation.h>

#if __cplusplus
extern "C" {
#endif

#pragma mark - API

    void CTIndicatorsGetSignalStrength(long int *raw, long int *percentage, long int *bars);

#pragma mark - Definitions

    /* For use with the CoreTelephony notification system. */
    extern CFStringRef kCTIndicatorsSignalStrengthNotification;

#if __cplusplus
}
#endif

#endif /* CTINDICATORS_H_ */
