/* Brute Force retail Xbox x86 entry: FUN_0001c4d0, 0x0001c4d0.
 * Input x86 body SHA-256: BDD51F73956DD2E714AE63A6BF410C529C5FE39B05605A885DCE8F2C660ECADF
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * Host parameters explicitly model the incoming ECX guest address and the
 * original DWORD at entry ESP+4. They are not a recovered __thiscall or
 * original C++ signature. Original x86 preserves EBX and exits via RET 4;
 * register preservation, guest-stack setup and native linkage are unverified.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0001c4d0(std::uint32_t guest_ecx, std::uint32_t guest_stack_word_0)
{
    // Original 0x1C4D0..0x1C4D8: the *second* load from [EAX] must happen
    // after the store to [ECX+8] (possible guest-address aliasing).
    const std::uint32_t guest_eax = bf_guest_read_u32(guest_ecx + UINT32_C(8));
    std::uint32_t guest_edx = bf_guest_read_u32(guest_eax);
    bf_guest_write_u32(guest_ecx + UINT32_C(8), guest_edx);
    guest_edx = bf_guest_read_u32(guest_eax);

    // MOV BL,[EDX+0xA9]; TEST BL,BL. Only one guest byte is read.
    if (bf_guest_read_u8(guest_edx + UINT32_C(0xa9)) == 0) {
        bf_guest_write_u32(guest_edx + UINT32_C(4), guest_ecx);
    }
    guest_edx = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    bf_guest_write_u32(guest_eax + UINT32_C(4), guest_edx);

    // Original MOV EDX,[ESP+8] after PUSH EBX: the caller's first DWORD
    // stack argument, followed by two successive guest DWORD dereferences.
    guest_edx = bf_guest_read_u32(guest_stack_word_0 + UINT32_C(4));
    guest_edx = bf_guest_read_u32(guest_edx + UINT32_C(4));
    if (guest_ecx == bf_guest_read_u32(guest_edx + UINT32_C(4))) {
        bf_guest_write_u32(guest_edx + UINT32_C(4), guest_eax);
        bf_guest_write_u32(guest_eax, guest_ecx);
        bf_guest_write_u32(guest_ecx + UINT32_C(4), guest_eax);
        return; // XBE 0x1C503: RET 4; host ABI remains unresolved.
    }

    guest_edx = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    if (guest_ecx == bf_guest_read_u32(guest_edx)) {
        bf_guest_write_u32(guest_edx, guest_eax);
        bf_guest_write_u32(guest_eax, guest_ecx);
        bf_guest_write_u32(guest_ecx + UINT32_C(4), guest_eax);
        return; // XBE 0x1C515: RET 4.
    }

    bf_guest_write_u32(guest_edx + UINT32_C(8), guest_eax);
    bf_guest_write_u32(guest_eax, guest_ecx);
    bf_guest_write_u32(guest_ecx + UINT32_C(4), guest_eax);
    // XBE 0x1C521: RET 4.
}
