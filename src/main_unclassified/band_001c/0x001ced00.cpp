/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 73AD093F3390E9DE8BEC96FA6662D8214E05A0A0C73DA5E639FAB65B437C7A73
 * Entry: 0x001ced00, Ghidra index: 6074, label: FUN_001ced00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d65f0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001ced00(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d65f0(guest_eax, first, last, destination_end);
    return guest_eax;
}
