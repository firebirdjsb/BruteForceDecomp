/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 45CD1F6B008AE51D58F77FACC075B0E7FCB35F76F722EDC43BAF4A407EE23D90
 * Entry: 0x00073d80, Ghidra index: 1311, label: FUN_00073d80
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_00073d80(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    constexpr std::array<bf_x87_rotation::component_pair, 3> components{{
        {0u, 4u}, {0xcu, 0x10u}, {0x18u, 0x1cu}
    }};
    return bf_x87_rotation::run(guest, x87, 0x00073d80u, components);
}
