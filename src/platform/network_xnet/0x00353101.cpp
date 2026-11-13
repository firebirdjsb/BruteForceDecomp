/* Brute Force original Xbox - bounded guest32 memory model.
 * Input x86 body SHA-256: 8AC7EEF6FD7151AA8AB1EF7ECF11B0455DBAD5E1A9EEE96A27460D843BD56479
 * Entry: 0x00353101, Ghidra index: 13077, label: FUN_00353101
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs are captured ECX and [ESP+4]; no caller-side register meaning inferred.
 */
#include "bf_xbe_guest32_xnet_record_models.h"

uint32_t FUN_00353101(uint32_t guest_ecx, uint32_t stack_arg_0)
{
    // 0x00353106-0x0035310c: capture both link values before the first store.
    const uint32_t head = stack_arg_0 + 0x64u;
    const uint32_t first = bf_guest_read_u32(head);
    const uint32_t tail = bf_guest_read_u32(stack_arg_0 + 0x68u);

    // Preserve the exact observed DWORD write order, including alias cases.
    bf_guest_write_u32(tail, first);
    bf_guest_write_u32(first + 4u, tail);

    // AND [stack_arg_0+0x60],0 is a DWORD read-modify-write access.
    (void)bf_guest_read_u32(stack_arg_0 + 0x60u);
    bf_guest_write_u32(stack_arg_0 + 0x60u, 0u);
    bf_guest_write_u32(stack_arg_0 + 0x68u, head);
    bf_guest_write_u32(head, head);

    // DEC byte [ECX+0x7d] wraps as an 8-bit guest write.
    const uint32_t counter = guest_ecx + 0x7du;
    const uint8_t old_value = bf_guest_read_u8(counter);
    bf_guest_write_u8(counter, static_cast<uint8_t>(old_value - 1u));

    return head;  // EAX retains the LEA result; original RET pops four bytes.
}
