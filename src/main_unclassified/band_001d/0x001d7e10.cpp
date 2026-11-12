/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3A108AE501B56DA5CBD2882E432071F805B4DEBAA6F4CE532B28FE3681AAAAD2
 * Entry: 0x001d7e10, Ghidra index: 6412, label: FUN_001d7e10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d7e10(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions copy 4 ascending DWORD offsets per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 4u, false);
}
