/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6E71DC89FB9F49F05FC6F09C2B7C759519EDAE840E23F4D3A9E7AE07EE97BD9
 * Entry: 0x002f4b72, Ghidra index: 10871, label: WaitForMultipleObjects
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__WaitForMultipleObjects
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  WaitForMultipleObjectsEx(param_1,param_2,param_3,param_4,0);
  return;
}
