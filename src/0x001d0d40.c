/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA32A3C9BD8BAE07AA3ABB5B4D73D44452F32F2444F21F3B6DBE7ABDECCA0C4E
 * Entry: 0x001d0d40, Ghidra index: 6213, label: FUN_001d0d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *unaff_EBX;
    FUN_001d59e0();
  }
  return;
}
