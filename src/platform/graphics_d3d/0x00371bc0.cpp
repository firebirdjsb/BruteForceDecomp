/* Brute Force original Xbox - guest32 device record search.
 * Input x86 body SHA-256: E945A86206E9B4901F3631DED512414FF06A5B87AAA2E84BFB3AF558E749BB89
 * Entry: 0x00371bc0, Ghidra index: 13385, label: FUN_00371bc0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_kick.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00371bc0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    auto read = [&](std::uint32_t site, std::uint32_t address) {
        return read32(guest, site, address);
    };
    auto write = [&](std::uint32_t site, std::uint32_t address, std::uint32_t value) {
        write32(guest, site, address, value);
    };
    auto subtract = [&](std::uint32_t& value, std::uint32_t operand) {
        bf_guest32_leaf_sub(guest, value, operand);
        value -= operand;
    };
    auto mask = [&](std::uint32_t& value, std::uint32_t bits) {
        value &= bits;
        logic_flags(guest, value);
    };
    auto finish = [&](std::uint32_t site) {
        guest.edi = pop(guest, site);
        guest.esi = pop(guest, site + 1u);
        guest.ebp = pop(guest, site + 2u);
        guest.ebx = pop(guest, site + 3u);
        guest.esp = bf_guest32_leaf_add(guest, guest.esp, 8u);
        ret(guest, site + 7u);
    };
    auto fail = [&] {
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
        finish(0x00371cc9u);
    };

    guest.edx = read(0x00371bc0u, 0x0037dd88u);
    subtract(guest.esp, 8u); // Two guest DWORD locals.
    push(guest, 0x00371bc9u, guest.ebx);
    push(guest, 0x00371bcau, guest.ebp);
    push(guest, 0x00371bcbu, guest.esi);
    guest.esi = read(0x00371bccu, guest.edx + 0x2cu);
    push(guest, 0x00371bcfu, guest.edi);
    guest.edi = guest.eax;
    guest.eax = guest.esi;
    subtract(guest.eax, guest.edi);
    bf_guest32_leaf_sub(guest, guest.eax, 0x80u);

    bool external = false;
    if (guest.eax <= 0x80u) {
        // The original reads the stack local before the inline path overwrites ECX.
        guest.ecx = read(0x00371bddu, guest.esp + 0x14u);
    } else {
        guest.ecx = read(0x00371c38u, guest.edx + 0x34u);
        guest.edi = read(0x00371c3bu, guest.edx + 0x48u);
        guest.ebx = guest.ecx * 3u;
        guest.ebp = guest.esi;
        subtract(guest.ebp, read(0x00371c43u, guest.edi + guest.ebx * 4u));
        bf_guest32_leaf_sub(guest, guest.ebp, guest.eax);
        external = guest.ebp <= guest.eax;
        if (external) {
            do {
                guest.ebp = read(0x00371c53u, guest.edx + 0x38u);
                increment(guest, guest.ecx);
                mask(guest.ecx, guest.ebp);
                guest.ebx = guest.ecx * 3u;
                guest.ebp = guest.esi;
                subtract(guest.ebp, read(0x00371c5eu, guest.edi + guest.ebx * 4u));
                bf_guest32_leaf_sub(guest, guest.ebp, guest.eax);
            } while (guest.ebp > guest.eax);
        } else {
            guest.edi = guest.esi;
        }
    }

    if (!external) {
        // SHR is immediately followed by AND, then CMP. Their combined state
        // overwrites every defined arithmetic flag before any memory access.
        guest.edi = (guest.edi >> 1u) & 0x3fu;
        bf_guest32_leaf_sub(guest, guest.edi, 0xffffffffu);
        // The preceding mask makes the original JE to the external path impossible.
        guest.ebx = read(0x00371bebu, guest.edx);
        guest.eax = guest.edi * 3u;
        guest.ebp = read(0x00371bf0u, guest.edx + guest.eax * 4u + 0x50u);
        bf_guest32_leaf_sub(guest, guest.ebp, guest.ebx);
        guest.eax = guest.edx + guest.eax * 4u + 0x4cu;
        if (guest.ebp <= guest.ebx)
            guest.ebp = bf_guest32_leaf_add(guest, guest.ebp, read(0x00371bfcu, guest.edx + 0x40u));

        guest.ecx = (guest.edi + 1u) & 0x3fu;
        guest.esi = (guest.esi >> 1u) & 0x3fu;
        bf_guest32_leaf_sub(guest, guest.ecx, guest.esi);
        if (guest.ecx == guest.esi) {
            finish(0x00371cc9u);
            return;
        }
        do {
            guest.edi = guest.ecx * 3u;
            guest.edi = read(0x00371c15u, guest.edx + guest.edi * 4u + 0x50u);
            bf_guest32_leaf_sub(guest, guest.edi, guest.ebx);
            if (guest.edi <= guest.ebx)
                guest.edi = bf_guest32_leaf_add(guest, guest.edi, read(0x00371c1du, guest.edx + 0x40u));
            bf_guest32_leaf_sub(guest, guest.edi, guest.ebp);
            if (guest.edi < guest.ebp) {
                fail();
                return;
            }
            guest.ecx = (guest.ecx + 1u) & 0x3fu;
            bf_guest32_leaf_sub(guest, guest.ecx, guest.esi);
        } while (guest.ecx != guest.esi);
        finish(0x00371c30u);
        return;
    }

    guest.ebp = read(0x00371c65u, guest.edx + 0x48u);
    guest.edi = read(0x00371c68u, guest.edx);
    guest.eax = guest.ecx * 3u;
    guest.esi = read(0x00371c6du, guest.ebp + guest.eax * 4u + 4u);
    bf_guest32_leaf_sub(guest, guest.esi, guest.edi);
    guest.eax = guest.ebp + guest.eax * 4u;
    write(0x00371c77u, guest.esp + 0x14u, guest.eax);
    write(0x00371c7bu, guest.esp + 0x10u, guest.esi);
    if (guest.esi <= guest.edi) {
        guest.esi = bf_guest32_leaf_add(guest, guest.esi, read(0x00371c81u, guest.edx + 0x40u));
        write(0x00371c84u, guest.esp + 0x10u, guest.esi);
    }
    guest.edi = read(0x00371c88u, guest.edx + 0x34u);
    guest.ebx = read(0x00371c8bu, guest.edx + 0x38u);
    guest.edi = (guest.edi + 1u) & guest.ebx;
    guest.ecx = (guest.ecx + 1u) & guest.ebx;
    bf_guest32_leaf_sub(guest, guest.ecx, guest.edi);
    if (guest.ecx == guest.edi) {
        finish(0x00371cc9u);
        return;
    }
    do {
        guest.eax = guest.ecx * 3u;
        guest.esi = read(0x00371ca3u, guest.ebp + guest.eax * 4u + 4u);
        const auto base = read(0x00371ca7u, guest.edx);
        bf_guest32_leaf_sub(guest, guest.esi, base);
        if (guest.esi <= base)
            guest.esi = bf_guest32_leaf_add(guest, guest.esi, read(0x00371cabu, guest.edx + 0x40u));
        const auto threshold = read(0x00371caeu, guest.esp + 0x10u);
        bf_guest32_leaf_sub(guest, guest.esi, threshold);
        if (guest.esi < threshold) {
            fail();
            return;
        }
        guest.ecx = (guest.ecx + 1u) & guest.ebx;
        bf_guest32_leaf_sub(guest, guest.ecx, guest.edi);
    } while (guest.ecx != guest.edi);
    guest.eax = read(0x00371cbbu, guest.esp + 0x14u);
    finish(0x00371cbfu);
}
