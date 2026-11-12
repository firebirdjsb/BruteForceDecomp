/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: D46E9ED43E287ED3E86A02E32C9B4BB54CB8E5D75D97D27DD3D76C61C0699E8E
 * Entry: 0x00236ec0, Ghidra index: 7843, label: FUN_00236ec0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00236ec0(uint32_t guest_eax, uint32_t guest_ebx,
                      uint32_t destination, uint32_t source)
{
    // EAX holds the output slot and EBX the owner. The two explicit MOVs
    // within each record advance by +4 regardless of DF.
    return bf_guest_shift_records_forward(guest_ebx, guest_eax, destination, source, 2u, false);
}
