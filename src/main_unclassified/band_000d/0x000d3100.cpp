/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4D6A5E9FB8BE940BC03D330BC3438101339CCBE5E3CE5AC5A3BD1C7538B537C
 * Entry: 0x000d3100, Ghidra index: 2627, label: FUN_000d3100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00236a00(undefined4 param_1);
extern undefined4 FUN_000d40a0(void);
extern void FUN_000d2f70(void);

int FUN_000d3100(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0xf040) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0xf044) = uVar2;
  *(undefined4 *)(in_ECX + 0xf048) = uVar3;
  *(undefined4 *)(in_ECX + 0xf04c) = uVar4;
  *(undefined4 *)(in_ECX + 0xf060) = uVar1;
  *(undefined4 *)(in_ECX + 0xf050) = uVar5;
  *(undefined4 *)(in_ECX + 0xf054) = uVar6;
  *(undefined4 *)(in_ECX + 0xf058) = uVar7;
  *(undefined4 *)(in_ECX + 0xf05c) = uVar8;
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0xf064) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0xf068) = uVar2;
  *(undefined4 *)(in_ECX + 0xf06c) = uVar1;
  iVar11 = 4;
  if ((char)param_2 != '\0') {
    iVar11 = FUN_00236a00(param_1,in_ECX + 0xf010,in_ECX + 0xf040);
    if (iVar11 < 3) {
      return iVar11;
    }
    if (iVar11 != 4) goto LAB_000d31ca;
  }
  param_2 = param_2 & 0xffffff00;
LAB_000d31ca:
  iVar9 = FUN_000d40a0();
  if (iVar9 != 0) {
    if (((char)param_2 != '\0') && (iVar11 == 3)) {
      iVar11 = FUN_00236a00(param_1,in_ECX + 0xf010,in_ECX + 0xf040);
    }
    if (2 < iVar11) {
      *(int *)(in_ECX + 0xf0a4) = param_1;
      iVar9 = FUN_002338c0(local_30,in_ECX + 0xf010,in_ECX + 0xf040);
      FUN_0003d6c0(&local_60,iVar9,iVar9 + 0x24);
      *(undefined4 *)(in_ECX + 0xf070) = local_60;
      *(undefined4 *)(in_ECX + 0xf074) = uStack_5c;
      *(undefined4 *)(in_ECX + 0xf078) = uStack_58;
      *(undefined4 *)(in_ECX + 0xf07c) = uStack_54;
      *(undefined4 *)(in_ECX + 0xf090) = local_40;
      *(undefined4 *)(in_ECX + 0xf080) = local_50;
      *(undefined4 *)(in_ECX + 0xf084) = uStack_4c;
      *(undefined4 *)(in_ECX + 0xf088) = uStack_48;
      *(undefined4 *)(in_ECX + 0xf08c) = uStack_44;
      *(undefined4 *)(in_ECX + 0xf094) = local_3c;
      *(undefined4 *)(in_ECX + 0xf09c) = local_34;
      *(undefined4 *)(in_ECX + 0xf098) = local_38;
      FUN_000d2f70();
    }
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
  }
  iVar12 = 0;
  if (0 < iVar9) {
    do {
      iVar10 = FUN_000d3100(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar12 * 4),param_2);
      if (iVar11 != iVar10) {
        iVar11 = 3;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
  }
  return iVar11;
}
