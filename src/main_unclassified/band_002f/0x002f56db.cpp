/* Brute Force original Xbox - guest byte-string and stack effects.
 * Input x86 body SHA-256: 142180E6CA59889EB454AD465D4EC9ACCF9AA0A0DC33985FB0BF58CD719E7E6D
 * Entry: 0x002f56db, Ghidra index: 10894, label: FUN_002f56db
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_string_leaves.h"

void FUN_002f56db(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x002f56dbu;
    guest.ecx = read32(guest, entry, guest.esp + 4u);
    push(guest, entry + 4u, guest.esi);
    guest.eax = guest.ecx;
    push(guest, entry + 7u, guest.edi);
    guest.esi = guest.eax + 1u;
    bf_guest32_scan_nul(guest, entry + 0xbu);
    guest.edi = read32(guest, entry + 0x12u, guest.esp + 16u);
    bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
    guest.eax -= guest.esi;
    guest.esi = guest.edi;
    bf_guest32_leaf_sub(guest, guest.esi, guest.ecx);
    guest.esi -= guest.ecx;
    bf_guest32_copy_nul(guest, entry + 0x1cu, guest.esi);

    guest.eax = bf_guest32_leaf_add(guest, guest.eax, guest.edi);
    guest.ecx = 0x00387860u; // XBE-backed NUL-terminated data, read through guest memory.
    guest.edi = pop(guest, entry + 0x2du);
    bf_guest32_leaf_sub(guest, guest.eax, guest.ecx);
    guest.eax -= guest.ecx;
    guest.esi = pop(guest, entry + 0x30u);
    bf_guest32_copy_nul(guest, entry + 0x31u, guest.eax);
    bf_guest32_leaf_ret(guest, entry + 0x3bu, 8u);
}
