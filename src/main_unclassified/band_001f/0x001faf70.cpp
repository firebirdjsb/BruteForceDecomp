/* Brute Force retail Xbox original x86 entry: FUN_001faf70, 0x001FAF70.
 * Input x86 body SHA-256: 545C2D8C55EC9C0879D9B077005DFDFBCFC36BEB8DE7F1BF1DEB48CB5C4C982B
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (EAX result address and 3 original stack words), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * The stack key pointer is dereferenced once only when begin != end.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_001faf70(std::uint32_t guest_out,
                                std::uint32_t guest_begin,
                                std::uint32_t guest_end,
                                std::uint32_t guest_key_address)
{
    std::uint32_t current = guest_begin;
    if (current != guest_end) {
        const std::uint32_t key = bf_guest_read_u32(guest_key_address);
        do {
            if (bf_guest_read_u32(current + UINT32_C(12)) == key)
                break;
            current = bf_guest_read_u32(current);
        } while (current != guest_end);
    }
    bf_guest_write_u32(guest_out, current);
    return guest_out;
}
