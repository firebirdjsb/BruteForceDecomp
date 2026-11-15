/* Brute Force original Xbox function: FUN_000120f0, entry 0x000120f0.
 * Input x86 body SHA-256: 9FEFE68C61CEC0943A913B1988495825BFD1E3F128E1F92DB0A3DA5D8376BB9C
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * The host parameter is the *original incoming EAX register value* in guest
 * 32-bit address space, not a recovered C++ method or x86 stack parameter.
 * This is a bounded, non-aliasing guest-memory model; the original machine's
 * ESP-local storage, fault timing, calling convention and guest-stack aliasing
 * still require independent verification before native linkage.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_000120f0(std::uint32_t guest_eax)
{
    // XBE 0x120F9: MOV EDX,[EAX+8]. The guest read precedes both branches.
    const std::uint32_t guest_edx = bf_guest_read_u32(guest_eax + UINT32_C(8));
    if (guest_edx == 0) {
        // 0x12100: ADD EAX,0x0C; 0x1211A: MOV ESI,[EAX+4].
        // Addition wraps in 32-bit guest address space, never host pointers.
        return bf_guest_read_u32(guest_eax + UINT32_C(0x10));
    }

    // Original 0x12105..0x12116 initializes both ESP scratch DWORDs to 0.
    // 0x1211A reads the second scratch DWORD (0); 0x1211F reloads the
    // same 0, so the conditional CALL at 0x1212B is not reached in the
    // ordinary non-aliased path. Do not invent an EDX guest-stack address
    // merely to issue the otherwise-unreachable host helper call.
    // Stack aliasing, asynchronous stack mutation and fault behavior are
    // specifically ABI_UNVERIFIED, not claimed to be simulated here.
    return UINT32_C(0);
}

#include "bf_guest32_linked_records.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_000120f0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    bf_guest32_leaf_sub(guest, guest.esp, 8u);
    guest.esp -= 8u;
    guest.ecx = 0u;
    logic_flags(guest, guest.ecx);
    write32(guest, 0x000120f5u, guest.esp, guest.ecx);
    guest.edx = read32(guest, 0x000120f9u, guest.eax + 8u);
    logic_flags(guest, guest.edx);
    if (guest.edx == 0u) {
        guest.eax += 12u;
    } else {
        guest.ecx = 1u;
        write32(guest, 0x0001210au, guest.esp + 4u, 0u);
        guest.eax = guest.esp;
    }
    logic_flags(guest, guest.ecx & 1u, 0x80u);
    push(guest, 0x00012119u, guest.esi);
    guest.esi = read32(guest, 0x0001211au, guest.eax + 4u);
    if ((guest.ecx & 1u) != 0u) {
        guest.eax = read32(guest, 0x0001211fu, guest.esp + 8u);
        logic_flags(guest, guest.eax);
        if (guest.eax != 0u) {
            guest.edx = guest.esp + 4u;
            push(guest, 0x0001212bu, 0x00012130u);
            FUN_0008f6e0(guest);
            if (guest.eip != 0x00012130u)
                return;
        }
    }
    guest.eax = guest.esi;
    guest.esi = pop(guest, 0x00012132u);
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 8u);
    ret(guest, 0x00012136u);
}
