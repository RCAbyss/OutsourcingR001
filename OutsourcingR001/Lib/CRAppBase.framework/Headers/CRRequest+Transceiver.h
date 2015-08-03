/**
 *  =============CRSimpleRequest===============
 *  Base of the NetClient
 *  ===========================================
 *
 *  # Net Transceiver
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRRequest.h"

@interface CRRequest (Transceiver)

/** willSend */
- (void)willSend;

/** didSend */
- (void)didSend;

/** didFail */
- (void)didFail;

/** willRecive */
- (void)willRecive;

/** didRecive */
- (void)didRecive;

@end
