/* Brute Force retail Xbox FUN_00250060, Input x86 body SHA-256: 507F03329BE8104EFB1FCC213C52542B86D08D7F0886361B448C4BABE847746B.
 * Entry: 0x00250060
 * Input guest_ecx models original live-in ECX; guest_stack_word_0 models the
 * original RET 4 stack DWORD at entry ESP+4. These are host-side guest32
 * interfaces, NOT recovered native C++/Xbox prototypes.
 * The original body has three RET 4 exits and no external calls.
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00250060(std::uint32_t guest_ecx, std::uint32_t guest_stack_word_0)
{
    std::uint32_t eax = bf_guest_read_u32(guest_ecx + UINT32_C(8));
    std::uint32_t edx = bf_guest_read_u32(eax);
    bf_guest_write_u32(guest_ecx + UINT32_C(8), edx);
    // Original MOV EDX,[EAX] again AFTER the write; do not cache this read.
    edx = bf_guest_read_u32(eax);
    if (bf_guest_read_u8(edx + UINT32_C(0x11)) == 0) {
        bf_guest_write_u32(edx + UINT32_C(4), guest_ecx);
    }
    edx = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    bf_guest_write_u32(eax + UINT32_C(4), edx);
    edx = bf_guest_read_u32(guest_stack_word_0 + UINT32_C(4));
    edx = bf_guest_read_u32(edx + UINT32_C(4));
    if (guest_ecx == bf_guest_read_u32(edx + UINT32_C(4))) {
        bf_guest_write_u32(edx + UINT32_C(4), eax);
        bf_guest_write_u32(eax, guest_ecx);
        bf_guest_write_u32(guest_ecx + UINT32_C(4), eax);
        return;
    }
    edx = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    if (guest_ecx == bf_guest_read_u32(edx)) {
        bf_guest_write_u32(edx, eax);
        bf_guest_write_u32(eax, guest_ecx);
        bf_guest_write_u32(guest_ecx + UINT32_C(4), eax);
        return;
    }
    bf_guest_write_u32(edx + UINT32_C(8), eax);
    bf_guest_write_u32(eax, guest_ecx);
    bf_guest_write_u32(guest_ecx + UINT32_C(4), eax);
}
