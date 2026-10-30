/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98F13CC0E09976CC0824DF1CC6A628B60A8D6E84DAC63C48CD812EE12AFF3420
 * Entry: 0x001c9a40, Ghidra index: 5836, label: FUN_001c9a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001c9a40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  
  FUN_001ca050();
  *(undefined4 *)(param_1 + 0x140) = 0xf;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  FUN_0001f4f0(unaff_EBX + 0x128,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x15c) = 0xf;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  FUN_0001f4f0(unaff_EBX + 0x144,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(unaff_EBX + 0x160);
  *(undefined1 *)(param_1 + 0x164) = *(undefined1 *)(unaff_EBX + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(unaff_EBX + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(unaff_EBX + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(unaff_EBX + 0x170);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(unaff_EBX + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(unaff_EBX + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(unaff_EBX + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(unaff_EBX + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(unaff_EBX + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(unaff_EBX + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(unaff_EBX + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(unaff_EBX + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(unaff_EBX + 0x194);
  FUN_001e0dd0(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(unaff_EBX + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(unaff_EBX + 0x1ac);
  FUN_001d3090();
  puVar3 = (undefined4 *)(param_1 + 0x204);
  iVar4 = (unaff_EBX + 0x204) - (int)puVar3;
  iVar5 = 3;
  do {
    *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x210);
  iVar4 = (unaff_EBX + 0x210) - (int)puVar3;
  iVar5 = 3;
  do {
    *puVar3 = *(undefined4 *)((int)puVar3 + iVar4);
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_001d3180();
  FUN_001cab20();
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(unaff_EBX + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(unaff_EBX + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(unaff_EBX + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(unaff_EBX + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(unaff_EBX + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(unaff_EBX + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(unaff_EBX + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(unaff_EBX + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(unaff_EBX + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(unaff_EBX + 0x318);
  FUN_001e0dd0(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(unaff_EBX + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(unaff_EBX + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(unaff_EBX + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(unaff_EBX + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(unaff_EBX + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(unaff_EBX + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(unaff_EBX + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(unaff_EBX + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(unaff_EBX + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(unaff_EBX + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(unaff_EBX + 0x354);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(unaff_EBX + 0x358);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(unaff_EBX + 0x35c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(unaff_EBX + 0x360);
  puVar3 = (undefined4 *)(unaff_EBX + 0x364);
  puVar6 = (undefined4 *)(param_1 + 0x364);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x390) = 0xf;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined1 *)(param_1 + 0x37c) = 0;
  FUN_0001f4f0(unaff_EBX + 0x378,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(unaff_EBX + 0x394);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(unaff_EBX + 0x398);
  FUN_001cca00(param_1 + 0x39c);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(unaff_EBX + 0x3ac);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(unaff_EBX + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(unaff_EBX + 0x3b4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(unaff_EBX + 0x3b8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(unaff_EBX + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(unaff_EBX + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(unaff_EBX + 0x3c4);
  uVar1 = *(undefined4 *)(unaff_EBX + 0x3d0);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x3cc);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(unaff_EBX + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = uVar2;
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  return param_1;
}
