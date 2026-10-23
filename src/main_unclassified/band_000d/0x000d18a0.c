/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AF79ABC2274089DD794B674AA7A9E59A5D388E838D57FA3DCB2433A7FEE48C1
 * Entry: 0x000d18a0, Ghidra index: 2602, label: FUN_000d18a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d18a0(void)

{
  float fVar1;
  int iVar2;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0xc) != 0) {
    iVar2 = 0;
    if (*(int **)(unaff_EBX + 8) != (int *)0x0) {
      iVar2 = **(int **)(unaff_EBX + 8);
    }
    iVar2 = *(int *)(iVar2 + 8);
    fVar1 = *(float *)(iVar2 + 0xc);
    if (fVar1 < 3.4028235e+38 != (fVar1 == 3.4028235e+38)) {
      FUN_000e3e90();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  return;
}
