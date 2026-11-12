/* Brute Force original Xbox 0x00012320, FUN_00012320.
 * Input x86 body SHA-256: 09DF5F57AB66CA1D79AC7A0FB48234BFAD09EDAA4737F016616473C9F3143917
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * This host adapter explicitly models incoming Xbox EDI, ECX, and the one
 * entry-stack DWORD. These are NOT a reconstructed original C++ signature.
 * Guest virtual addresses are uint32_t and are never host pointers.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00012320(std::uint32_t guest_edi,
                           std::uint32_t guest_ecx,
                           std::uint32_t guest_stack_word)
{
    // Original x86 0x12320..0x12341: fixed Xbox pointer words, not host
    // addresses of symbols or inferred C++ object/vtable fields.
    bf_guest_write_u32(guest_edi, UINT32_C(0x003a479c));
    bf_guest_write_u32(guest_edi + UINT32_C(0x10), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x24), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x04), UINT32_C(0x003a4f64));
    bf_guest_write_u32(guest_edi + UINT32_C(0x08), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x1c), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x18), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x14), 0);

    // 0x12342..0x12349 reads/writes a *byte*, not a DWORD. Preserve all
    // surrounding bytes and every bit except bit 0 at +0x38.
    const std::uint8_t flags38 = bf_guest_read_u8(guest_edi + UINT32_C(0x38));
    bf_guest_write_u8(guest_edi + UINT32_C(0x38),
                      static_cast<std::uint8_t>(flags38 & UINT8_C(0xfe)));
    bf_guest_write_u32(guest_edi + UINT32_C(0x2c), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x30), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x34), 0);
    bf_guest_write_u32(guest_edi + UINT32_C(0x28), 0);

    // 0x12358..0x12366: one-byte AND preserving other flag bits. Original
    // 0x1235F loads the entry stack DWORD into EDX before storing +0x08.
    const std::uint8_t flags3c = bf_guest_read_u8(guest_edi + UINT32_C(0x3c));
    bf_guest_write_u8(guest_edi + UINT32_C(0x3c),
                      static_cast<std::uint8_t>(flags3c & UINT8_C(0xfe)));
    bf_guest_write_u32(guest_edi + UINT32_C(0x08), guest_stack_word);

    // Preserve the conditional reads, even when initial writes make a
    // branch appear redundant under ordinary non-aliasing memory.
    if (guest_ecx == 0) {
        if (bf_guest_read_u32(guest_edi + UINT32_C(0x10)) != 0 &&
            bf_guest_read_u32(guest_edi + UINT32_C(0x28)) == 2) {
            bf_guest_write_u32(guest_edi + UINT32_C(0x28), 0);
        }
    } else {
        bf_guest_write_u32(guest_edi + UINT32_C(0x28), 2);
    }

    // 0x12383..0x12397: MOV EAX,[EDI+0x10]; compare ECX; PUSH ESI;
    // LEA ESI,[EDI+0x0C]; PUSH ECX; CALL 0x0008F6A0; ADD ESP,4.
    // The callee's host interface already models its incoming ESI and
    // entry-stack DWORD. Its actual Xbox ABI remains ABI_UNVERIFIED.
    if (bf_guest_read_u32(guest_edi + UINT32_C(0x10)) != guest_ecx) {
        FUN_0008f6a0(guest_edi + UINT32_C(0x0c), guest_ecx);
    }

    // 0x12397..0x1239C: MOV EAX,EDI; POP ESI; RET 4. The original RET 4
    // is a guest-stack contract, not the host function's calling convention.
    return guest_edi;
}
