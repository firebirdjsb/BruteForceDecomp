/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 1DC20D1DF1E5391816AE0952D66EB7066C64165D799D5442054862687B3BE192
 * Entry: 0x001d03d0, Ghidra index: 6168, label: FUN_001d03d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d8180(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d03d0(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d8180(guest_esi, first, last, destination_end);
    return guest_esi;
}
