/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D114CAB99B751B87188490DD7F03E2D81B910F8402A05E2F3435273A4F25248
 * Entry: 0x00121670, Ghidra index: 3655, label: FUN_00121670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00121670(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x18a] = 0;
  if (*(int *)(param_2[3] + 0x160) == 1) {
    if (param_1[0x1f8] != 0) {
      return;
    }
    iVar4 = FUN_00121ac0();
    param_1[0x1f8] = iVar4;
    if (param_1[0x1f8] == 0) {
      return;
    }
    if (((param_1[0x1f8] != *(int *)(param_1[0xba] + 0x1cc)) &&
        (cVar3 = FUN_0011e130(), cVar3 == '\0')) &&
       (((param_1[0x1f8] == 1 && (iVar4 = FUN_0014d430(), iVar4 != 0)) ||
        ((param_1[0x1f8] == 2 && (iVar4 = FUN_0014d450(), iVar4 != 0)))))) {
      fVar2 = 0.0;
      iVar4 = 0x228;
      do {
        if ((*(int *)(iVar4 + (int)param_1) != 0) &&
           (fVar1 = *(float *)(*(int *)(iVar4 + (int)param_1) + 0x38), fVar2 <= fVar1)) {
          fVar2 = fVar1;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0x234);
      if (fVar2 == 0.0) {
        param_1[0x18a] = 0x40a00000;
      }
      else {
        param_1[0x18a] = (int)fVar2;
      }
    }
    if (*(int *)param_2[0x8a] == 0) {
      param_1[0x7b] = 4;
    }
    else if (*(int *)param_2[0x8a] == 2) {
      param_1[0x7b] = 6;
    }
    else {
      param_1[0x7b] = 5;
    }
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x40))();
    iVar5 = (**(code **)(*param_1 + 0x40))();
    fVar2 = *(float *)(iVar5 + 0x28) - 0.2;
    if (fVar2 < *(float *)(iVar4 + 0x28) == (fVar2 == *(float *)(iVar4 + 0x28))) {
      param_1[0x7b] = 1;
    }
    else {
      param_1[0x7b] = 2;
    }
  }
  if (0.0 < (float)param_2[0x6a]) {
    param_2[0x6a] = 0;
  }
  FUN_000c4ec0();
  param_1[0x1f7] = 0;
  return;
}
