/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC5DB63AE1F49A2A31C8177798C7F5578C7A3ADB0D15752F5D578FB0EBFA2441
 * Entry: 0x002db390, Ghidra index: 10280, label: FUN_002db390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db390(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0xc4) = *(undefined4 *)(unaff_EDI + 0x30);
  *(undefined4 *)(unaff_EDI + 0xc0) = *(undefined4 *)(unaff_EDI + 0x2c);
  FUN_002da200();
  *(undefined4 *)(unaff_EDI + 0xc0) = *(undefined4 *)(unaff_EDI + 0x20);
  iVar4 = 0;
  *(undefined4 *)(unaff_EDI + 0xc4) = *(undefined4 *)(unaff_EDI + 0x28);
  if (0 < *(int *)(unaff_EDI + 0x3c)) {
    do {
      iVar1 = iVar4 * 4;
      iVar2 = iVar4 * 4;
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(unaff_EDI + 0x30) + iVar3) =
           *(float *)(*(int *)(unaff_EDI + 0x30) + iVar1) -
           *(float *)(*(int *)(unaff_EDI + 0x14) + iVar2);
    } while (iVar4 < *(int *)(unaff_EDI + 0x3c));
  }
  iVar4 = 0;
  if (0 < *(int *)(unaff_EDI + 0x44)) {
    do {
      *(undefined4 *)
       (*(int *)(unaff_EDI + 0x30) + *(int *)(*(int *)(unaff_EDI + 0x34) + iVar4 * 4) * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 0x44));
  }
  iVar4 = *(int *)(unaff_EDI + 0x3c) + -1;
  while (-1 < iVar4) {
    iVar4 = iVar4 + -1;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x24) + 4 + iVar4 * 4) =
         *(undefined4 *)(*(int *)(unaff_EDI + 0x30) + 4 + iVar4 * 4);
    *(undefined4 *)(*(int *)(unaff_EDI + 0x1c) + 4 + iVar4 * 4) =
         *(undefined4 *)(*(int *)(unaff_EDI + 0x2c) + 4 + iVar4 * 4);
  }
  return;
}
