/* Brute Force retail Xbox x86 entry: FUN_0001fe80, 0x0001fe80.
 * Input x86 body SHA-256: 42B19D2AFE0357444371C9EBD7F904AA9001C35470ED9825E9767F3A5C05CD32
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * Host guest_edx models original EDX register, NOT a recovered C++ parameter.
 * The original nonzero branch is a JMP 0x0008F6E0, not a CALL. Host call and
 * return only models its bounded dispatch condition, not original tail
 * transfer, guest EAX live-out, stack ownership or cross-function linkage.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0001fe80(std::uint32_t guest_edx)
{
    // Original MOV EAX,[EDX+4], TEST EAX,EAX, JE 0x1FE8C.
    if (bf_guest_read_u32(guest_edx + UINT32_C(4)) != 0) {
        // XBE 0x1FE87 E9: a tail JMP, not a returning x86 CALL.
        FUN_0008f6e0(guest_edx);
    }
}
