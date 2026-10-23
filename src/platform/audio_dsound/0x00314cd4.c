/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27722B8900610938CD51B23B1C10FC2E16CE8EE6B817D1915AA34C85BEF691E7
 * Entry: 0x00314cd4, Ghidra index: 12088, label: FUN_00314cd4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00314cd4(float param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  if (param_1 < 0.0 == (param_1 == 0.0)) {
    if (param_1 < 1.0) {
      fVar1 = (float10)log2((float10)param_1);
      uVar2 = FUN_00319a67((float)((float10)0.3010299956639812 * fVar1 * (float10)1000.0));
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffd8f0;
  }
  return uVar2;
}
