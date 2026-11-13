/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: AF0DE4228F70A28D92E6EEF8DCBBEF5E5253011BA2A46882EB703F6CDACDEF5A
 * Entry: 0x001d0ba0, Ghidra index: 6204, label: FUN_001d0ba0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d8b50(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d0ba0(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d8b50(guest_eax, first, last, destination_end);
    return guest_eax;
}
