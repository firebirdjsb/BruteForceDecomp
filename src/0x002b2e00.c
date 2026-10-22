/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBC4838D51A346FDB57436D186E51C4ACF8422A3713C3C1AE3C01D056B0443BC
 * Entry: 0x002b2e00, Ghidra index: 9752, label: FUN_002b2e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b2e00(void)

{
  uint *puVar1;
  uint *puVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(in_EAX + 0x90);
  if ((*puVar1 & 0xc) == 0) {
    if ((*puVar1 & 0x30) != 0) {
      FUN_002bd4e0();
    }
    if ((char)puVar1[0x19] < '\b') {
      uVar5 = (uint)*(ushort *)((int)puVar1 + 0x52);
      while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
        FUN_002b32b0(*(undefined4 *)(puVar1[0x15] + uVar5 * 4),1);
      }
      puVar1[0x62] = puVar1[0x3b];
      puVar1[99] = puVar1[0x3c];
      puVar1[100] = puVar1[0x3d];
      puVar1[0x65] = puVar1[0x3e];
      puVar1[0x6a] = puVar1[0x2f];
      puVar1[0x6b] = puVar1[0x30];
      puVar1[0x6c] = puVar1[0x31];
      puVar2 = (uint *)puVar1[0x5c];
      *(double *)(puVar1 + 0x5e) = *(double *)(puVar1[3] + 0x108) - 20.0;
      FUN_002bda00();
      FUN_002bd5c0();
      iVar3 = FUN_002bd910(puVar2);
      if (iVar3 != 0) {
        FUN_002bda00();
        FUN_002bd7a0(puVar2,iVar3);
        FUN_002bd5c0();
      }
      *puVar2 = *puVar2 & 0xfffffcff;
      uVar4 = FUN_002be350(puVar1[3]);
      return uVar4;
    }
  }
  return 1;
}
