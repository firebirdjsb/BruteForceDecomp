/* Address-only recovered Xbox data-section labels.
 *
 * Retail Brute Force original XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 *
 * Verified source XBE section ranges:
 *  .rdata starts 0x00386340 (194476 bytes): contains VA 0x003A55BC.
 *  .data  starts 0x003B5B00 (363856 bytes): contains VA 0x00400B80.
 *
 * Each identified Ghidra caller takes &LAB_003a55bc or &LAB_00400b80
 * as an address, without reading or changing those symbols directly.
 * This header provides *no storage*, bytes, inferred string contents,
 * object size, vtable identity or callable function interpretation.
 *
 * The Xbox virtual-address-to-native-PC mapping and 32-bit value
 * translation remain unverified; syntax validity is not 1:1 behavior.
 */
#ifndef BF_XBE_MAPPED_DATA_ADDRESSES_X86_H
#define BF_XBE_MAPPED_DATA_ADDRESSES_X86_H
#include <stdint.h>
extern uint8_t LAB_003a55bc;
extern uint8_t LAB_00400b80;
#endif
