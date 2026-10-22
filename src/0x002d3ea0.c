/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0009DD5B3714EB37B42E34E24F727AD60DA8313DBB1BB2238937AC53BB22BC20
 * Entry: 0x002d3ea0, Ghidra index: 10205, label: FUN_002d3ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f40;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d3ea0(float *param_1,float *param_2,float param_3,int param_4,float param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_20;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar4 = param_1[0x3f];
  *param_1 = (_DAT_00469f40 + param_5) * 1.2;
  param_1[3] = param_3;
  *param_2 = param_1[0x3b];
  param_2[1] = param_1[0x3c];
  piVar1 = (int *)(*(int *)((int)param_1[0x3b] + 0xc) + 0x54);
  *piVar1 = *piVar1 + 1;
  param_1[7] = (float)((int)param_1[0x3b] + 0xfc);
  param_1[8] = (float)((int)param_1[0x3c] + 0xfc);
  fVar6 = param_1[0x3b];
  uVar2 = *(undefined8 *)((int)fVar6 + 0xa0);
  uVar3 = *(undefined8 *)((int)fVar6 + 0x80);
  param_1[9] = *(float *)((int)fVar6 + 0x9c) + *(float *)((int)fVar6 + 0x7c);
  *(ulonglong *)(param_1 + 10) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20),
                (float)uVar2 + (float)uVar3);
  fVar6 = param_1[0x3b];
  uVar2 = *(undefined8 *)((int)fVar6 + 0xb0);
  uVar3 = *(undefined8 *)((int)fVar6 + 0x90);
  param_1[0x11] = *(float *)((int)fVar6 + 0xac) + *(float *)((int)fVar6 + 0x8c);
  *(ulonglong *)(param_1 + 0x12) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20),
                (float)uVar2 + (float)uVar3);
  fVar6 = param_1[0x3c];
  uVar2 = *(undefined8 *)((int)fVar6 + 0xa0);
  uVar3 = *(undefined8 *)((int)fVar6 + 0x80);
  param_1[0xd] = *(float *)((int)fVar6 + 0x9c) + *(float *)((int)fVar6 + 0x7c);
  *(ulonglong *)(param_1 + 0xe) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20),
                (float)uVar2 + (float)uVar3);
  fVar6 = param_1[0x3c];
  uVar2 = *(undefined8 *)((int)fVar6 + 0xb0);
  uVar3 = *(undefined8 *)((int)fVar6 + 0x90);
  param_1[0x15] = *(float *)((int)fVar6 + 0xac) + *(float *)((int)fVar6 + 0x8c);
  *(ulonglong *)(param_1 + 0x16) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20),
                (float)uVar2 + (float)uVar3);
  param_1[6] = 0.0;
  FUN_002d34c0(param_1);
  fVar6 = param_1[0x2a];
  pfVar7 = (float *)param_1[0x43];
  fVar5 = param_1[0x2b];
  *pfVar7 = param_1[0x29];
  pfVar7[1] = fVar6;
  iVar8 = 0;
  pfVar7[2] = fVar5;
  fVar9 = (float10)FUN_002d4b60();
  pfVar7 = (float *)param_1[0x42];
  if (*pfVar7 * param_1[0x29] + pfVar7[1] * param_1[0x2a] + pfVar7[2] * param_1[0x2b] <= -0.0001) {
    FUN_002d3560();
    param_1[0x33] = 0.0;
    param_1[0x32] = 0.0;
    param_1[0x31] = 0.0;
    pfVar7 = (float *)param_1[0x42];
    fVar6 = -(param_1[0x29] * *pfVar7 + param_1[0x2b] * pfVar7[2] + param_1[0x2a] * pfVar7[1]);
    fVar4 = SQRT(1.0 - (1.0 - fVar4) * (1.0 / ((float)param_4 * 0.5 + 1.0))) * fVar6;
    for (; (0.0 < fVar6 && (iVar8 < 100)); iVar8 = iVar8 + 1) {
      FUN_002d4800(param_1,(float)(fVar9 * (float10)0.1));
      FUN_002d34c0(param_1);
      pfVar7 = (float *)param_1[0x42];
      fVar6 = -(param_1[0x29] * *pfVar7 + param_1[0x2a] * pfVar7[1] + param_1[0x2b] * pfVar7[2]);
      FUN_002d3560();
    }
    local_20 = fVar6 + SQRT((float)param_4) * 0.01 + fVar4;
    pfVar7 = (float *)param_1[0x42];
    fVar4 = pfVar7[1];
    fVar5 = pfVar7[2];
    param_1[0x2d] = *pfVar7 * -1.0;
    param_1[0x2e] = fVar4 * -1.0;
    param_1[0x2f] = fVar5 * -1.0;
    if ((0.0 < local_20) && (iVar8 != 100)) {
      FUN_002d4800(param_1,0x3f800000);
      FUN_002d34c0(param_1);
      pfVar7 = (float *)param_1[0x42];
      fVar6 = *pfVar7 * param_1[0x29] + param_1[0x2a] * pfVar7[1] + param_1[0x2b] * pfVar7[2] +
              fVar6;
      if (ABS(fVar6) <= 0.0001) {
        local_20 = 0.0;
      }
      else {
        local_20 = local_20 / fVar6;
      }
      FUN_002d3850(param_1);
      FUN_002d4800(param_1,local_20);
    }
    FUN_002d3970(param_1,param_1 + 0x2d,0);
  }
  else {
    local_4 = 0;
    pfVar7 = (float *)param_1[0x42];
    local_c = -pfVar7[1];
    local_8 = -pfVar7[2];
    local_10 = -*pfVar7;
    FUN_002d3970(param_1,&local_10,1);
    if (10 < param_4) {
      param_1[3] = 0.0;
    }
  }
  FUN_002c62f0(param_1[0x3b],param_1 + 0x11,param_1 + 9);
  FUN_002c62f0(param_1[0x3c],param_1 + 0x15,param_1 + 0xd);
  FUN_002d44f0(param_2);
  if (*(char *)((int)param_1[0x3c] + 0x65) != '\0' || *(char *)((int)param_1[0x3b] + 0x65) != '\0')
  {
    piVar1 = (int *)(*(int *)((int)param_1[0x3b] + 0xc) + 0x6c);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)param_1[0x3b];
    *(char *)((int)piVar1 + 0x65) = '\x01' - (char)((*piVar1 << 0x1c) >> 0x1e);
    piVar1[0x23] = (int)((float)piVar1[0x23] + (float)piVar1[0x2b]);
    *(ulonglong *)(piVar1 + 0x24) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(piVar1 + 0x24) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(piVar1 + 0x2c) >> 0x20),
                  (float)*(undefined8 *)(piVar1 + 0x24) + (float)*(undefined8 *)(piVar1 + 0x2c));
    piVar1[0x1f] = (int)((float)piVar1[0x1f] + (float)piVar1[0x27]);
    *(ulonglong *)(piVar1 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(piVar1 + 0x20) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(piVar1 + 0x28) >> 0x20),
                  (float)*(undefined8 *)(piVar1 + 0x20) + (float)*(undefined8 *)(piVar1 + 0x28));
    piVar1[0x2d] = 0;
    piVar1[0x2c] = 0;
    piVar1[0x2b] = 0;
    piVar1[0x29] = 0;
    piVar1[0x28] = 0;
    piVar1[0x27] = 0;
    *param_2 = (float)piVar1;
    piVar1 = (int *)param_1[0x3c];
    *(char *)((int)piVar1 + 0x65) = '\x01' - (char)((*piVar1 << 0x1c) >> 0x1e);
    piVar1[0x23] = (int)((float)piVar1[0x23] + (float)piVar1[0x2b]);
    *(ulonglong *)(piVar1 + 0x24) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(piVar1 + 0x24) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(piVar1 + 0x2c) >> 0x20),
                  (float)*(undefined8 *)(piVar1 + 0x24) + (float)*(undefined8 *)(piVar1 + 0x2c));
    piVar1[0x1f] = (int)((float)piVar1[0x1f] + (float)piVar1[0x27]);
    *(ulonglong *)(piVar1 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(piVar1 + 0x20) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(piVar1 + 0x28) >> 0x20),
                  (float)*(undefined8 *)(piVar1 + 0x20) + (float)*(undefined8 *)(piVar1 + 0x28));
    piVar1[0x2d] = 0;
    piVar1[0x2c] = 0;
    piVar1[0x2b] = 0;
    piVar1[0x29] = 0;
    piVar1[0x28] = 0;
    piVar1[0x27] = 0;
    param_2[1] = (float)piVar1;
  }
  return;
}
