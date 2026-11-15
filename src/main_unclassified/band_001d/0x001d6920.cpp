/* Brute Force original Xbox - guest32 44-byte backward record copy.
 * Input x86 body SHA-256: 8239D2AB2E4D619C3866E6C4434A1A1B67F32B7FEA46BB3358704C56AAD6ADE9
 * Entry: 0x001d6920, Ghidra index: 6368, label: FUN_001d6920
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * The guest backend owns dispatch and memory fault delivery.
 */
#include "bf_xbe_guest32_backward_record.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_001d6920(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t stride = 44u;

    push(guest, 0x001d6920u, guest.ecx);
    push(guest, 0x001d6921u, guest.ebx);
    guest.ebx = read32(guest, 0x001d6922u, guest.esp + 12u); // Entry ESP+4, first.
    push(guest, 0x001d6926u, guest.esi);
    guest.esi = read32(guest, 0x001d6927u, guest.esp + 20u); // Entry ESP+8, last.
    bf_guest32_leaf_sub(guest, guest.ebx, guest.esi); // CMP before the empty branch.
    if (guest.ebx == guest.esi) {
        guest.ecx = read32(guest, 0x001d69b8u, guest.esp + 24u); // Entry ESP+12, destination end.
        guest.esi = pop(guest, 0x001d69bcu);
        write32(guest, 0x001d69bdu, guest.eax, guest.ecx);
        guest.ebx = pop(guest, 0x001d69bfu);
        guest.ecx = pop(guest, 0x001d69c0u);
        ret(guest, 0x001d69c1u);
        return;
    }

    push(guest, 0x001d6933u, guest.ebp);
    push(guest, 0x001d6934u, guest.edi);
    guest.edi = read32(guest, 0x001d6935u, guest.esp + 32u); // Entry ESP+12.
    // The rolling ECX/EDX bases address +24/+28 of each current record.
    guest.edx = guest.edi + 28u;
    guest.ecx = guest.esi + 24u;
    do {
        guest.ebp = read32(guest, 0x001d6940u, guest.esi - stride);
        write32(guest, 0x001d6943u, guest.edi - stride, guest.ebp);
        guest.ebp = read32(guest, 0x001d6946u, guest.ecx - 64u);
        write32(guest, 0x001d6949u, guest.edx - 68u, guest.ebp);
        guest.ebp = read32(guest, 0x001d694cu, guest.ecx - 60u);
        bf_guest32_leaf_sub(guest, guest.ecx, stride);
        guest.ecx -= stride;
        write32(guest, 0x001d6952u, guest.edx - 64u, guest.ebp);
        guest.ebp = read32(guest, 0x001d6955u, guest.ecx - 12u);
        bf_guest32_leaf_sub(guest, guest.edx, stride);
        guest.edx -= stride;
        write32(guest, 0x001d695bu, guest.edx - 16u, guest.ebp);
        guest.ebp = read32(guest, 0x001d695eu, guest.ecx - 8u);
        guest.esi -= stride;
        guest.edi -= stride;
        bf_guest32_leaf_sub(guest, guest.esi, guest.ebx); // CMP overwrites the preceding two SUB flags.
        write32(guest, 0x001d6969u, guest.edx - 12u, guest.ebp);

        // Spill record DWORDs +28/+24 into entry ESP+4/+12 and
        // reload after the intervening store through the destination.
        guest.ebp = read32(guest, 0x001d696cu, guest.ecx + 4u);
        write32(guest, 0x001d696fu, guest.esp + 24u, guest.ebp);
        guest.ebp = read32(guest, 0x001d6973u, guest.ecx);
        write32(guest, 0x001d6975u, guest.esp + 32u, guest.ebp);
        guest.ebp = read32(guest, 0x001d6979u, guest.ecx - 4u);
        write32(guest, 0x001d697cu, guest.edx - 8u, guest.ebp);
        guest.ebp = read32(guest, 0x001d697fu, guest.esp + 32u);
        write32(guest, 0x001d6983u, guest.edx - 4u, guest.ebp);
        guest.ebp = read32(guest, 0x001d6986u, guest.esp + 24u);
        write32(guest, 0x001d698au, guest.edx, guest.ebp);

        // Spill +40 into the saved ECX slot at entry ESP-4 and +36 into
        // entry ESP+8. The eventual POP ECX sees the overwritten slot.
        guest.ebp = read32(guest, 0x001d698cu, guest.ecx + 16u);
        write32(guest, 0x001d698fu, guest.esp + 16u, guest.ebp);
        guest.ebp = read32(guest, 0x001d6993u, guest.ecx + 12u);
        write32(guest, 0x001d6996u, guest.esp + 28u, guest.ebp);
        guest.ebp = read32(guest, 0x001d699au, guest.ecx + 8u);
        write32(guest, 0x001d699du, guest.edx + 4u, guest.ebp);
        guest.ebp = read32(guest, 0x001d69a0u, guest.esp + 28u);
        write32(guest, 0x001d69a4u, guest.edx + 8u, guest.ebp);
        guest.ebp = read32(guest, 0x001d69a7u, guest.esp + 16u);
        write32(guest, 0x001d69abu, guest.edx + 12u, guest.ebp);
    } while (guest.esi != guest.ebx);

    write32(guest, 0x001d69b0u, guest.eax, guest.edi);
    guest.edi = pop(guest, 0x001d69b2u);
    guest.ebp = pop(guest, 0x001d69b3u);
    guest.esi = pop(guest, 0x001d69b4u);
    guest.ebx = pop(guest, 0x001d69b5u);
    guest.ecx = pop(guest, 0x001d69b6u);
    ret(guest, 0x001d69b7u);
}
