/* Brute Force original Xbox - guest data and EAX projection.
 * Input x86 body SHA-256: A5397B934BDB15E6879399A830E6C37219D3E1B235EF8ADD539C2EA89BDF25B1
 * Entry: 0x00132790, Ghidra index: 3851, label: FUN_00132790
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private caller/callee stack frames.
 * Scratch stack, other registers, EFLAGS and fault state are outside this model.
 */
#include <cstdint>

std::uint32_t FUN_001328e0(std::uint32_t output_slot, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end);

std::uint32_t FUN_00132790(std::uint32_t guest_eax, std::uint32_t first,
                           std::uint32_t last, std::uint32_t destination_end)
{
    // The original saves EDI, uses incoming EAX as EDI, and returns that value.
    // Three consumed DWORDs follow the return address. The target never reads the fourth.
    FUN_001328e0(guest_eax, first, last, destination_end);
    return guest_eax;
}
