/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A0A38DB79B397197D7CB0493E397A907F6FB21D34DFE3E37F76684191FA2317
 * Entry: 0x000cfec0, Ghidra index: 2570, label: FUN_000cfec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_001f4740(int param_1,int *param_2,int *param_3,float param_4,float param_5);

void FUN_000cfec0(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  int in_ECX;
  int iVar7;
  float *in_EDX;
  int iVar8;
  undefined1 *unaff_ESI;
  int local_34;
  int local_30 [2];
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_10;
  
  *(int *)(unaff_ESI + 0x2c) = in_ECX;
  local_1c = in_EDX[2];
  local_24 = *in_EDX;
  local_10 = in_EAX[2];
  local_18 = *in_EAX;
  if ((((1e+06 < local_24) || (local_24 < -1e+06)) || (1e+06 < local_18)) || (local_18 < -1e+06)) {
    local_24 = 10000.0;
    local_1c = 10000.0;
    local_18 = 10000.0;
    local_10 = 10000.0;
  }
  fVar2 = *(float *)(in_ECX + 8);
  piVar1 = (int *)(unaff_ESI + 0x10);
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  local_34 = 0;
  local_30[0] = 0;
  local_28 = local_10;
  FUN_001f4740(in_ECX,unaff_ESI + 0xc,piVar1,local_24,local_1c);
  FUN_001f4740(*(undefined4 *)(unaff_ESI + 0x2c),&local_34,local_30,local_18,local_10);
  iVar3 = *(int *)(unaff_ESI + 0xc);
  if ((iVar3 == local_34) && (iVar8 = *piVar1, iVar8 == local_30[0])) {
    *(int *)(unaff_ESI + *(int *)(unaff_ESI + 0x24) * 4 + 0x30) = iVar3;
    *(int *)(unaff_ESI + *(int *)(unaff_ESI + 0x24) * 4 + 0x40) = iVar8;
    *(uint *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1U & 3;
    *unaff_ESI = 1;
    return;
  }
  iVar8 = *(int *)(unaff_ESI + 0x2c);
  fVar5 = *(float *)(iVar8 + 8) * 0.5;
  iVar4 = *piVar1;
  fVar6 = ((float)iVar3 * *(float *)(iVar8 + 8) + fVar5) - (float)**(int **)(iVar8 + 0x20) * fVar5;
  fVar5 = ((float)iVar4 * *(float *)(iVar8 + 8) + fVar5) -
          (float)(*(int **)(iVar8 + 0x20))[1] * fVar5;
  local_18 = local_18 - local_24;
  local_10 = local_10 - local_1c;
  if (0.0 <= local_18) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
  }
  *(int *)(unaff_ESI + 0x14) = iVar8;
  if (0.0 <= local_10) {
    iVar7 = 1;
  }
  else {
    iVar7 = -1;
  }
  *(int *)(unaff_ESI + 0x18) = iVar7;
  if (1.1920929e-07 <= ABS(local_10)) {
    if (1.1920929e-07 <= ABS(local_18)) {
      if (ABS(local_10) < ABS(local_18)) {
        *(undefined4 *)(unaff_ESI + 0x20) = 0;
        local_18 = local_10 / local_18;
        *(float *)(unaff_ESI + 4) = local_18;
        fVar5 = fVar2 * 0.5 + (local_1c - fVar5) + (fVar6 - local_24) * local_18;
        *(float *)(unaff_ESI + 8) = fVar5;
        if (local_10 < 0.0) {
          *(float *)(unaff_ESI + 8) = fVar2 - fVar5;
        }
        *(int *)(unaff_ESI + 0x1c) = iVar8 + local_34;
        *(float *)(unaff_ESI + 4) = ABS(local_18 * fVar2);
        goto LAB_000d0197;
      }
      *(undefined4 *)(unaff_ESI + 0x20) = 1;
      local_10 = local_18 / local_10;
      *(float *)(unaff_ESI + 4) = local_10;
      fVar5 = fVar2 * 0.5 + (local_24 - fVar6) + (fVar5 - local_1c) * local_10;
      *(float *)(unaff_ESI + 8) = fVar5;
      if (local_18 < 0.0) {
        *(float *)(unaff_ESI + 8) = fVar2 - fVar5;
      }
      *(float *)(unaff_ESI + 4) = ABS(local_10 * fVar2);
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      *(undefined4 *)(unaff_ESI + 4) = 0;
      *(undefined4 *)(unaff_ESI + 8) = 0;
      *(undefined4 *)(unaff_ESI + 0x20) = 1;
    }
    *(int *)(unaff_ESI + 0x1c) = iVar7 + local_30[0];
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 4) = 0;
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(int *)(unaff_ESI + 0x1c) = iVar8 + local_34;
  }
LAB_000d0197:
  *unaff_ESI = 0;
  *(int *)(unaff_ESI + *(int *)(unaff_ESI + 0x24) * 4 + 0x30) = iVar3;
  *(int *)(unaff_ESI + *(int *)(unaff_ESI + 0x24) * 4 + 0x40) = iVar4;
  *(uint *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1U & 3;
  return;
}
