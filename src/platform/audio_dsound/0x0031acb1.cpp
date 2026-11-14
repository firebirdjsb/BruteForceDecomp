/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: AA8482391521EB9D331F447F461828B9D1A1CCF340AFAB49B3DD1EAC2B72B996
 * Entry: 0x0031acb1, Ghidra index: 12277, label: FUN_0031acb1
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0031acb1(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = guest.ecx;
    guest.ecx = guest.eax + 8u;
    write32(guest, 0x0031acb6u, guest.eax + 4u, 1u);
    write32(guest, 0x0031acbdu, guest.eax, 0x00386ad8u);
    write32(guest, 0x0031acc3u, 0x0032fdecu, guest.eax);
    write32(guest, 0x0031acc8u, guest.eax + 0xcu, guest.ecx);
    write32(guest, 0x0031accbu, guest.ecx, guest.ecx);
    guest.ecx = guest.eax + 0x10u;
    write32(guest, 0x0031acd0u, guest.eax + 0x14u, guest.ecx);
    write32(guest, 0x0031acd3u, guest.ecx, guest.ecx);
    ret(guest, 0x0031acd5u);
}
