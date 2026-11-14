/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 43C8076D1C73521C86A057679FE99C2B96701FE8CA3EFEE30F213DEF7CEF0B6B
 * Entry: 0x00237520, Ghidra index: 7850, label: FUN_00237520
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_division_leaves.h"

bf_guest32_division_result FUN_00237520(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    using namespace bf_guest32_division;

    guest.edx = read32(guest, 0x00237520u, guest.esi);
    guest.eax = read32(guest, 0x00237522u, guest.esi + 8u);
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    guest.eax -= guest.edx;
    push(guest, 0x00237527u, guest.edi);
    guest.edi = read_signed_word(guest, 0x00237528u, guest.esi + 0x12u);
    cdq(guest);
    if (!idiv_after_cdq(guest, 0x0023752du))
        return bf_guest32_division_result::divide_error;

    write32(guest, 0x0023752fu, guest.ecx + 8u, 0u);
    guest.edx = read32(guest, 0x00237536u, guest.esi + 4u);
    for (;;) {
        // The link chain uses unsigned bounds, reloaded after each store.
        const std::uint32_t lower = read32(guest, 0x00237540u, guest.esi);
        bf_guest32_leaf_sub(guest, guest.edx, lower);
        if (guest.edx < lower)
            break;
        const std::uint32_t upper = read32(guest, 0x00237544u, guest.esi + 8u);
        bf_guest32_leaf_sub(guest, guest.edx, upper);
        if (guest.edx >= upper)
            break;
        increment_dword(guest, 0x00237549u, guest.ecx + 8u);
        guest.edx = read32(guest, 0x0023754cu, guest.edx);
    }

    guest.edi = read_signed_word(guest, 0x00237550u, guest.esi + 0x12u);
    guest.edx = read32(guest, 0x00237554u, guest.ecx + 8u);
    guest.edi = imul(guest, guest.edi, guest.edx);
    write32(guest, 0x0023755au, guest.ecx, guest.edi);
    guest.edi = read_signed_word(guest, 0x0023755cu, guest.esi + 0x12u);
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    guest.eax -= guest.edx;
    write32(guest, 0x00237562u, guest.ecx + 0xcu, guest.edi);
    write32(guest, 0x00237565u, guest.ecx + 0x10u, guest.eax);
    guest.edx = read_signed_word(guest, 0x00237568u, guest.esi + 0x12u);
    guest.edx = imul(guest, guest.edx, guest.eax);
    write32(guest, 0x0023756fu, guest.ecx + 4u, guest.edx);
    guest.eax = read32(guest, 0x00237572u, guest.esi + 0x18u);
    write32(guest, 0x00237575u, guest.ecx + 0x14u, guest.eax);
    guest.eax = 0xffffffffu; // OR EAX,-1.
    logic_flags(guest, guest.eax);
    write32(guest, 0x0023757bu, guest.ecx + 0x18u, guest.eax);
    write32(guest, 0x0023757eu, guest.ecx + 0x1cu, guest.eax);
    guest.edi = pop(guest, 0x00237581u);
    ret(guest, 0x00237582u);
    return bf_guest32_division_result::returned;
}
