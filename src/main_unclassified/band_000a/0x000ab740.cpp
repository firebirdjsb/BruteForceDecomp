/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 204F4D5085297909391343E63FF5394466E7CC9831C9630AAB865F810E8A345C
 * Entry: 0x000ab740, Ghidra index: 2047, label: FUN_000ab740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ab740(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint in_EAX;
  uint uVar4;
  int unaff_ESI;
  
  uVar4 = in_EAX & 0xffffff00;
  if ((((*(byte *)(*(int **)(unaff_ESI + 100) + 0x13) & 1) != 0) ||
      ((*(byte *)(unaff_ESI + 0x74) & 2) != 0)) ||
     ((*(byte *)(*(int *)(unaff_ESI + 0x6c) + 0x4c) & 1) != 0)) {
    (**(code **)(**(int **)(unaff_ESI + 100) + 0x14))(0x3f800000);
    iVar2 = *(int *)(unaff_ESI + 100);
    sVar3 = *(short *)(unaff_ESI + 0xc) - *(short *)(iVar2 + 0xc);
    *(short *)(iVar2 + 4) =
         (short)(((int)*(short *)(unaff_ESI + 0xe) - (int)*(short *)(iVar2 + 0xe)) / 2);
    *(short *)(iVar2 + 6) = sVar3 + 1;
    (**(code **)(**(int **)(unaff_ESI + 0x6c) + 0x14))(0x3f800000);
    iVar2 = *(int *)(unaff_ESI + 0x6c);
    sVar1 = *(short *)(unaff_ESI + 0xe);
    *(short *)(iVar2 + 6) = sVar3 + -0xd;
    *(short *)(iVar2 + 4) = (sVar1 - *(short *)(iVar2 + 0xe)) + -4;
    uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar4;
}
