/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: EE0AFD26B5AD2109B6447F4B4B9F49E8D7A874921ACB621226F018944545AD93
 * Entry: 0x002ea4fe, Ghidra index: 10583, label: thunk_FUN_002ea01d
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_002ea01d(uint32_t& guest_eip)
{
    guest_eip = 0x002ea01du;  // E9 rel32 destination; no guest return address is pushed.
}
