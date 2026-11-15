/* Brute Force original Xbox - guest32 backward record caller.
 * Input x86 body SHA-256: 17DE0E74456EE622C4EAF7C4119ED29E0C482B7C8D4EAEFAC23EF0E1093CF5F9
 * Entry: 0x001cefe0, Ghidra index: 6087, label: FUN_001cefe0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * The guest backend owns dispatch and memory fault delivery.
 */
#include "bf_xbe_guest32_backward_record.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_001cefe0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    // Three incoming stack DWORDs at +4/+8/+12. The original first
    // pushes scratch values into three slots, then overwrites each slot.
    guest.eax = read32(guest, 0x001cefe0u, guest.esp + 12u);
    guest.edx = read32(guest, 0x001cefe4u, guest.esp + 8u);
    push(guest, 0x001cefe8u, guest.eax);
    push(guest, 0x001cefe9u, guest.ecx);
    guest.ecx = read32(guest, 0x001cefeau, guest.esp + 20u);
    guest.eax = guest.esp;
    write32(guest, 0x001ceff0u, guest.eax, guest.ecx);
    push(guest, 0x001ceff2u, guest.ecx);
    guest.eax = guest.esp;
    write32(guest, 0x001ceff5u, guest.eax, guest.edx);
    push(guest, 0x001ceff7u, guest.ecx);
    guest.ecx = read32(guest, 0x001ceff8u, guest.esp + 20u);
    guest.eax = guest.esp;
    write32(guest, 0x001ceffeu, guest.eax, guest.ecx);

    guest.eax = guest.esi;
    constexpr std::uint32_t continuation = 0x001cf007u;
    push(guest, 0x001cf002u, continuation);
    FUN_001d6920(guest);
    if (guest.eip != continuation)
        return; // An aliasing callee store may redirect RET.

    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 16u);
    guest.eax = guest.esi;
    ret(guest, 0x001cf00cu);
}
