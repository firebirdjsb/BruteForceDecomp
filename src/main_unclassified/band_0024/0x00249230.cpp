/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: B953570C6D176CFBDD8297601A2A02D452F218550A2F3CD50EBF3B059D803282
 * Entry: 0x00249230, Ghidra index: 8157, label: FUN_00249230
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_0024aae0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_00249230(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_0024aae0(guest_esi, first, last, destination_end);
    return guest_esi;
}
