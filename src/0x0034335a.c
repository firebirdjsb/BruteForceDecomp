/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 404964109F894581A2AA39B295BD31EB6E1E6630B048A60CCA93BF38283AF2AE
 * Entry: 0x0034335a, Ghidra index: 12707, label: FUN_0034335a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034335a(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  do {
    if (param_1 == 0) {
      return;
    }
    bVar1 = param_1 != *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    param_1 = *(int *)(param_1 + 0x34);
  } while (bVar1);
  return;
}
