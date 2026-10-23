/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DB5D3888D4CED7056EED43207D8F1B2B24272160E080F12765050F04898EA71
 * Entry: 0x00167ed0, Ghidra index: 4736, label: FUN_00167ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *unaff_ESI;
  
  iVar5 = 0;
  if (0 < param_1) {
    do {
      iVar3 = 0;
      iVar4 = iVar3;
      if (3 < param_1) {
        do {
          if (iVar5 == iVar4) {
            uVar2 = 0x3f800000;
          }
          else {
            uVar2 = 0;
          }
          *(undefined4 *)(*(int *)(unaff_ESI + 4) + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar4) * 4) =
               uVar2;
          if (iVar5 == iVar4 + 1) {
            uVar2 = 0x3f800000;
          }
          else {
            uVar2 = 0;
          }
          *(undefined4 *)
           (*(int *)(unaff_ESI + 4) + 4 + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar4) * 4) = uVar2;
          if (iVar5 == iVar4 + 2) {
            uVar2 = 0x3f800000;
          }
          else {
            uVar2 = 0;
          }
          *(undefined4 *)
           (*(int *)(unaff_ESI + 4) + 8 + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar4) * 4) = uVar2;
          if (iVar5 == iVar4 + 3) {
            uVar2 = 0x3f800000;
          }
          else {
            uVar2 = 0;
          }
          iVar3 = iVar4 + 4;
          *(undefined4 *)
           (*(int *)(unaff_ESI + 4) + 0xc + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar4) * 4) = uVar2;
          iVar1 = iVar4 + 7;
          iVar4 = iVar3;
        } while (iVar1 < param_1);
      }
      for (; iVar3 < param_1; iVar3 = iVar3 + 1) {
        if (iVar5 == iVar3) {
          uVar2 = 0x3f800000;
        }
        else {
          uVar2 = 0;
        }
        *(undefined4 *)(*(int *)(unaff_ESI + 4) + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar3) * 4) =
             uVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  return;
}
