/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A33BD01ECB219A74B9F9DAE3B9234A57A7C7D021EA7DAF911FBBAB11158FB4A3
 * Entry: 0x00271540, Ghidra index: 8813, label: FUN_00271540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271540(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int unaff_retaddr;
  undefined4 *puVar11;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_4;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,param_2 + 0x14);
    if (*(int *)(iStack_4 + 4) != 0) {
      FUN_00061eb0();
      puVar11 = &uStack_80;
      puVar10 = (undefined4 *)FUN_002334b0();
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      uVar1 = puVar10[8];
      uVar6 = puVar10[4];
      uVar7 = puVar10[5];
      uVar8 = puVar10[6];
      uVar9 = puVar10[7];
      *puVar11 = *puVar10;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[8] = uVar1;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      puVar11[6] = uVar8;
      puVar11[7] = uVar9;
      *(undefined4 *)(unaff_retaddr + 0x14) = uStack_80;
      *(undefined4 *)(unaff_retaddr + 0x18) = uStack_7c;
      *(undefined4 *)(unaff_retaddr + 0x1c) = uStack_78;
      *(undefined4 *)(unaff_retaddr + 0x20) = uStack_74;
      *(undefined4 *)(unaff_retaddr + 0x34) = uStack_60;
      *(undefined4 *)(unaff_retaddr + 0x24) = uStack_70;
      *(undefined4 *)(unaff_retaddr + 0x28) = uStack_6c;
      *(undefined4 *)(unaff_retaddr + 0x2c) = uStack_68;
      *(undefined4 *)(unaff_retaddr + 0x30) = uStack_64;
    }
  }
  return;
}
