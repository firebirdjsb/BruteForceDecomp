/* Brute Force original Xbox - ordered guest32 gameplay record model.
 * Input x86 body SHA-256: 9CE7FD9D9BC4D6F77E95EBDFFD8D7F549F0100D0380FB6FC4B80B70894B869A8
 * Entry: 0x00023b20, Ghidra index: 240, label: FUN_00023b20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_linked_records.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00023b20(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    const auto mask_dl = [&](std::uint32_t site, std::uint32_t offset) {
        guest.eip = site;
        const auto byte = bf_guest_read_u8(guest.edi + offset);
        guest.edx = (guest.edx & 0xffffff00u) | (byte & 0xfeu);
        logic_flags(guest, guest.edx & 0xffu, 0x80u);
    };
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    write32(guest, 0x00023b22u, guest.edi, 0x003a479cu);
    write32(guest, 0x00023b28u, guest.edi + 0x10u, guest.eax);
    write32(guest, 0x00023b2bu, guest.edi + 0x24u, guest.eax);
    write32(guest, 0x00023b2eu, guest.edi + 8u, guest.eax);
    write32(guest, 0x00023b31u, guest.edi + 4u, 0x003a4f64u);
    write32(guest, 0x00023b38u, guest.edi + 0x1cu, guest.eax);
    write32(guest, 0x00023b3bu, guest.edi + 0x18u, guest.eax);
    write32(guest, 0x00023b3eu, guest.edi + 0x14u, guest.eax);

    guest.eip = 0x00023b41u;
    guest.edx = (guest.edx & 0xffffff00u) | bf_guest_read_u8(guest.edi + 0x38u);
    write32(guest, 0x00023b44u, guest.edi + 0x2cu, guest.eax);
    write32(guest, 0x00023b47u, guest.edi + 0x30u, guest.eax);
    write32(guest, 0x00023b4au, guest.edi + 0x34u, guest.eax);
    write32(guest, 0x00023b4du, guest.edi + 0x28u, guest.eax);
    guest.eax = 0xfeu;
    guest.edx &= 0xfffffffeu;
    logic_flags(guest, guest.edx & 0xffu, 0x80u);
    write8(guest, 0x00023b54u, guest.edi + 0x38u, static_cast<std::uint8_t>(guest.edx));
    mask_dl(0x00023b57u, 0x3cu);
    guest.eax = read32(guest, 0x00023b5cu, guest.esp + 4u);
    push(guest, 0x00023b60u, guest.esi);
    guest.esi = guest.edi + 0x20u;
    write8(guest, 0x00023b64u, guest.edi + 0x3cu, static_cast<std::uint8_t>(guest.edx));
    write32(guest, 0x00023b67u, guest.edi + 8u, guest.eax);
    const auto key = read32(guest, 0x00023b6au, guest.esi + 4u);
    bf_guest32_leaf_sub(guest, key, guest.ecx);
    if (key != guest.ecx) {
        push(guest, 0x00023b6fu, guest.ecx);
        push(guest, 0x00023b70u, 0x00023b75u);
        FUN_0008f6a0(guest);
        if (guest.eip != 0x00023b75u)
            return;
        guest.esp = bf_guest32_leaf_add(guest, guest.esp, 4u);
    }
    guest.eax = guest.edi;
    guest.esi = pop(guest, 0x00023b7au);
    bf_guest32_leaf_ret(guest, 0x00023b7bu, 4u);
}
