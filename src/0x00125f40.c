/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4326B3BDDE575B89C3736A5F0C4165093F6952B889995724BB95360A3B8D0D1A
 * Entry: 0x00125f40, Ghidra index: 3704, label: FUN_00125f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
extern uint32_t DAT_00469b58;
void FUN_00125f40(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  float unaff_retaddr;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_34;
  int iStack_2c;
  float local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar8 = *(int *)(param_2 + 0x1c);
  local_28 = *(float *)(param_2 + 0x14);
  iVar10 = 0;
  if ((local_28 == 0.0) || (fVar9 = local_28, *(int *)(*(int *)((int)local_28 + 0xc) + 4) != 3)) {
    fVar9 = 0.0;
  }
  iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0xbec) + 0xc))(param_1);
  if ((iVar4 == iVar8) || (bVar2 = false, unaff_retaddr == fVar9)) {
    bVar2 = true;
  }
  if (*(int *)((int)unaff_retaddr + 0x1f0) == 4) {
    uVar11 = 0xed35ffae;
  }
  else {
    uVar11 = 0xe1213623;
  }
  FUN_00140a60(*(undefined4 *)(*(int *)((int)unaff_retaddr + 8) + 0xbe8),unaff_retaddr,uVar11,0);
  if (fVar9 != 0.0) {
    iVar5 = (**(code **)(*(int *)((int)unaff_retaddr + 0x1b4) + 0x9c))();
    iVar6 = (**(code **)(*(int *)((int)fVar9 + 0x1b4) + 0x9c))();
    if ((((iVar6 != -1) && (iVar5 != -1)) && ((&DAT_003ffd80)[iVar6 * 10 + iVar5] != '\0')) &&
       (!bVar2)) {
      cVar3 = (**(code **)(**(int **)((int)fVar9 + 0x5a4) + 8))();
      if (cVar3 == '\0') {
        uVar12 = 0x2da3fee;
        uVar11 = *(undefined4 *)(*(int *)((int)fVar9 + 8) + 0xbe8);
      }
      else {
        uVar12 = 0x13601f7b;
        uVar11 = *(undefined4 *)(*(int *)((int)fVar9 + 8) + 0xbe8);
      }
      FUN_00140a60(uVar11,fVar9,uVar12,0);
    }
  }
  if (iVar8 != 0) {
    if (iStack_2c != 0) {
      iVar10 = *(int *)(*(int *)(iStack_2c + 0xc) + 0x120);
    }
    if (!bVar2) {
      iVar5 = *(int *)(*(int *)(iVar8 + 0x28) + 0xc);
      iVar6 = (**(code **)(*(int *)((int)unaff_retaddr + 0x1b4) + 0x9c))();
      if (((iVar5 == -1) || (iVar6 == -1)) ||
         ((iVar5 != iVar6 || ((&DAT_003ffd80)[iVar5 * 10 + iVar6] != '\0')))) {
        FUN_0008df50(0x3f800000);
        iVar10 = *(int *)(*(int *)(iVar8 + 0x28) + 0xc);
        iVar5 = (**(code **)(*(int *)((int)unaff_retaddr + 0x1b4) + 0x9c))();
        fVar9 = fStack_34;
        if (((iVar10 != -1) && (iVar5 != -1)) && ((&DAT_003ffd80)[iVar10 * 10 + iVar5] != '\0')) {
          FUN_0008df50(0x3f800000);
        }
        goto LAB_0012611a;
      }
    }
    iVar5 = *(int *)(iVar8 + 0x2c);
    fVar1 = 0.0;
    piVar7 = (int *)(iVar5 + 4);
    if (piVar7 != (int *)0x0) {
      fVar1 = (float)*piVar7;
    }
    if (piVar7 != (int *)0x0) {
      *piVar7 = (int)(fVar1 - 1.0);
      local_28 = fVar1 - 1.0;
    }
    if ((iVar10 != 0) && (piVar7 = (int *)FUN_0008e590(iVar5), piVar7 != (int *)0x0)) {
      local_28 = (float)*piVar7 - 1.0;
      *piVar7 = (int)local_28;
    }
  }
LAB_0012611a:
  if (iVar4 != 0) {
    if ((iStack_2c == 0) && (iVar8 == 0)) {
      FUN_0008df50(0xbf800000);
      fVar9 = fStack_34;
    }
    fVar1 = 0.0;
    iVar10 = *(int *)(iVar4 + 0x2c);
    iVar5 = *(int *)(*(int *)((int)unaff_retaddr + 0xc) + 0x120);
    if (iVar10 != -4) {
      fVar1 = (float)*(int *)(iVar10 + 0xc);
    }
    if (iVar10 != -4) {
      *(int *)(iVar10 + 0xc) = (int)(fVar1 + 1.0);
      local_28 = fVar1 + 1.0;
    }
    if ((iVar5 != 0) && (iVar10 = FUN_0008e590(iVar10), iVar10 != 0)) {
      local_28 = (float)*(int *)(iVar10 + 8) + 1.0;
      *(int *)(iVar10 + 8) = (int)local_28;
    }
  }
  piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar7 != 0x17506391) {
    iStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    if (iVar8 == 0) {
      if (fVar9 == 0.0) {
        return;
      }
      if (*(int *)((int)fVar9 + 0x59c) == 0) {
        return;
      }
      FUN_0005c550();
      iVar8 = iStack_24;
    }
    iStack_24 = iVar8;
    if (iStack_24 != 0) {
      iVar8 = (**(code **)(**(int **)(*(int *)((int)unaff_retaddr + 8) + 0xbec) + 0xc))
                        (unaff_retaddr);
      if (iVar8 == 0) {
        iVar8 = FUN_001e97c0();
      }
      else {
        iVar8 = (**(code **)(**(int **)(*(int *)(iStack_4 + 8) + 0xbec) + 0xc))(iStack_4);
        if (*(uint *)(iVar8 + 0x54) < 8) {
          iVar8 = iVar8 + 0x40;
        }
        else {
          iVar8 = *(int *)(iVar8 + 0x40);
        }
      }
      iVar10 = 0;
      do {
        if ((&local_28)[iVar10] == 0.0) {
          return;
        }
        iVar5 = *(int *)((int)(&local_28)[iVar10] + 0x30);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x58) != 0)) {
          FUN_000b1b80(iVar8,iVar4);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
    }
  }
  return;
}
