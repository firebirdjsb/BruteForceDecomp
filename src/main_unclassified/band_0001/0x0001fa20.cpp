/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: B16E4A7481C301116D37734B35C45967572E26C940C471C194EA19897C4D640A
 * Entry: 0x0001fa20, Ghidra index: 153, label: FUN_0001fa20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_0001fa20(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    constexpr std::array<bf_x87_rotation::component_pair, 3> components{{
        {0u, 0x18u}, {4u, 0x1cu}, {8u, 0x20u}
    }};
    return bf_x87_rotation::run(guest, x87, 0x0001fa20u, components);
}
