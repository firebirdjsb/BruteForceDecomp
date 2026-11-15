/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 04E4CC89AE8134BECAEFD9AF755FFDC2966459C8015922640EC79CFC63F69301
 * Entry: 0x0016b210, Ghidra index: 4772, label: FUN_0016b210
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_0016b210(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using bf_x87_rotation::pair_schedule;
    constexpr std::array<bf_x87_rotation::component_pair, 3> components{{
        {0x0u, 0xcu, pair_schedule::subtract_then_add},
        {0x4u, 0x10u, pair_schedule::subtract_then_add},
        {0x8u, 0x14u, pair_schedule::subtract_then_add}
    }};
    return bf_x87_rotation::run(guest, x87, 0x0016b210u, components);
}
