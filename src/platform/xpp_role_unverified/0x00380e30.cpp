/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 8B566564561C29B4AA98BCA7F59410558E878B97D2ED2BF41444CA5475E03B0E
 * Entry: 0x00380e30, Ghidra index: 13538, label: FUN_00380e30
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00380e30(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x00380e30u;
    guest.eax = read32(guest, entry, guest.esp + 4u);
    push(guest, entry + 4u, guest.edi);
    guest.edx = guest.ecx;

    // Both AND instructions perform a byte read before the byte write.
    for (std::uint32_t i = 0; i < 2u; ++i) {
        const auto pc = entry + 7u + 7u * i;
        const auto address = guest.edx + 0xa0u + i;
        guest.eip = pc;
        (void)bf_guest_read_u8(address);
        write8(guest, pc, address, 0u);
        logic_flags(guest, 0u, 0x80u);
    }
    write32(guest, entry + 0x15u, guest.edx + 0x98u, guest.eax);
    guest.eax = read32(guest, entry + 0x1bu, guest.esp + 0xcu);
    write32(guest, entry + 0x1fu, guest.edx + 0x9cu, guest.eax);

    constexpr std::uint32_t block_pc[] = {0x27u, 0x32u, 0x3eu};
    constexpr std::uint32_t repeat_pc[] = {0x2cu, 0x38u, 0x44u};
    const bool backward = (guest.eflags & direction) != 0u;
    for (std::uint32_t i = 0; i < 3u; ++i) {
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
        // Each immediate is pushed and reloaded even when the frame overlaps a block.
        push(guest, entry + block_pc[i], 12u);
        guest.ecx = pop(guest, entry + block_pc[i] + 2u);
        guest.edi = guest.edx + 0x32u * i;
        rep_stosd(guest, entry + repeat_pc[i]);
        guest.eip = entry + repeat_pc[i] + 2u;
        bf_guest_write_u16(guest.edi, static_cast<std::uint16_t>(guest.eax));
        guest.edi += backward ? 0xfffffffeu : 2u;
    }
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    guest.edi = guest.edx + 0xa4u;
    for (std::uint32_t i = 0; i < 4u; ++i) {
        write32(guest, entry + 0x50u + i, guest.edi, guest.eax);
        guest.edi += backward ? 0xfffffffcu : 4u;
    }
    guest.eax = guest.edx;
    guest.edi = pop(guest, entry + 0x56u);
    bf_guest32_leaf_ret(guest, entry + 0x57u, 8u);
}
