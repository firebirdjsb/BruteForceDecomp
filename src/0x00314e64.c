/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 512DDA3D423647DAF4911573221CE5A910055FA5A339373D5E6AA071CAE1BCC2
 * Entry: 0x00314e64, Ghidra index: 12096, label: FUN_00314e64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314e64(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  float local_10;
  float local_c;
  
  iVar6 = *(int *)(param_1 + 0x50);
  fVar1 = *(float *)(param_1 + 0xc);
  pfVar3 = *(float **)(iVar6 + 0x70);
  uVar4 = *(uint *)(iVar6 + 0x74);
  if (fVar1 <= *(float *)(iVar6 + 0x34)) {
    iVar6 = 0;
  }
  else if (((*(byte *)(*(int *)(param_1 + 0x4c) + 2) & 2) == 0) ||
          (fVar1 < *(float *)(iVar6 + 0x38))) {
    if (*(float *)(iVar6 + 0x38) < fVar1) {
      fVar1 = *(float *)(iVar6 + 0x38);
    }
    if ((pfVar3 == (float *)0x0) || (uVar4 == 0)) {
      iVar6 = FUN_00314c9d((fVar1 / *(float *)(iVar6 + 0x34) - 1.0) *
                           *(float *)(**(int **)(param_1 + 0x48) + 0x38) * *(float *)(iVar6 + 0x44))
      ;
    }
    else {
      fVar1 = *(float *)(iVar6 + 0x38);
      fVar2 = *(float *)(iVar6 + 0x34);
      fVar5 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      uVar7 = FUN_002ebf10();
      if (uVar4 <= uVar7) {
        uVar7 = uVar4 - 1;
      }
      if (uVar7 == 0) {
        local_c = *pfVar3;
        local_10 = 1.0;
        fVar8 = extraout_ST1;
      }
      else {
        local_10 = (pfVar3 + uVar7)[-1];
        local_c = pfVar3[uVar7];
        fVar8 = (float10)(int)uVar7;
        if ((int)uVar7 < 0) {
          fVar8 = fVar8 + (float10)4.2949673e+09;
        }
        fVar8 = extraout_ST1 - fVar8 * extraout_ST0;
      }
      iVar6 = FUN_00314d1b((float)(((float10)local_c - (float10)local_10) *
                                   (float10)(1.0 / ((fVar1 - fVar2) / fVar5)) * fVar8 +
                                  (float10)local_10));
    }
  }
  else {
    iVar6 = -10000;
  }
  if (iVar6 != *(int *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    *(int *)(param_1 + 0x20) = iVar6;
  }
  return;
}
