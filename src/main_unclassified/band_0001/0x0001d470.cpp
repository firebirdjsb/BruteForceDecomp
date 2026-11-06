/* Brute Force original Xbox: 0x0001d470, FUN_0001d470.
 * Input x86 body SHA-256: 9D9A8EBA1FF910609ABDE98C000B99E3AE58251E5FFEDCEE9E1768D7710C511E
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Host guest_esi models the incoming Xbox ESI register, NOT a recovered
 * original C++ signature. No native pointer is truncated to guest32.
 * The memory interface is intentionally unresolved until guest mapping exists.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0001d470(std::uint32_t guest_esi)
{
    // XBE 0x1D470: MOV EAX,[ESI+0x58], LEA EDX,[ESI+0x54].
    if (bf_guest_read_u32(guest_esi + UINT32_C(0x58)) != 0) {
        FUN_0008f6e0(guest_esi + UINT32_C(0x54));
    }
    bf_guest_write_u32(guest_esi + UINT32_C(0x1c), UINT32_C(0x003a4f64));

    // XBE 0x1D47F: LEA EDX,[ESI+0x38], then MOV EAX,[EDX+4].
    if (bf_guest_read_u32(guest_esi + UINT32_C(0x3c)) != 0) {
        FUN_0008f6e0(guest_esi + UINT32_C(0x38));
    }
    // XBE 0x1D495: MOV EAX,[ESI+0x28], LEA EDX,[ESI+0x24].
    if (bf_guest_read_u32(guest_esi + UINT32_C(0x28)) != 0) {
        FUN_0008f6e0(guest_esi + UINT32_C(0x24));
    }
    // XBE 0x1D4A4: LEA EDX,[ESI+0x10], then MOV [ESI],0x003A4F68.
    bf_guest_write_u32(guest_esi, UINT32_C(0x003a4f68));
    if (bf_guest_read_u32(guest_esi + UINT32_C(0x14)) != 0) {
        // Original 0x1D4B4 is JMP 0x8F6E0; host tail ABI unverified.
        FUN_0008f6e0(guest_esi + UINT32_C(0x10));
    }
}
