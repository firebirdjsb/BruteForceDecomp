/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 346A8C126159EBB57A630671125BB943CB924508DA3B0719A07C25A2933F722E
 * Entry: 0x00299ba0, Ghidra index: 9391, label: FUN_00299ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299ba0(void)

{
  int iVar1;
  int *in_EAX;
  int in_ECX;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *in_EAX - in_ECX;
  iVar1 = in_EAX[1];
  if (iVar1 == 0) {
    if (0 < iVar2) {
      FUN_00299580(5,iVar2,-iVar2);
      return;
    }
    if (iVar2 < 0) {
      FUN_00299580(4,-1 - iVar2,-iVar2);
      return;
    }
  }
  else {
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) {
      if (0 < iVar1) {
        *(char *)(*(int *)(**(int **)(unaff_EDI + 8) + 0x10) + -1 + iVar1) = -(char)iVar2;
        FUN_00299360();
        return;
      }
    }
    else {
      if (0 < iVar1) {
        *(undefined1 *)(*(int *)(**(int **)(unaff_EDI + 8) + 0x10) + -1 + iVar1) = 0;
        FUN_00299360();
      }
      FUN_00299580(5,iVar2,-iVar2);
    }
  }
  return;
}
