/* Brute Force original Xbox - bounded guest32 memory model.
 * Input x86 body SHA-256: 8D158D0CCD65EF260CAF2DE3C9B121BD3FB57E78D1130CAD0FCD7B15BC7AF0A1
 * Entry: 0x00315838, Ghidra index: 12105, label: FUN_00315838
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs are captured ECX, [ESP+4], and [ESP+8]; no caller-side meanings inferred.
 */
#include "bf_xbe_guest32_audio_xnet_leaves.h"

uint32_t FUN_00315838(uint32_t guest_ecx, uint32_t stack_arg_0,
                      uint32_t stack_arg_1)
{
    const uint32_t table = bf_guest_read_u32(guest_ecx + 0x20u);
    uint32_t count_minus_one = bf_guest_read_u32(table);
    const uint32_t index = stack_arg_0;
    count_minus_one -= 1u;  // DEC EDX wraps when the stored count is zero.
    if (index > count_minus_one)
        return 0x88780032u;

    const uint32_t output_address = (index << 5) + table + 8u;
    bf_guest_write_u32(stack_arg_1, output_address);
    return 0u;  // XOR EAX,EAX; original RET 8.
}
