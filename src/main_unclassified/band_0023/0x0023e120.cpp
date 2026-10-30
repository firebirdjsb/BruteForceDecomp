/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41052CBE3F17F7C24EEA16667CB6D5B233836E67C7D85B24DB3EDE0BCD258A57
 * Entry: 0x0023e120, Ghidra index: 7974, label: FUN_0023e120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023e120(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  
  if (param_2 != param_3) {
    iVar16 = param_3 + 0x28;
    puVar17 = (undefined4 *)(param_4 + 0x28);
    do {
      *(undefined4 *)(param_4 + -0x48) = *(undefined4 *)(param_3 + -0x48);
      puVar17[-0x1b] = *(undefined4 *)(iVar16 + -0x6c);
      uVar1 = *(undefined4 *)(iVar16 + -0x48);
      uVar2 = *(undefined4 *)(iVar16 + -0x44);
      uVar3 = *(undefined4 *)(iVar16 + -0x40);
      uVar4 = *(undefined4 *)(iVar16 + -0x3c);
      uVar5 = *(undefined4 *)(iVar16 + -0x58);
      uVar6 = *(undefined4 *)(iVar16 + -0x54);
      uVar7 = *(undefined4 *)(iVar16 + -0x50);
      uVar8 = *(undefined4 *)(iVar16 + -0x4c);
      uVar9 = *(undefined4 *)(iVar16 + -0x38);
      uVar10 = *(undefined4 *)(iVar16 + -0x34);
      uVar11 = *(undefined4 *)(iVar16 + -0x30);
      uVar12 = *(undefined4 *)(iVar16 + -0x2c);
      uVar13 = *(undefined4 *)(iVar16 + -100);
      uVar14 = *(undefined4 *)(iVar16 + -0x60);
      uVar15 = *(undefined4 *)(iVar16 + -0x5c);
      param_3 = param_3 + -0x48;
      param_4 = param_4 + -0x48;
      puVar17[-0x1a] = *(undefined4 *)(iVar16 + -0x68);
      puVar17[-0x19] = uVar13;
      puVar17[-0x18] = uVar14;
      puVar17[-0x17] = uVar15;
      puVar17[-0x16] = uVar5;
      puVar17[-0x15] = uVar6;
      puVar17[-0x14] = uVar7;
      puVar17[-0x13] = uVar8;
      puVar17[-0x12] = uVar1;
      puVar17[-0x11] = uVar2;
      puVar17[-0x10] = uVar3;
      puVar17[-0xf] = uVar4;
      puVar17[-0xe] = uVar9;
      puVar17[-0xd] = uVar10;
      puVar17[-0xc] = uVar11;
      puVar17[-0xb] = uVar12;
      iVar16 = iVar16 + -0x48;
      puVar17 = puVar17 + -0x12;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
