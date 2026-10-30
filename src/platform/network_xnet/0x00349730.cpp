/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B411E24E8874F78AED24281CCE92CC11BB0C0088917EF744CB54FED8A463AD2
 * Entry: 0x00349730, Ghidra index: 12918, label: FUN_00349730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349730(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 2) != '\0') {
    FUN_0034964a(param_1,param_2);
    for (iVar1 = 0x4c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}
