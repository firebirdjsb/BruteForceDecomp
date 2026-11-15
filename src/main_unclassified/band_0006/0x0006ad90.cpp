/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 0C9AC21DE2CE68F974004ACFEE2CAF6BD944AF19ACC47F3D72F7A198263CE611
 * Entry: 0x0006ad90, Ghidra index: 1212, label: FUN_0006ad90
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_camera_leaves.h"

bool FUN_0006ad90(bf_guest32_constructor_state& guest, const bf_x87_camera_operations& x87)
{
    return bf_x87_camera::run(guest, x87, 0x0006ad90u, 1u);
}
