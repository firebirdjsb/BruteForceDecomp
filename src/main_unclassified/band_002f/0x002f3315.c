/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC851AE15EFC89ECF9707FCC0691322DA82701CBD0E7D5BAE1806C4554F3A021
 * Entry: 0x002f3315, Ghidra index: 10828, label: XCalculateSignatureUpdate
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XCalculateSignatureUpdate(int param_1,undefined4 param_2,undefined4 param_3)

{
  XcSHAUpdate(param_1 + 8,param_2,param_3);
  return 0;
}
