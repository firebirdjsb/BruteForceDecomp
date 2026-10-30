/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B5774CE310B8FB338EC01B1F45FA1C2B2FB654030F20118F3373ECF282440BE
 * Entry: 0x00222b30, Ghidra index: 7590, label: FUN_00222b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222b30(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar1 + 0x1b0);
  iVar2 = *(int *)(iVar1 + 0x228);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 8) == 0) {
      if ((*(int *)(iVar4 + 0x10) == 0) ||
         (iVar4 = *(int *)(*(int *)(iVar4 + 0x10) + 0xb0), *(int *)(*(int *)(iVar4 + 0xc) + 4) != 3)
         ) goto LAB_00222ba7;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 8) + 0x1d4);
    }
    if (iVar4 != 0) {
      fVar3 = -1.0;
      if (*(char *)(iVar4 + 0x498) != '\0') {
        fVar3 = (float)*(int *)(iVar4 + 0x49c);
      }
      *(float *)(param_1 + 8) = fVar3;
      if (*(int *)(iVar4 + 0x1f8) == 6) {
        param_2 = param_2 + param_2;
      }
    }
  }
LAB_00222ba7:
  if (*(float *)(iVar1 + 0x218) < 0.0 != (*(float *)(iVar1 + 0x218) == 0.0)) {
    *(float *)(param_1 + 0xc) = (float)*(int *)(iVar2 + 0x14) * param_2 + *(float *)(param_1 + 0xc);
  }
  fVar3 = (float)*(int *)(iVar2 + 4);
  fVar5 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= fVar3) {
    fVar5 = fVar3;
  }
  if (*(float *)(param_1 + 0x10) <= fVar5) {
    fVar5 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0xc) = fVar5;
  return;
}
