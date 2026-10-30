/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35AF03C03313A4F83EDEC218AABCB26DE05A2FB0D65E6014599805B26E701391
 * Entry: 0x000e4420, Ghidra index: 2844, label: FUN_000e4420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e4420(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  
  bVar1 = false;
  if (*(int *)(unaff_ESI + 0x34) != 0) {
    piVar3 = (int *)0x0;
    if (*(undefined4 **)(unaff_ESI + 0x30) != (undefined4 *)0x0) {
      piVar3 = (int *)**(undefined4 **)(unaff_ESI + 0x30);
    }
    if (piVar3 != *(int **)(unaff_ESI + 0x30)) {
      do {
        if (bVar1) goto LAB_000e4476;
        if (piVar3[2] == unaff_EBX) {
          piVar2 = (int *)*piVar3;
          if (piVar3 != *(int **)(unaff_ESI + 0x30)) {
            *(int **)piVar3[1] = piVar2;
            *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar3);
          }
          bVar1 = true;
        }
        else {
          piVar2 = (int *)*piVar3;
        }
        piVar3 = piVar2;
      } while (piVar2 != *(int **)(unaff_ESI + 0x30));
      if (bVar1) {
LAB_000e4476:
        if (*(int *)(unaff_ESI + 0xc) != 0) {
          piVar3 = (int *)0x0;
          if (*(undefined4 **)(unaff_ESI + 8) != (undefined4 *)0x0) {
            piVar3 = (int *)**(undefined4 **)(unaff_ESI + 8);
          }
          if (piVar3 != *(int **)(unaff_ESI + 8)) {
            do {
              if (*(int *)piVar3[2] == unaff_EBX) {
                *(int *)piVar3[2] = 0;
              }
              piVar3 = (int *)*piVar3;
            } while (piVar3 != (int *)*(int *)(unaff_ESI + 8));
          }
        }
        *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + -1;
      }
    }
  }
  return;
}
