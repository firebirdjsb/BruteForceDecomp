/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2623CF03AC92ED7E01F7DB6BC75286625E553BD1F6F1F4912B7C39A2529536F
 * Entry: 0x00144ab0, Ghidra index: 4169, label: FUN_00144ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00144ab0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x1c;
    puVar2 = param_4 + -7;
    *puVar2 = *(undefined4 *)(param_3 + -0x1c);
    FUN_00144880();
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
