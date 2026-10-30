/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E35F03952885E8ACEA4FF0B84DF232C2DAD2948A355F6DF6D7DE89EFD3AE4D38
 * Entry: 0x002534a0, Ghidra index: 8399, label: FUN_002534a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002534a0(void)

{
  int *piVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0xc);
  if (piVar1 != unaff_ESI) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EDI + 0xc) = 0;
    }
    *(int **)(unaff_EDI + 0xc) = unaff_ESI;
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 4))();
    }
  }
  return;
}
