/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5322E9E52868E4D29BB9E8579653E16266357485A54DB32EDCCAA618D6764977
 * Entry: 0x000d3330, Ghidra index: 2628, label: FUN_000d3330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0023c5c0(void);
extern void FUN_000d2f70(void);
extern int FUN_000d3100(int param_1,uint param_2);

void FUN_000d3330(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  bVar9 = false;
  iVar12 = (**(code **)(*param_2 + 0x20))();
  if (((iVar12 != 0) && (*(int *)(*(int *)(iVar12 + 0xc) + 4) == 3)) &&
     (cVar11 = (**(code **)(**(int **)(param_2[2] + 0xbec) + 0x30))(), cVar11 != '\0')) {
    bVar9 = true;
  }
  if (((*(int *)(param_2[0x1b] + 0x10) == 0) ||
      (iVar12 = *(int *)(*(int *)(param_2[0x1b] + 0x10) + 100), iVar12 == 0)) ||
     ((iVar12 == -1 || (bVar10 = false, bVar9)))) {
    bVar10 = true;
  }
  if ((((*(int *)(param_2[3] + 4) == 3) && (iVar12 = (**(code **)(*param_2 + 0x1c))(), iVar12 != 0))
      && (*(int *)(*(int *)(iVar12 + 0xc) + 4) == 3)) || (bVar10)) {
    *(int **)(param_1 + 0xf0a0) = param_2;
    if (*(int *)(param_2[3] + 4) == 3) {
      iVar12 = param_2[0x7d];
      *(undefined4 *)(param_1 + 0xf0a4) = *(undefined4 *)(iVar12 + 0x20);
      iVar13 = FUN_0023c5c0();
      if (iVar13 != 0) {
        puVar14 = (undefined4 *)(**(code **)(*param_2 + 0x40))();
        uVar2 = puVar14[1];
        uVar3 = puVar14[2];
        uVar4 = puVar14[3];
        uVar1 = puVar14[8];
        uVar5 = puVar14[4];
        uVar6 = puVar14[5];
        uVar7 = puVar14[6];
        uVar8 = puVar14[7];
        *(undefined4 *)(param_1 + 0xf040) = *puVar14;
        *(undefined4 *)(param_1 + 0xf044) = uVar2;
        *(undefined4 *)(param_1 + 0xf048) = uVar3;
        *(undefined4 *)(param_1 + 0xf04c) = uVar4;
        *(undefined4 *)(param_1 + 0xf060) = uVar1;
        *(undefined4 *)(param_1 + 0xf050) = uVar5;
        *(undefined4 *)(param_1 + 0xf054) = uVar6;
        *(undefined4 *)(param_1 + 0xf058) = uVar7;
        *(undefined4 *)(param_1 + 0xf05c) = uVar8;
        uVar1 = puVar14[0xb];
        uVar2 = puVar14[10];
        *(undefined4 *)(param_1 + 0xf064) = puVar14[9];
        *(undefined4 *)(param_1 + 0xf068) = uVar2;
        *(undefined4 *)(param_1 + 0xf06c) = uVar1;
        iVar13 = FUN_002338c0(auStack_30,param_1 + 0xf010,param_1 + 0xf040);
        FUN_0003d6c0(&uStack_60,iVar13,iVar13 + 0x24);
        *(undefined4 *)(param_1 + 0xf070) = uStack_60;
        *(undefined4 *)(param_1 + 0xf074) = uStack_5c;
        *(undefined4 *)(param_1 + 0xf078) = uStack_58;
        *(undefined4 *)(param_1 + 0xf07c) = uStack_54;
        *(undefined4 *)(param_1 + 0xf090) = uStack_40;
        *(undefined4 *)(param_1 + 0xf080) = uStack_50;
        *(undefined4 *)(param_1 + 0xf084) = uStack_4c;
        *(undefined4 *)(param_1 + 0xf088) = uStack_48;
        *(undefined4 *)(param_1 + 0xf08c) = uStack_44;
        *(undefined4 *)(param_1 + 0xf094) = uStack_3c;
        *(undefined4 *)(param_1 + 0xf09c) = uStack_34;
        *(undefined4 *)(param_1 + 0xf098) = uStack_38;
        *(undefined4 *)(param_1 + 0xf0b0) = *(undefined4 *)(iVar12 + 0x28);
        FUN_000d2f70();
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf0b0) = 0;
      FUN_000d3100(param_2[0x1b],0);
    }
  }
  return;
}
