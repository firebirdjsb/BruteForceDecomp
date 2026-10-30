/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E66954503EC8B925CE426245C751B5C5083E73C4B5E50A8366895AE41CED7BF0
 * Entry: 0x00330ddd, Ghidra index: 12378, label: FUN_00330ddd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330ddd(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0xc) == 0x1500f0) {
    *param_2 = *(int *)(param_1 + 0x10) + 0x1c;
  }
  else {
    *param_2 = 0;
  }
  return *(undefined4 *)(param_1 + 0xc);
}
