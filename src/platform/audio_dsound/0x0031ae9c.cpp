/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 9FE4AD426C51AE6E3EAAD9A3399CF3B45592379153180F60E066556FD42DE9F1
 * Entry: 0x0031ae9c, Ghidra index: 12281, label: FUN_0031ae9c
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_audio_links.h"

uint32_t FUN_0031ae9c(uint32_t target, uint32_t source)
{
    const uint32_t delta = bf_guest_read_u32(source + 8u);
    const uint32_t previous = bf_guest_read_u32(target + 8u);
    bf_guest_write_u32(target + 8u, previous + delta);
    FUN_003118c0(source);  // Original E8 at 0x0031aeac.
    return target;
}
