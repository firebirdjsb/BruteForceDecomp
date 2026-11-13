/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 69543FA8D83C952FC0E6108C06433F5DA2C5B831DD9B225CC807FB715531C3AF
 * Entry: 0x001cf200, Ghidra index: 6097, label: FUN_001cf200
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d6bf0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001cf200(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d6bf0(guest_eax, first, last, destination_end);
    return guest_eax;
}
