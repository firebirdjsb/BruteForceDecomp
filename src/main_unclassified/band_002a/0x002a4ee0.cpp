/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73225A0655EBE8FA9CA8526CE3DA1BDCEB60BB6779E37ADA0867DA08D3C04188
 * Entry: 0x002a4ee0, Ghidra index: 9557, label: FUN_002a4ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4ee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *unaff_EBX;
  
  while (param_2 != param_3) {
    puVar1 = (undefined4 *)param_2[1];
    puVar2 = (undefined4 *)*param_2;
    if (puVar1 == (undefined4 *)0x0) {
      *unaff_EBX = *puVar2;
    }
    else {
      *puVar1 = *puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) {
      unaff_EBX[1] = *puVar1;
    }
    else {
      puVar2[1] = *puVar1;
    }
    param_2[1] = 0;
    *param_2 = 0;
    piVar3 = (int *)param_2[0xc];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))(piVar3);
    }
    piVar3 = (int *)param_2[0xc];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_2[0xc] = 0;
    }
    FUN_00238300();
    param_2 = puVar2;
  }
  *param_1 = param_2;
  return;
}
