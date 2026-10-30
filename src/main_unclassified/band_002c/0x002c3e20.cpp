/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 194231636D96C5B08F49BD59CD2231213493F401248C78D6DBF1743621BDF757
 * Entry: 0x002c3e20, Ghidra index: 10052, label: FUN_002c3e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c3e20(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_EAX;
  int unaff_EDI;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  float local_4;
  
  local_4 = -1.0;
  if (*(int *)(*(int *)(in_EAX + 0x10) + 0x90) == *(int *)(*(int *)(unaff_EDI + 0x10) + 0x90)) {
    local_4 = 1.0;
  }
  iVar3 = *(int *)(in_EAX + 0x40);
  fVar1 = *(float *)(in_EAX + 0x38);
  iVar4 = *(int *)(unaff_EDI + 0x40);
  local_48 = 0;
  local_58 = 0;
  fVar2 = *(float *)(in_EAX + 0x3c);
  local_54 = fVar1 * *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x80) * fVar2;
  local_50 = fVar1 * *(float *)(iVar3 + 0x74) + (float)*(undefined8 *)(iVar3 + 0x84) * fVar2;
  fStack_4c = fVar1 * *(float *)(iVar3 + 0x78) +
              (float)((ulonglong)*(undefined8 *)(iVar3 + 0x84) >> 0x20) * fVar2;
  fVar1 = *(float *)(unaff_EDI + 0x38);
  fVar2 = *(float *)(unaff_EDI + 0x3c);
  local_64 = fVar1 * *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x80) * fVar2;
  local_60 = fVar1 * *(float *)(iVar4 + 0x74) + (float)*(undefined8 *)(iVar4 + 0x84) * fVar2;
  fStack_5c = fVar1 * *(float *)(iVar4 + 0x78) +
              (float)((ulonglong)*(undefined8 *)(iVar4 + 0x84) >> 0x20) * fVar2;
  local_78 = 0;
  local_84 = *(float *)(iVar3 + 0x20) - *(float *)(iVar4 + 0x20);
  local_80 = (float)*(undefined8 *)(iVar3 + 0x24) - (float)*(undefined8 *)(iVar4 + 0x24);
  fStack_7c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x24) >> 0x20) -
              (float)((ulonglong)*(undefined8 *)(iVar4 + 0x24) >> 0x20);
  FUN_002b65a0(&local_84);
  fVar1 = local_84 * local_54 + local_80 * local_50 + fStack_7c * fStack_4c;
  fVar2 = (local_84 * local_64 + local_80 * local_60 + fStack_7c * fStack_5c) * local_4;
  fVar5 = (local_84 * fVar1 + local_84 * fVar2) * 0.5;
  fVar6 = (local_80 * fVar1 + local_80 * fVar2) * 0.5;
  fVar7 = (fStack_7c * fVar1 + fStack_7c * fVar2) * 0.5;
  local_4 = local_4 * param_3;
  *param_1 = *param_1 + (fVar5 - local_84 * fVar1) * param_3;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) +
                (fVar7 - fStack_7c * fVar1) * param_3,
                (float)*(undefined8 *)(param_1 + 1) + (fVar6 - local_80 * fVar1) * param_3);
  *param_2 = *param_2 + (fVar5 - local_84 * fVar2) * local_4;
  *(ulonglong *)(param_2 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) +
                (fVar7 - fStack_7c * fVar2) * local_4,
                (float)*(undefined8 *)(param_2 + 1) + (fVar6 - local_80 * fVar2) * local_4);
  return;
}
