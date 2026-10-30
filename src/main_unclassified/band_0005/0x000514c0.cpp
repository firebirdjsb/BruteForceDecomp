/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B10857208D5131E0AF3CC21711305B0E94CC3B79B1E2C966BD024F68FFC1A72
 * Entry: 0x000514c0, Ghidra index: 739, label: FUN_000514c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000514c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  while( true ) {
    iVar1 = in_ECX * 2 + 2;
    if (unaff_ESI <= iVar1) break;
    if (**(int **)(param_1 + iVar1 * 4) < **(int **)(param_1 + -4 + iVar1 * 4)) {
      iVar1 = in_ECX * 2 + 1;
    }
    *(undefined4 *)(param_1 + in_ECX * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    in_ECX = iVar1;
  }
  if (iVar1 == unaff_ESI) {
    *(undefined4 *)(param_1 + in_ECX * 4) = *(undefined4 *)(param_1 + -4 + unaff_ESI * 4);
  }
  FUN_00051520(param_1,param_2);
  return;
}
