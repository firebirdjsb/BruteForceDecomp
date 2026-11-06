/* Brute Force original Xbox: 0x00012540, FUN_00012540.
 * Input x86 body SHA-256: 17ECDF624151AA6A24020748FA3D463DCB4EB707EA1E78CB6D33999629EE9522
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Host guest_ecx models the incoming Xbox ECX register, NOT an original
 * stack parameter or a recovered C++ method signature. Guest-address
 * translation and the original entry/return ABI remain unimplemented.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00012540(std::uint32_t guest_ecx)
{
    // Original LEA EDX,[ECX+0x10] precedes the first store. All arithmetic
    // and memory addresses are 32-bit guest words, never host pointers.
    const std::uint32_t guest_edx = guest_ecx + UINT32_C(0x10);
    bf_guest_write_u32(guest_ecx, UINT32_C(0x003a4f68));
    if (bf_guest_read_u32(guest_edx + UINT32_C(4)) != 0) {
        // XBE 0x12550 is a conditional near JMP, not a normal CALL. The
        // host call-and-return models only the guest memory effect; tail
        // transfer, machine registers and native linkage are ABI_UNVERIFIED.
        FUN_0008f6e0(guest_edx);
    }
}
