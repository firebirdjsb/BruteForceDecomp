/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 723B012E6F127378C9D8AB2EC462C347F0A6025CB1E12AF0388CC929CF1D3DCA
 * Entry: 0x000720d0, Ghidra index: 1274, label: FUN_000720d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_000720d0(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using bf_x87_rotation::pair_schedule;
    constexpr std::array<bf_x87_rotation::component_pair, 3> components{{
        {0x0u, 0x8u, pair_schedule::subtract_then_add},
        {0xcu, 0x14u, pair_schedule::subtract_then_add_sine_first},
        {0x18u, 0x20u, pair_schedule::subtract_then_add}
    }};
    return bf_x87_rotation::run(guest, x87, 0x000720d0u, components);
}
