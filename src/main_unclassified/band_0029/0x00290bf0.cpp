/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 053F05865A8360C572F7445DF95E1DF00ACA8A02895FC68F4C12BE7BCC359343
 * Entry: 0x00290bf0, Ghidra index: 9230, label: FUN_00290bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00290bf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_2 != 0x7162cc) {
    FUN_00290810(param_1,param_2,param_5);
    return;
  }
  FUN_0029d4f0(param_1);
  return;
}
