/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 6CBDFC619734BDAA05A4EB65F81C07A08CFBA6B5BD1FB4C69303406D1773E381
 * Entry: 0x0027a840, Ghidra index: 8954, label: FUN_0027a840
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_0027a870(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_0027a840(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_0027a870(guest_esi, first, last, destination_end);
    return guest_esi;
}
