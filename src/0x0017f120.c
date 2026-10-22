/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BB6F92BCEFAE5DF5BD8A53AF8D0D1EF81DEF9CA963648731808C7F82794C253
 * Entry: 0x0017f120, Ghidra index: 5120, label: FUN_0017f120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017f120(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_0017ee90();
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00182990();
    uVar2 = FUN_00181630(param_2,(float)fVar3);
    return uVar2;
  }
  return 0;
}
