/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5D4B593AF6EA97B5AD87CD9459F879A63ADD5DAFFC2924F55126AC8E2866B04
 * Entry: 0x000587d0, Ghidra index: 874, label: FUN_000587d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_000587d0(int *param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  float in_XMM1_Da;
  float fVar5;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float local_34 [2];
  float local_2c;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  float *pfStack_14;
  float *local_10;
  float local_c;
  undefined1 local_5;
  
  if (*param_1 < 2) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x40))();
  local_10 = (float *)(param_2[2] - *(float *)(iVar2 + 0x2c));
  local_18 = param_2[1] - *(float *)(iVar2 + 0x28);
  local_1c = *param_2 - *(float *)(iVar2 + 0x24);
  local_c = local_1c * local_1c + local_18 * local_18 + (float)local_10 * (float)local_10;
  if ((float)param_1[3] * (float)param_1[3] <= local_c) {
    return 0;
  }
  pfStack_14 = local_10;
  cVar1 = FUN_0004c530(local_28);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0004c480(local_34);
  if (cVar1 == '\0') {
    return 0;
  }
  fVar5 = local_34[0] * local_28[0] + local_2c * local_20;
  if (0.1 <= fVar5) {
    if (fVar5 < 0.365) {
      FUN_000124f0(0x3fc00000);
      if (2 < param_1[1]) {
        iVar2 = param_1[1] + -1;
        if (*param_1 <= iVar2) {
          return 1;
        }
        *param_1 = iVar2;
        return 1;
      }
      goto LAB_00058996;
    }
    FUN_0011e680(param_1[2],&local_1c);
    local_10 = &local_1c;
    in_XMM1_Da = in_XMM1_Da + local_1c * local_1c;
    fVar5 = (float)pfStack_14 * (float)pfStack_14 + 0.0;
    auVar4._4_4_ = in_XMM1_Da;
    auVar4._0_4_ = fVar5;
    auVar4._8_4_ = in_XMM1_Da;
    auVar4._12_4_ = in_XMM1_Da;
    auVar3._4_12_ = auVar4._4_12_;
    auVar3._0_4_ = fVar5 + local_1c * local_1c;
    if (auVar3._0_4_ < 2e-05) {
      return 0;
    }
    auVar4 = rsqrtss(auVar3,auVar3);
    fVar5 = auVar4._0_4_;
    local_1c = local_1c * fVar5;
    local_18 = fVar5 * 0.0;
    pfStack_14 = (float *)((float)pfStack_14 * fVar5);
    if (0.6 <= local_1c * local_28[0] + (float)pfStack_14 * local_20) {
      return 0;
    }
    local_5 = 1;
    if (5.76 <= local_c) {
      return 0;
    }
  }
  FUN_000124f0(0x3fc00000);
  if (param_1[1] < 3) {
    return 1;
  }
LAB_00058996:
  *param_1 = 2;
  return 1;
}
