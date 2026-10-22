/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 388964905EA97BA4E4A6B8350AF9B05FB806EE2653860BE3FD49DF97522E6530
 * Entry: 0x0017d520, Ghidra index: 5072, label: FUN_0017d520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d520(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    (**(code **)(*(int *)*param_1 + 4))();
    iVar1 = FUN_00234c90();
    if (iVar1 == 0) break;
  }
  *unaff_EDI = param_1;
  return;
}
