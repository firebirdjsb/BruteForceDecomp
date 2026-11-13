/* Brute Force original Xbox - bounded guest32 memory model.
 * Input x86 body SHA-256: 6F784386D5CD73546AE3E47A32F520807A751D36C3B6F84F38F49BFD421E121F
 * Entry: 0x00353125, Ghidra index: 13078, label: FUN_00353125
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs are captured ECX and [ESP+4]/[ESP+8]; original return is EAX=[ESP+8] or ECX+0x24.
 */
#include "bf_xbe_guest32_audio_xnet_leaves.h"

uint32_t FUN_00353125(uint32_t guest_ecx, uint32_t stack_arg_0,
                      uint32_t stack_arg_1)
{
    uint32_t insertion_link = stack_arg_1;
    if (insertion_link == 0u)
        insertion_link = guest_ecx + 0x24u;

    // Both paths read *insertion_link before loading the node argument.
    uint32_t next = bf_guest_read_u32(insertion_link);
    const uint32_t node = stack_arg_0;
    bf_guest_write_u32(node, next);
    bf_guest_write_u32(node + 4u, insertion_link);

    // The retail body reloads *insertion_link after those stores; preserve aliases.
    next = bf_guest_read_u32(insertion_link);
    bf_guest_write_u32(next + 4u, node);
    bf_guest_write_u32(insertion_link, node);
    return insertion_link;  // Original RET 8.
}
