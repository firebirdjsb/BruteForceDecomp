/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 794EC2BD49C633F29F6EEDBE66ED0D74B2F577C492CA61000511D06CDC40A075
 * Entry: 0x00079e70, Ghidra index: 1453, label: FUN_00079e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2228;
void FUN_00079e70(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  
  *unaff_ESI = &PTR_LAB_003a2228;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  unaff_ESI[0x159] = 0;
  unaff_ESI[0x15a] = 0;
  unaff_ESI[0x15b] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x15c);
  unaff_ESI[0x15d] = uVar1;
  unaff_ESI[0x15e] = 0;
  unaff_ESI[0x160] = 0;
  unaff_ESI[0x161] = 0;
  unaff_ESI[0x162] = 0;
  unaff_ESI[0x163] = 0;
  unaff_ESI[0x164] = 0;
  unaff_ESI[0x166] = 0;
  unaff_ESI[0x16a] = 0;
  unaff_ESI[0x16b] = 0;
  unaff_ESI[0x16c] = 0;
  uVar1 = FUN_00085710(unaff_ESI + 0x194);
  unaff_ESI[0x195] = uVar1;
  unaff_ESI[0x196] = 0;
  unaff_ESI[0x19d] = 0xf;
  unaff_ESI[0x19c] = 0;
  *(undefined1 *)(unaff_ESI + 0x198) = 0;
  unaff_ESI[0x1a4] = 0xf;
  unaff_ESI[0x1a3] = 0;
  *(undefined1 *)(unaff_ESI + 0x19f) = 0;
  unaff_ESI[0x1ab] = 0xf;
  unaff_ESI[0x1aa] = 0;
  *(undefined1 *)(unaff_ESI + 0x1a6) = 0;
  unaff_ESI[0x1ac] = 0;
  unaff_ESI[0x1af] = 0;
  unaff_ESI[0x1b0] = 0;
  unaff_ESI[0x1b1] = 0;
  uVar1 = FUN_00279bb0(unaff_ESI + 0x1b2);
  unaff_ESI[0x1b3] = uVar1;
  unaff_ESI[0x1b4] = 0;
  unaff_ESI[0x1b7] = 0;
  unaff_ESI[0x1b8] = 0;
  unaff_ESI[0x1b9] = 0;
  unaff_ESI[0x1ba] = 0;
  unaff_ESI[0x1bb] = 0;
  *(byte *)((int)unaff_ESI + 0x5bd) = *(byte *)((int)unaff_ESI + 0x5bd) & 0xf2;
  *(byte *)(unaff_ESI + 0x16f) = *(byte *)(unaff_ESI + 0x16f) & 0x35;
  unaff_ESI[0x170] = 0;
  unaff_ESI[0x171] = 0;
  unaff_ESI[0x172] = 0;
  puVar4 = unaff_ESI + 0x173;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(byte *)(unaff_ESI + 0x16f) = *(byte *)(unaff_ESI + 0x16f) & 0xea;
  unaff_ESI[0x16d] = 0;
  unaff_ESI[0x16e] = 0;
  puVar2 = (undefined1 *)FUN_002ea01d(0x4c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0xf;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    puVar2[0x14] = 0;
    *(undefined4 *)(puVar2 + 0x44) = 0xf;
    *(undefined4 *)(puVar2 + 0x40) = 0;
    puVar2[0x30] = 0;
    *(undefined4 *)(puVar2 + 0x48) = 0;
  }
  unaff_ESI[0x1ad] = puVar2;
  *(byte *)(unaff_ESI + 0x16f) = *(byte *)(unaff_ESI + 0x16f) & 0xdf;
  unaff_ESI[0x193] = 0;
  unaff_ESI[0x1b5] = 0;
  puVar4 = unaff_ESI + 8;
  for (iVar3 = 0x150; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(unaff_ESI + 0x1bc) = 0;
  return;
}
