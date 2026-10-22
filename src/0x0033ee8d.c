/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC115508A1E32BBFFC27032368E0C4C6113914A83E31E4C9363CCAA542EF3BEA
 * Entry: 0x0033ee8d, Ghidra index: 12631, label: FUN_0033ee8d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033ee8d(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x10);
  }
  return *(undefined4 *)(param_1 + 0xc);
}
