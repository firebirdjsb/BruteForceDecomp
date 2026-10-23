/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 836EF40BD925BAAD372029E66AE3E9B3A80FAA468AA0EFF0C3753F022BE72974
 * Entry: 0x003150b6, Ghidra index: 12098, label: FUN_003150b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003150b6(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  if ((char)(*(int **)((int)param_1 + 0x48))[4] == '\0') {
    iVar4 = 0;
    iVar5 = -10000;
  }
  else {
    fVar1 = *(float *)(*(int *)((int)param_1 + 0x50) + 0x40) *
            *(float *)(**(int **)((int)param_1 + 0x48) + 0x34) * *(float *)((int)param_1 + 0xc);
    fVar2 = ((ABS(*(float *)((int)param_1 + 0x10)) * 0.011111111 - 1.0) *
             (1.0 - ABS(*(float *)((int)param_1 + 0x14)) * 0.011111111) + 1.0) * 0.5;
    param_1 = (fVar2 + fVar2) - 0.5;
    if (param_1 <= 1.0) {
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = 1.0;
    }
    if (fVar1 < 0.5) {
      param_1 = ((param_1 - 0.5) * fVar1 + 1.0) * 0.5;
    }
    iVar4 = FUN_00314cd4(1.0 - param_1);
    iVar5 = FUN_00314cd4(param_1);
  }
  if ((iVar4 != *(int *)(iVar3 + 0x28)) || (iVar5 != *(int *)(iVar3 + 0x2c))) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 4;
    *(int *)(iVar3 + 0x28) = iVar4;
    *(int *)(iVar3 + 0x2c) = iVar5;
  }
  return;
}
