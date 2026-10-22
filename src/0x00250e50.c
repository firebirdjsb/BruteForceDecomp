/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 515FB664E6B61747079F0DF21A044C6600DFEA4816831CFB61036F18EB380FE4
 * Entry: 0x00250e50, Ghidra index: 8355, label: FUN_00250e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250e50(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_00251370(param_1,param_2 + -4 >> 2,uVar1,param_3);
  }
  return;
}
