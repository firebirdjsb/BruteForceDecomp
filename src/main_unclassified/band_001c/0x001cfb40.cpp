/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 26F7702331C864748745C3FCA5D76EE8E18A4BF13B8F5DFF68C9A507A50133EB
 * Entry: 0x001cfb40, Ghidra index: 6142, label: FUN_001cfb40
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint16_t bf_guest_read_u16(uint32_t guest_va);
void bf_guest_write_u16(uint32_t guest_va, uint16_t value);

uint32_t FUN_001cfb40(uint32_t source, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    if (first == last)
        return last;
    while (first != last) {
        bf_guest_write_u32(first, bf_guest_read_u32(source));
        bf_guest_write_u16(first + 0x4u, bf_guest_read_u16(source + 0x4u));
        bf_guest_write_u8(first + 0x6u, bf_guest_read_u8(source + 0x6u));
        bf_guest_write_u32(first + 0x8u, bf_guest_read_u32(source + 0x8u));
        bf_guest_write_u32(first + 0xcu, bf_guest_read_u32(source + 0xcu));
        bf_guest_write_u32(first + 0x10u, bf_guest_read_u32(source + 0x10u));
        bf_guest_write_u32(first + 0x14u, bf_guest_read_u32(source + 0x14u));
        first += 24u;
    }
    return last + 20u;
}
