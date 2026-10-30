/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42F9DEF48AB6D935F8422BE596DE541134DFC11307168641CD08EFA25225E999
 * Entry: 0x000ca4e0, Ghidra index: 2508, label: FUN_000ca4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038dd38;
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469ab0;
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
void FUN_000ca4e0(int param_1)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int unaff_retaddr;
  float local_34;
  float local_30;
  undefined4 local_1c;
  int local_18;
  float local_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  float local_4;
  
  iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x34) + 0xc);
  piVar8 = (int *)(iVar11 + 0x404);
  local_34 = 1.5;
  local_30 = 1.0;
  if (2 < *(int *)(iVar11 + 0x404)) {
    piVar8 = &DAT_0038dd38;
  }
  iVar11 = *piVar8;
  if (0 < iVar11) {
    iVar12 = 100;
    do {
      iVar9 = FUN_000b9120(DAT_00469ab0);
      if (iVar9 != 0) {
        if (param_1 + 0x2c != 0) {
          FUN_000b25a0(param_1 + 0x2c,iVar9);
        }
        *(byte *)(iVar9 + 0x13) = *(byte *)(iVar9 + 0x13) & 0xfb;
      }
      *(int *)(iVar12 + param_1) = iVar9;
      if (*(int *)(iVar12 + param_1) != 0) {
        *(short *)(*(int *)(iVar12 + param_1) + 0xe) = (short)(int)(local_34 * 128.0);
        uVar4 = DAT_004a5c7c;
        *(short *)(*(int *)(iVar12 + param_1) + 0xc) = (short)(int)(local_34 * 128.0);
        if ((uVar4 & 1) == 0) {
          DAT_004a5c7c = DAT_004a5c7c | 1;
          DAT_004a5c78 = 0xffffffff;
        }
        uVar10 = DAT_004a5c78;
        iVar9 = *(int *)(iVar12 + param_1);
        *(char *)(iVar9 + 0x2c) = (char)DAT_004a5c78;
        *(char *)(iVar9 + 0x2d) = (char)((uint)uVar10 >> 8);
        *(char *)(iVar9 + 0x2e) = (char)((uint)uVar10 >> 0x10);
        local_14 = local_30;
        local_1c = 0x3f800000;
        local_18 = 0;
        local_4 = local_30;
        if (local_30 <= 0.0) {
          local_4 = 0.0;
        }
        if (1.0 <= local_4) {
          local_4 = 1.0;
        }
        *(char *)(*(int *)(iVar12 + param_1) + 0x10) = (char)(int)(local_4 * 255.0);
        if (*(int *)(*(int *)(param_1 + 0x34) + 0x34) != 0) {
          FUN_000ba6d0();
        }
      }
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + -1;
      local_34 = local_34 - 0.5;
      local_30 = local_30 - 0.3;
    } while (iVar11 != 0);
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x34) + 0x34);
  if (iVar11 == 0) {
    return;
  }
  iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x184) + 0x1c) + 0x24) + 0x20);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else if ((iVar11 < 0) || (0x18 < iVar11)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(DAT_00469948 + 0x250 + iVar11 * 4);
  }
  local_4 = 1.4674871e-29;
  iVar12 = FUN_000b9120(DAT_00469ab0);
  if (iVar12 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar12);
    }
    *(byte *)(iVar12 + 0x13) = *(byte *)(iVar12 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x70) = iVar12;
  local_4 = 1.1843726e-26;
  (**(code **)(**(int **)(param_1 + 0x70) + 0x30))(&local_4);
  iVar12 = *(int *)(unaff_retaddr + 0x70);
  iVar9 = *(int *)(iVar12 + 0x6c);
  local_14 = 0.0;
  uStack_10 = 0;
  iStack_c = 0;
  *(undefined2 *)(iVar9 + 4) = 0;
  *(undefined2 *)(iVar9 + 6) = 0;
  if (iVar11 != 0) {
    FUN_001f2970(0x24,&local_18);
  }
  fVar5 = local_14;
  FUN_000c9d70(&local_18);
  if (fVar5 != 0.0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(fVar5);
  }
  FUN_000bb9d0(*(undefined4 *)(iVar12 + 0x6c));
  uStack_8 = 0xf94d225;
  iVar12 = FUN_000b9120(DAT_00469ab0);
  if (iVar12 != 0) {
    if (unaff_retaddr + 0x2c != 0) {
      FUN_000b25a0(unaff_retaddr + 0x2c,iVar12);
    }
    *(byte *)(iVar12 + 0x13) = *(byte *)(iVar12 + 0x13) & 0xfb;
  }
  *(int *)(unaff_retaddr + 0x74) = iVar12;
  uStack_8 = 0x146a96d3;
  (**(code **)(**(int **)(unaff_retaddr + 0x74) + 0x30))(&uStack_8);
  iVar12 = *(int *)((int)local_4 + 0x74);
  iVar9 = *(int *)(iVar12 + 0x6c);
  local_18 = 0;
  local_14 = 0.0;
  uStack_10 = 0;
  *(undefined2 *)(iVar9 + 4) = 0;
  *(undefined2 *)(iVar9 + 6) = 0;
  if (iVar11 != 0) {
    FUN_001f2970(10,&local_1c);
  }
  iVar11 = local_18;
  FUN_000c9d70(&local_1c);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar11);
  }
  FUN_000bb9d0(*(undefined4 *)(iVar12 + 0x6c));
  iVar11 = *(int *)(*(int *)(*(int *)((int)local_4 + 0x34) + 0x34) + 0x184);
  if ((iVar11 != 0) && (iVar12 = *(int *)(iVar11 + 0x1c), iVar12 != 0)) {
    if ((*(int *)(iVar12 + 0x18) == 0) ||
       (*(char *)(*(int *)(*(int *)(iVar12 + 0x18) + 0xc) + 0x295) == '\0')) {
      pbVar1 = (byte *)(*(int *)((int)local_4 + 0x74) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar10 = *(undefined4 *)(*(int *)((int)local_4 + 0x74) + 0x6c);
    }
    else {
      iVar9 = *(int *)((int)local_4 + 0x74);
      if (*(int *)(*(int *)(iVar12 + 0x28) + 0xc) == *(int *)(iVar11 + 0x34)) {
        *(byte *)(iVar9 + 0x13) = *(byte *)(iVar9 + 0x13) | 1;
        goto LAB_000ca8bb;
      }
      *(byte *)(iVar9 + 0x13) = *(byte *)(iVar9 + 0x13) & 0xfe;
      uVar10 = *(undefined4 *)(*(int *)((int)local_4 + 0x74) + 0x6c);
    }
    FUN_000bb9d0(uVar10);
  }
LAB_000ca8bb:
  iVar11 = *(int *)((int)local_4 + 0x74);
  if ((*(byte *)(iVar11 + 0x13) & 1) == 0) {
    iStack_c = (int)*(short *)(iVar11 + 0xe);
  }
  sVar2 = *(short *)(*(int *)((int)local_4 + 0x70) + 0xe);
  sVar3 = *(short *)(iVar11 + 0xc);
  FUN_000b2770(*(undefined4 *)((int)local_4 + 0x34));
  iStack_c = (int)sVar3;
  uVar6 = FUN_002ebf10();
  iStack_c = (int)sVar2;
  local_1c = FUN_002ebf10();
  fVar5 = local_4;
  iVar11 = *(int *)((int)local_4 + 0x70);
  *(short *)(iVar11 + 4) = (short)local_1c;
  *(undefined2 *)(iVar11 + 6) = uVar6;
  iStack_c = (int)*(short *)(*(int *)((int)local_4 + 0x70) + 0xe);
  uVar7 = FUN_002ebf10();
  iVar11 = *(int *)((int)fVar5 + 0x74);
  *(undefined2 *)(iVar11 + 4) = uVar7;
  *(undefined2 *)(iVar11 + 6) = uVar6;
  return;
}
