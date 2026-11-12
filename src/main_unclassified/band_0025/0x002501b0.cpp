/* Brute Force original retail Xbox entry 0x002501b0: FUN_002501b0.
 * Input x86 body SHA-256: 48FF91763FFD6D64559D95E9E9A7367B72152E9C2EF6A06D8C4C54E3FB68B768
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Input guest_edx models the original EDX register holding a guest 32-bit
 * address of the mutable list-cursor DWORD; it is not a recovered original
 * C++ signature. Guest read/write mapping, fault/alias timing, x86 register
 * live-outs, EFLAGS and all callers remain unverified.
 * Full original contiguous 93-byte x86 body and eight branches verified.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_002501b0(std::uint32_t guest_edx)
{
    // EAX <- [EDX]; test the original unsigned byte flag.
    std::uint32_t node = bf_guest_read_u32(guest_edx);
    if (bf_guest_read_u8(node + UINT32_C(0x11)) != 0) {
        bf_guest_write_u32(guest_edx, bf_guest_read_u32(node + UINT32_C(8)));
        return;
    }

    // EBX test of [first + flag], followed by the +8 chain when clear.
    std::uint32_t child = bf_guest_read_u32(node);
    if (bf_guest_read_u8(child + UINT32_C(0x11)) == 0) {
        std::uint32_t next = bf_guest_read_u32(child + UINT32_C(8));
        while (bf_guest_read_u8(next + UINT32_C(0x11)) == 0) {
            child = next;
            next = bf_guest_read_u32(child + UINT32_C(8));
        }
        bf_guest_write_u32(guest_edx, child);
        return;
    }

    // Backwards list direction: test +4 link and repeatedly compare cursor
    // against [node] before advancing. Preserve every guest read/write order.
    node = bf_guest_read_u32(node + UINT32_C(4));
    if (bf_guest_read_u8(node + UINT32_C(0x11)) != 0)
        return;

    for (;;) {
        const std::uint32_t cursor = bf_guest_read_u32(guest_edx);
        if (cursor != bf_guest_read_u32(node))
            break;
        bf_guest_write_u32(guest_edx, node);
        node = bf_guest_read_u32(node + UINT32_C(4));
        if (bf_guest_read_u8(node + UINT32_C(0x11)) != 0)
            break;
    }
    // Original XBE does a SECOND byte read before this final conditional store.
    if (bf_guest_read_u8(node + UINT32_C(0x11)) == 0)
        bf_guest_write_u32(guest_edx, node);
}
