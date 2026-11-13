/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 5D534A188FF2036D29ABB4B0204B4169974A09A484D574BB0C68281F0666B0C5
 * Entry: 0x001d0610, Ghidra index: 6178, label: FUN_001d0610
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d84b0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d0610(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d84b0(guest_eax, first, last, destination_end);
    return guest_eax;
}
