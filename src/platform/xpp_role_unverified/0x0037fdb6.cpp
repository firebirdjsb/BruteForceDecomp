/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2421E5414B7DCE3F43B135D86241C326CE19026C9E26BF298836918978683ED2
 * Entry: 0x0037fdb6, Ghidra index: 13517, label: XInputGetState
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XInputGetState(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(*(int *)((int)param_1 + 0xa3) + 0x28) & 0x10) == 0) {
    if ((*param_1 == 0) || ((*(byte *)(*param_1 + 4) & 2) != 0)) {
      uVar3 = 0x48f;
    }
    *param_2 = param_1[2];
    bVar1 = **(byte **)(*(int *)((int)param_1 + 0xa3) + 8);
    piVar4 = param_1 + 5;
    for (uVar2 = (uint)(bVar1 >> 2); param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *piVar4;
      piVar4 = piVar4 + 1;
    }
    for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)param_2 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      param_2 = (int *)((int)param_2 + 1);
    }
  }
  else {
    uVar3 = 0x57;
  }
  KfLowerIrql();
  return uVar3;
}
