/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: A95C8217ACB8BC3D13D783997451DD938DD268136CD6012A0440386683B583E1
 * Entry: 0x00072010, Ghidra index: 1273, label: FUN_00072010
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_00072010(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    constexpr std::array<bf_x87_rotation::component_pair, 3> components{{
        {4u, 8u}, {0x10u, 0x14u}, {0x1cu, 0x20u}
    }};
    return bf_x87_rotation::run(guest, x87, 0x00072010u, components);
}
