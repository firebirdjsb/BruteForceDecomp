/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34319C8A15ACED6DC7DDF65B6E0DA70DCF98AF19C31515688DC25CA67FC8C83B
 * Entry: 0x00057890, Ghidra index: 854, label: FUN_00057890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00112a20(void);
extern undefined4 FUN_00049ca0(void);

float10 FUN_00057890(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  int *unaff_EDI;
  float local_4;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x18) + 0xc58);
  local_4 = 1.0;
  if (fVar1 <= 0.9) {
    if (0.5 < fVar1) {
      local_4 = 1.3;
    }
  }
  else {
    local_4 = 1.7;
  }
  if ((*(int *)(unaff_EDI[3] + 4) == 0x1d) || (*(int *)(unaff_EBX[3] + 4) == 0x1d)) {
    return (float10)local_4 * (float10)2.5;
  }
  if ((*(int *)(unaff_EDI[3] + 4) == 3) && (*(int *)(unaff_EBX[3] + 4) == 3)) {
    iVar3 = (**(code **)(*unaff_EDI + 0xf4))();
    iVar4 = (**(code **)(*unaff_EBX + 0xf4))();
    cVar2 = FUN_00112a20();
    if (cVar2 == '\0') {
      cVar2 = FUN_00112a20();
      if (cVar2 == '\0') {
        if ((((iVar3 == 0) || (iVar4 == 0)) || ((*(byte *)(unaff_EDI + 0x1c) & 1) != 0)) ||
           ((*(byte *)(unaff_EBX + 0x1c) & 1) != 0)) {
          return (float10)local_4 * (float10)5.0;
        }
        iVar3 = (**(code **)(*unaff_EDI + 0xf4))();
        iVar3 = *(int *)(iVar3 + 0x770);
        iVar4 = (**(code **)(*unaff_EBX + 0xf4))();
        if ((iVar3 < 1) && (*(int *)(iVar4 + 0x770) < 1)) {
          return (float10)local_4 * (float10)1.5000001;
        }
        piVar5 = (int *)FUN_00049ca0();
        if (piVar5 != unaff_EBX) {
          piVar5 = (int *)FUN_00049ca0();
          if (piVar5 != unaff_EDI) goto LAB_000579cd;
        }
        return (float10)local_4 * (float10)0.083333336;
      }
    }
    return (float10)4.0;
  }
LAB_000579cd:
  return (float10)local_4 * (float10)0.53333336;
}
