/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17EE853C4DC4F694FA710510B018A093064F56D13D8ABD44DA5EAF01D5A662D6
 * Entry: 0x00057140, Ghidra index: 845, label: FUN_00057140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00057140(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  if (0 < *(short *)(unaff_EDI + 0x72)) {
    if (*(int *)(in_EAX + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x1c;
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      iVar4 = iVar3 * 0x1c;
      do {
        iVar2 = *(int *)(*(int *)(in_EAX + 4) + 8 + iVar4);
        if ((iVar2 == unaff_EDI) || (*(int *)(*(int *)(in_EAX + 4) + iVar4 + 0x10) == unaff_EDI)) {
          if (iVar2 != 0) {
            *(short *)(iVar2 + 0x72) = *(short *)(iVar2 + 0x72) + -1;
          }
          iVar2 = *(int *)(iVar4 + 0x10 + *(int *)(in_EAX + 4));
          if (iVar2 != 0) {
            psVar1 = (short *)(iVar2 + 0x72);
            *psVar1 = *psVar1 + -1;
          }
          FUN_00057d90(local_4,*(int *)(in_EAX + 4) + iVar4);
          if (*(short *)(unaff_EDI + 0x72) == 0) {
            return;
          }
        }
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + -0x1c;
      } while (-1 < iVar3);
    }
  }
  return;
}
