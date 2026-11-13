/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 17DE0E74456EE622C4EAF7C4119ED29E0C482B7C8D4EAEFAC23EF0E1093CF5F9
 * Entry: 0x001cef00, Ghidra index: 6084, label: FUN_001cef00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d6840(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cef00(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d6840(guest_esi, first, last, destination_end);
    return guest_esi;
}
