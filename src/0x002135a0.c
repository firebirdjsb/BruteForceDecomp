/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A902AC0A72C5EF525E1CA9B660261B2E8BC7E277BFFE2F38C239C35C28545FB
 * Entry: 0x002135a0, Ghidra index: 7440, label: FUN_002135a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002135a0(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = (int *)FUN_000a26a0(0xffffffff);
  piVar1 = *(int **)(unaff_EDI + 0x28);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EDI + 0x28) = 0;
    }
    *(int **)(unaff_EDI + 0x28) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return;
}
