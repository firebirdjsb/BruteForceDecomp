/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: CEAF804CA9017AA7C4550226A02E0025857091A3F6CD17A98A400826FF92AA22
 * Entry: 0x0006ad00, Ghidra index: 1211, label: FUN_0006ad00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_camera_leaves.h"

bool FUN_0006ad00(bf_guest32_constructor_state& guest, const bf_x87_camera_operations& x87)
{
    return bf_x87_camera::run(guest, x87, 0x0006ad00u, 0u);
}
