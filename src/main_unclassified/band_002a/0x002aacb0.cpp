/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83B78CBE8F25AA1C0F1BB27696F46852415B628477FF17CC1840615B6683482C
 * Entry: 0x002aacb0, Ghidra index: 9656, label: FUN_002aacb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002aacb0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  return 0;
}
