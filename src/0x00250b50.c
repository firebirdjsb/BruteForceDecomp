/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9F196B89FC904F7D4271DCAD00F60DF73F12DC96A70F6A8C4DDF893333067CC
 * Entry: 0x00250b50, Ghidra index: 8352, label: FUN_00250b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250b50(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_00251280(param_1,param_2 + -4 >> 2,uVar1,param_3);
  }
  return;
}
