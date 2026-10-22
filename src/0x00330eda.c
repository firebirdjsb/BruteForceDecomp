/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E966B7F747B762699BFBFC4A235B84BA354467667AA90E885C334B349D73825
 * Entry: 0x00330eda, Ghidra index: 12382, label: FUN_00330eda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330eda(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0xc) == 0x1500f0) {
    *param_3 = *(undefined4 *)(param_1 + 0x684);
    *param_2 = *(undefined4 *)(param_1 + 0x694);
    param_2 = (undefined4 *)(param_1 + 0x694);
  }
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0xc);
}
