/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79B6496470940CA5BCDE90501FB860D89A20E69B734B0464FE06C71A996B7349
 * Entry: 0x002d5ff0, Ghidra index: 10234, label: FUN_002d5ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5ff0(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int unaff_ESI;
  float local_8;
  float local_4;
  
  puVar1 = (uint *)(*(uint *)(unaff_ESI + 0x2c) & 0xfffffff0);
  iVar2 = (*puVar1 & 0xfff) + 1;
  puVar3 = (uint *)(*(uint *)(unaff_ESI + 0x48) & 0xfffffff0);
  iVar4 = (*puVar3 & 0xfff) + 1;
  if (((puVar1[iVar2 * -4 + 2] & 3) == 0) ||
     (((puVar3[iVar4 * -4 + 2] & 3) != 0 &&
      (*(float *)((int)puVar1 + puVar1[iVar2 * -4 + 1] + 0x14 + iVar2 * -0x10) <=
       *(float *)((int)puVar3 + puVar3[iVar4 * -4 + 1] + 0x14 + iVar4 * -0x10))))) {
    *(undefined4 *)(unaff_ESI + 0x84) = 1;
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x84) = 0;
  }
  /* 0x2d6063-2d6072 passes the two four-byte stack slots by address.
   * The virtual target and its prototype remain ABI_UNVERIFIED. */
  (**(code **)**(undefined4 **)(*(int *)(*(int *)(unaff_ESI + 0x28) + 0x14) + 0x1c))
            (*(int *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x44),&local_8,&local_4);
  *(uint *)(unaff_ESI + 0x14) = *(uint *)(unaff_ESI + 0x14) & 0xffd3ffff | 0x100000;
  /* 0x2d6074 FLD [ESP+8], 0x2d607b FADD [ESP+C], then FSTP
   * rounds the sum to the four-byte argument for 0x002d62f0. */
  FUN_002d62f0(unaff_ESI,local_8 + local_4);
  return;
}
