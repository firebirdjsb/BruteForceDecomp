/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78AADA697434A4EB6B06CA56CE529E49C4F6E8A5E2B6B9F6A4A793F52C7CCA7D
 * Entry: 0x001d1fb0, Ghidra index: 6295, label: FUN_001d1fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1fb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_001d2580();
  FUN_0001f4f0(param_1 + 0x128,0,0xffffffff);
  FUN_0001f4f0(param_1 + 0x144,0,0xffffffff);
  *(undefined4 *)(unaff_EBX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined1 *)(unaff_EBX + 0x164) = *(undefined1 *)(param_1 + 0x164);
  *(undefined4 *)(unaff_EBX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(unaff_EBX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(unaff_EBX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(unaff_EBX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(unaff_EBX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(unaff_EBX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(unaff_EBX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(unaff_EBX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(unaff_EBX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(unaff_EBX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(unaff_EBX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(unaff_EBX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  FUN_0010bc40();
  *(undefined4 *)(unaff_EBX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(unaff_EBX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  FUN_001d3090();
  *(undefined4 *)(unaff_EBX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(unaff_EBX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(unaff_EBX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(unaff_EBX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(unaff_EBX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(unaff_EBX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  FUN_001d3180();
  FUN_001d32a0();
  *(undefined1 *)(unaff_EBX + 0x2f4) = *(undefined1 *)(param_1 + 0x2f4);
  *(undefined4 *)(unaff_EBX + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(unaff_EBX + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(unaff_EBX + 0x300) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(unaff_EBX + 0x304) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(unaff_EBX + 0x308) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(unaff_EBX + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(unaff_EBX + 0x310) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(unaff_EBX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(unaff_EBX + 0x318) = *(undefined4 *)(param_1 + 0x318);
  FUN_0010bc40();
  *(undefined4 *)(unaff_EBX + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(unaff_EBX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(unaff_EBX + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(unaff_EBX + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(unaff_EBX + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(unaff_EBX + 0x340) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(unaff_EBX + 0x344) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(unaff_EBX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(unaff_EBX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(unaff_EBX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(unaff_EBX + 0x354) = *(undefined4 *)(param_1 + 0x354);
  *(undefined4 *)(unaff_EBX + 0x358) = *(undefined4 *)(param_1 + 0x358);
  *(undefined4 *)(unaff_EBX + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
  *(undefined4 *)(unaff_EBX + 0x360) = *(undefined4 *)(param_1 + 0x360);
  puVar4 = (undefined4 *)(param_1 + 0x364);
  puVar5 = (undefined4 *)(unaff_EBX + 0x364);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0001f4f0(param_1 + 0x378,0,0xffffffff);
  *(undefined4 *)(unaff_EBX + 0x394) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(unaff_EBX + 0x398) = *(undefined4 *)(param_1 + 0x398);
  FUN_001d59e0();
  *(undefined4 *)(unaff_EBX + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(unaff_EBX + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(unaff_EBX + 0x3b4) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(unaff_EBX + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(unaff_EBX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(unaff_EBX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(unaff_EBX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  uVar1 = *(undefined4 *)(param_1 + 0x3d0);
  uVar2 = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(unaff_EBX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(unaff_EBX + 0x3cc) = uVar2;
  *(undefined4 *)(unaff_EBX + 0x3d0) = uVar1;
  return;
}
