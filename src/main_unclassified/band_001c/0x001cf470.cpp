/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61514D8FEF603AA3465D4671DD08DF8B5D774954C0D91BD0E58F855C9208B908
 * Entry: 0x001cf470, Ghidra index: 6111, label: FUN_001cf470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *unaff_EBX;
    FUN_001d4120();
  }
  return;
}
