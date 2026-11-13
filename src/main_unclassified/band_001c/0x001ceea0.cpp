/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 9B336ADF59E2B6166596D205A5DAF7462B48AFE5F8B0358EFFA50AED09B68992
 * Entry: 0x001ceea0, Ghidra index: 6082, label: FUN_001ceea0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d67a0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001ceea0(std::uint32_t guest_esi, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original passes ESI in EAX and reloads EAX from ESI after the call.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d67a0(guest_esi, first, last, destination_end);
    return guest_esi;
}
