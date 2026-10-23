/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7829B1D0DD9A5AC6808814C44A36E46455FCC7873E9B7F68A93553D3FA485C5
 * Entry: 0x0029f0b0, Ghidra index: 9483, label: FUN_0029f0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029f0b0(int *param_1,float param_2,int *param_3,float *param_4)

{
  float *pfVar1;
  bool bVar2;
  float10 fVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  
  pfVar1 = param_4;
  piVar4 = param_1;
  if ((param_1[2] & 0x1ffU) == 0x1ff) {
    param_4[7] = 0.0;
    param_4[6] = 0.0;
    param_4[5] = 0.0;
    param_4[3] = 0.0;
    param_4[2] = 0.0;
    param_4[1] = 0.0;
    param_4[8] = 1.0;
    param_4[4] = 1.0;
    *param_4 = 1.0;
    param_4[0xb] = 0.0;
    param_4[10] = 0.0;
    param_4[9] = 0.0;
    return 0;
  }
  bVar2 = ((byte)param_1[2] & 0x38) != 0x38;
  if (bVar2) {
    param_4 = (float *)param_1[8];
    piVar7 = (int *)param_1[6];
    piVar6 = param_3;
    (**(code **)(*(int *)param_1[7] + 0x1c))((int *)param_1[7],param_2);
    (**(code **)(*piVar7 + 0x1c))(piVar7,param_2,param_3);
    fVar3 = (float10)(**(code **)(*piVar6 + 0x1c))(piVar6,param_2,param_3);
    param_1 = (int *)(float)fVar3;
    FUN_00212280(param_1,param_4,param_3);
  }
  if ((piVar4[2] & 0x1c0U) == 0x1c0) {
    if (!bVar2) {
      pfVar1[7] = 0.0;
      pfVar1[6] = 0.0;
      pfVar1[5] = 0.0;
      pfVar1[3] = 0.0;
      pfVar1[2] = 0.0;
      pfVar1[1] = 0.0;
      pfVar1[8] = 1.0;
      pfVar1[4] = 1.0;
      *pfVar1 = 1.0;
    }
  }
  else if (bVar2) {
    fVar3 = (float10)(**(code **)(*(int *)piVar4[9] + 0x1c))((int *)piVar4[9]);
    param_1 = (int *)(float)fVar3;
    (**(code **)(*(int *)piVar4[10] + 0x1c))((int *)piVar4[10],param_2,param_3);
    fVar3 = (float10)(**(code **)(*(int *)piVar4[0xb] + 0x1c))((int *)piVar4[0xb],param_2,param_3);
    *pfVar1 = (float)param_4 * *pfVar1;
    pfVar1[1] = (float)param_4 * pfVar1[1];
    pfVar1[2] = (float)param_4 * pfVar1[2];
    pfVar1[3] = (float)param_1 * pfVar1[3];
    pfVar1[4] = (float)param_1 * pfVar1[4];
    pfVar1[5] = (float)param_1 * pfVar1[5];
    pfVar1[6] = (float)(fVar3 * (float10)pfVar1[6]);
    pfVar1[7] = (float)(fVar3 * (float10)pfVar1[7]);
    pfVar1[8] = (float)(fVar3 * (float10)pfVar1[8]);
  }
  else {
    fVar5 = (float)piVar4[10];
    param_1 = (int *)piVar4[9];
    piVar7 = param_3;
    (**(code **)(*(int *)piVar4[0xb] + 0x1c))((int *)piVar4[0xb],param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3);
    fVar3 = (float10)(**(code **)(*piVar7 + 0x1c))(piVar7,param_2,param_3);
    *pfVar1 = (float)fVar3;
    pfVar1[1] = 0.0;
    pfVar1[2] = 0.0;
    pfVar1[3] = 0.0;
    pfVar1[4] = fVar5;
    pfVar1[5] = 0.0;
    pfVar1[6] = 0.0;
    pfVar1[7] = 0.0;
    pfVar1[8] = (float)param_3;
  }
  if (((byte)piVar4[2] & 7) == 7) {
    pfVar1[10] = 0.0;
    pfVar1[9] = 0.0;
    pfVar1[0xb] = 0.0;
    return 0;
  }
  piVar7 = (int *)piVar4[3];
  fVar5 = param_2;
  (**(code **)(*(int *)piVar4[5] + 0x1c))((int *)piVar4[5],param_2,param_3);
  piVar4 = param_3;
  (**(code **)(*param_1 + 0x1c))(param_1,param_2);
  fVar3 = (float10)(**(code **)(*piVar7 + 0x1c))(piVar7,param_2,param_3);
  pfVar1[9] = (float)fVar3;
  pfVar1[10] = (float)piVar4;
  pfVar1[0xb] = fVar5;
  return 0;
}
