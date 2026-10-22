/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 859BA8E37AF6CEC1685551772DCDB545314CF340659D5769F4723D1BB37E4E92
 * Entry: 0x00148660, Ghidra index: 4256, label: FUN_00148660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00148660(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1b4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1b4))(1);
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}
