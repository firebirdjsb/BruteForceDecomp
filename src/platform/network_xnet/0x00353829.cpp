/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 2295C49345F17CBD4B0C62F25CF3CC4239DF20F6DCC47C527D581E7A48C25F87
 * Entry: 0x00353829, Ghidra index: 13092, label: FUN_00353829
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * The original saves entry ECX in EDI across both calls.
 */
#include "bf_xbe_guest32_xnet_record_models.h"

uint32_t FUN_00353829(uint32_t guest_ecx)
{
    const uint32_t node = FUN_003537fa(guest_ecx);
    if (node != 0u)
        FUN_00353101(guest_ecx, node);
    // ESI retains the first call's EAX across the unlink call.
    return node;
}
