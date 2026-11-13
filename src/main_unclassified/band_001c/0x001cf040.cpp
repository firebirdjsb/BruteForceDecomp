/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 68B1A6C3C73F19988A50ECECF1976C61101497FE2FB83610D76BD8E26ECC0A8F
 * Entry: 0x001cf040, Ghidra index: 6089, label: FUN_001cf040
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d6640(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cf040(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d6640(guest_eax, first, last, destination_end);
    return guest_eax;
}
