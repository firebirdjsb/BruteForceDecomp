/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 69F01002C380738F966BB3E96D20D6AED0B6AB4D8EF99842630DC616A393C7B9
 * Entry: 0x001cfc30, Ghidra index: 6145, label: FUN_001cfc30
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d7790(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cfc30(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d7790(guest_eax, first, last, destination_end);
    return guest_eax;
}
