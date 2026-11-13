/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: 3887BC031B836BD26AFE01038B0012DDA27B4210136357E836E3B7901E0A6F75
 * Entry: 0x001d1450, Ghidra index: 6244, label: FUN_001d1450
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001d9380(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_001d1450(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001d9380(guest_eax, first, last, destination_end);
    return guest_eax;
}
