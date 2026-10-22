/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCBC5C1AF62439E0496D87202BCC7807E5A878DEF69095FAA3EDCB54D2E3DE9A
 * Entry: 0x002f512c, Ghidra index: 10888, label: XPhysicalProtect
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XPhysicalProtect(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x002f5133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    MmSetAddressProtect();
    return;
  }
  return;
}
