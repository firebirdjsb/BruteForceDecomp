/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 01C8668D636BA0B7EDE9D41462C4EEB43768B061FDC4A0D4305BFEE41F4C284C
 * Entry: 0x001cec00, Ghidra index: 6069, label: FUN_001cec00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d64e0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cec00(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d64e0(guest_esi, first, last, destination_end);
    return guest_esi;
}
