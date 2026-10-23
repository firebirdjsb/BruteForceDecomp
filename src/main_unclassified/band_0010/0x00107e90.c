/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBEC7B460CE179D0C17D64B654DD1EF91778432D33E47167C3B3E89CD2534C50
 * Entry: 0x00107e90, Ghidra index: 3379, label: FUN_00107e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00107e90(int param_1,float *param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  float local_4;
  
  if (*param_2 == param_3) {
    *param_5 = param_3;
  }
  else {
    pfVar2 = &param_4;
    if ((int)param_4 <= (int)param_3) {
      pfVar2 = &param_3;
    }
    local_4 = *pfVar2;
    if ((int)param_3 < 0) {
      local_4 = (float)-(int)param_4;
      pfVar2 = &local_4;
      if ((int)param_3 <= -(int)param_4) {
        pfVar2 = &param_3;
      }
      local_4 = *pfVar2;
    }
    local_4 = (*(float *)(param_1 + 0xc) / 10.0) * (float)(int)local_4;
    *param_5 = (float)(int)local_4;
    if ((int)param_3 < 0) {
      pfVar2 = &param_3;
      if ((int)param_3 <= (int)*param_5) {
        pfVar2 = param_5;
      }
      *param_5 = *pfVar2;
    }
    else {
      pfVar2 = &param_3;
      if ((int)*param_5 <= (int)param_3) {
        pfVar2 = param_5;
      }
      *param_5 = *pfVar2;
    }
    fVar1 = *param_5;
    bVar3 = fVar1 != param_3;
    param_3 = fVar1;
    if (bVar3) {
      *param_2 = fVar1;
      return CONCAT31((int3)((uint)fVar1 >> 8),1);
    }
  }
  *param_2 = param_3;
  return (uint)param_3 & 0xffffff00;
}
