/* Brute Force original Xbox - bounded guest32 memory model.
 * Input x86 body SHA-256: 1D502B4BFB2E66B77D41EC80291DD8224F9681A1214B33890E45D962C6376618
 * Entry: 0x003537fa, Ghidra index: 13091, label: FUN_003537fa
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * ECX is the only captured input; no caller-side register meaning inferred.
 */
#include "bf_xbe_guest32_xnet_record_models.h"

uint32_t FUN_003537fa(uint32_t guest_ecx)
{
    const uint32_t head = guest_ecx + 0x64u;
    uint32_t link = bf_guest_read_u32(head);
    uint32_t node = (link != head) ? link - 0x64u : 0u;

    // The original computes zero for the sentinel before reading a node byte.
    while (node != 0u) {
        if ((bf_guest_read_u8(node + 0x0cu) & 0x40u) != 0u)
            return node;  // EAX contains the candidate node base at this branch.

        link = bf_guest_read_u32(node + 0x64u);
        node = (link != head) ? link - 0x64u : 0u;
    }

    return 0u;  // Empty/end-of-list path reaches RET with EAX zero.
}
