/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34AFB7E1EF73C89135B120A352069EE0F2D7EEB9C79FDEE1624458302C8BCBBD
 * Entry: 0x0033eec2, Ghidra index: 12632, label: FUN_0033eec2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033eec2(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x14);
  }
  return *(undefined4 *)(param_1 + 0xc);
}
