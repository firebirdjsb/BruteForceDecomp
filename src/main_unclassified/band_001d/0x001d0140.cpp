/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 517456E86D17D73E13BA2F2B3AFBBD7A3C052F21AC6AB47005031CA9D9D39E00
 * Entry: 0x001d0140, Ghidra index: 6158, label: FUN_001d0140
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d7e10(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d0140(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d7e10(guest_esi, first, last, destination_end);
    return guest_esi;
}
