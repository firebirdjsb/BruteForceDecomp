/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E26A16FAE3E98C19A5766C8196F70D12BADFFD320F36C658DD920327641E090
 * Entry: 0x000643b0, Ghidra index: 1085, label: FUN_000643b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_001e10c0(int param_1);
extern void FUN_00064490(void);

int FUN_000643b0(int param_1,float param_2,undefined4 *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float local_8;
  undefined4 local_4;
  
  pfVar2 = *(float **)(param_1 + 0xc);
  iVar3 = 0;
  if (pfVar2 != *(float **)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      if (param_2 < *pfVar2) break;
      pfVar2 = pfVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (pfVar2 != *(float **)(param_1 + 0x10));
    if (pfVar2 != *(float **)(param_1 + 0x10)) {
      local_8 = param_2;
      local_4 = *param_3;
      FUN_001e10c0(pfVar2,&local_8);
      goto LAB_0006442d;
    }
  }
  local_8 = param_2;
  local_4 = *param_3;
  FUN_00064490();
LAB_0006442d:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (1 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3))) {
    fVar1 = (*(float **)(param_1 + 0xc))[2] - **(float **)(param_1 + 0xc);
    if (fVar1 != 0.0) {
      *(float *)(param_1 + 0x18) = 1.0 / fVar1;
    }
    return iVar3;
  }
  return iVar3;
}
