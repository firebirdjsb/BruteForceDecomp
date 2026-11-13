/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 32A684EE4A8F7668F9F6C8FFD37B9D0BF9A5D4CF2B3CC77640684BFAB91ABAC1
 * Entry: 0x001cf140, Ghidra index: 6093, label: FUN_001cf140
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d6b00(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cf140(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d6b00(guest_eax, first, last, destination_end);
    return guest_eax;
}
