/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: B9A898044217F5F9E6ED0ADC2F5017886C5364EFF1A0E946CC781B36648DE5AD
 * Entry: 0x0037fcc0, Ghidra index: 13512, label: XInitDevices
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void XAPILIB__XInitDevices(uint32_t& guest_eip)
{
    guest_eip = 0x0037f195u;  // E9 rel32 destination; no guest return address is pushed.
}
