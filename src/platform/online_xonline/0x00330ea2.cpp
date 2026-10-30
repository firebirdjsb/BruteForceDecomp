/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FDCF7BD244185CCC234E623FC5BD99FC26AB6967DAB291B142E299C60CD2264
 * Entry: 0x00330ea2, Ghidra index: 12381, label: FUN_00330ea2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330ea2(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0xc) == 0x1500f0) {
    *param_3 = *(undefined4 *)(param_1 + 0xa4);
    *param_2 = *(undefined4 *)(param_1 + 0xb0);
    param_2 = (undefined4 *)(param_1 + 0xb0);
  }
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0xc);
}
