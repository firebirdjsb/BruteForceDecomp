/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 55CE2C9E082CCE9378DB4E141209D277E389BB5E928A2A53DA915E1BD1AC8371
 * Entry: 0x001d1370, Ghidra index: 6240, label: FUN_001d1370
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_0024aa10(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d1370(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_0024aa10(guest_esi, first, last, destination_end);
    return guest_esi;
}
