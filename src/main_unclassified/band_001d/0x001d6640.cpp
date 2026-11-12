/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: E4321FB711FBEB3EA39C5B269A789D54EDC9D90BD4B48DE07359C93BA6CC6D84
 * Entry: 0x001d6640, Ghidra index: 6359, label: FUN_001d6640
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d6640(uint32_t guest_edi, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Copy only the fields accessed by the original MOVs. Padding stays intact.
    while (last != first) {
        last -= 16u;
        destination_end -= 16u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u32(destination_end + 0x04u, bf_guest_read_u32(last + 0x04u));
        bf_guest_write_u32(destination_end + 0x08u, bf_guest_read_u32(last + 0x08u));
        bf_guest_write_u8(destination_end + 0x0cu, bf_guest_read_u8(last + 0x0cu));
    }
    bf_guest_write_u32(guest_edi, destination_end);
    return guest_edi;  // The original moves EDI into EAX before RET.
}
