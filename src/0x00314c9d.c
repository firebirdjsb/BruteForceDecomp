/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF0389864BC3ECA37FFB2CF6412894C11A4A3C3A4CE16D22ED8FE70D7D7EE1E2
 * Entry: 0x00314c9d, Ghidra index: 12087, label: FUN_00314c9d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00314c9d(float param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  if (param_1 < 0.0) {
    uVar2 = 0;
  }
  else {
    fVar1 = (float10)log2((float10)param_1 + (float10)1.0);
    uVar2 = FUN_00319a67((float)((float10)0.3010299956639812 * fVar1 * (float10)-2000.0));
  }
  return uVar2;
}
