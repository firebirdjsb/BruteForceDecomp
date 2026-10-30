/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44DC9B073000DA98CDC9B174E9A200D75F89515C7457D24A4883737A1417C23F
 * Entry: 0x0010a880, Ghidra index: 3431, label: FUN_0010a880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0010a880(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  float local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x84) == 0) {
    fVar2 = (float)FUN_002ea01d(0x28);
    fVar6 = 0.0;
    if (fVar2 != 0.0) {
      *(undefined4 *)((int)fVar2 + 0x20) = 0;
      *(undefined4 *)((int)fVar2 + 0x24) = 7;
      *(undefined2 *)((int)fVar2 + 0x10) = 0;
      fVar6 = fVar2;
    }
    iVar4 = *(int *)(iVar3 + 0x80);
    local_c = fVar6;
    iVar3 = FUN_000ff730(iVar3 + 0x7c,iVar4,*(undefined4 *)(iVar4 + 4),&local_c);
    FUN_000b2a50();
    *(int *)(iVar4 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  else {
    fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 8);
  }
  iVar4 = param_2;
  iVar3 = param_1;
  local_8 = (int)fVar6 + 0xc;
  FUN_0010aed0(param_2);
  sVar8 = (short)iVar4;
  if (sVar8 == 10) {
    param_2 = FUN_002ea01d(0x28);
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x24) = 7;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined2 *)(param_2 + 0x10) = 0;
    }
    iVar4 = *(int *)(iVar3 + 0x80);
    iVar3 = FUN_000ff730(iVar3 + 0x7c,iVar4,*(undefined4 *)(iVar4 + 4),&param_2);
    FUN_000b2a50();
    *(int *)(iVar4 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    iVar3 = param_1;
  }
  else {
    if (*(uint *)((int)fVar6 + 0x24) < 8) {
      iVar4 = (int)fVar6 + 0x10;
    }
    else {
      iVar4 = *(int *)((int)fVar6 + 0x10);
    }
    FUN_000ccae0(*(undefined4 *)(iVar3 + 0xf0),iVar4,&local_c,local_4,1,0x3f800000);
    if (((*(float *)(iVar3 + 0x14) < local_c) && (sVar8 != 0x20)) && (sVar8 != 9)) {
      uVar7 = *(int *)((int)fVar6 + 0x20) - 1;
      if (1 < uVar7) {
        uVar5 = uVar7;
        do {
          if (*(uint *)((int)fVar6 + 0x24) < 8) {
            iVar3 = (int)fVar6 + 0x10;
          }
          else {
            iVar3 = *(int *)((int)fVar6 + 0x10);
          }
          sVar8 = *(short *)(iVar3 + uVar5 * 2);
          if (((sVar8 == 0x20) || (sVar8 == 0x2d)) || (sVar8 == 9)) {
            uVar7 = uVar5 + 1;
            break;
          }
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      iVar9 = *(int *)((int)fVar6 + 0x20) - uVar7;
      iVar3 = FUN_002ea01d(0x28);
      iVar4 = 0;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x20) = 0;
        *(undefined4 *)(iVar3 + 0x24) = 7;
        *(undefined2 *)(iVar3 + 0x10) = 0;
        iVar4 = iVar3;
      }
      param_2 = iVar4;
      FUN_0010af20();
      iVar3 = param_1;
      if (iVar9 != 0) {
        FUN_00087940(iVar4 + 0xc,uVar7,iVar9);
        FUN_00087a00();
        iVar3 = param_1;
      }
    }
  }
  iVar4 = *(int *)(iVar3 + 4);
  bVar1 = true;
  if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x28) & 4) == 0)) {
    bVar1 = false;
  }
  if (((((*(byte *)(iVar3 + 0x28) & 4) != 0) && (bVar1)) && (0.0 < *(float *)(iVar3 + 0xe0))) &&
     ((iVar4 != 0 && ((*(byte *)(iVar4 + 0x66) & 1) != 0)))) {
    param_1 = 0xf97ceaf0;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&param_1);
  }
  return;
}
