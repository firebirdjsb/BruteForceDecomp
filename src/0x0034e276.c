/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0BED7EC7B2E3AF0438570FB5D15B4DE0E06390BB6F0E5C576AEB7D5DBAED700
 * Entry: 0x0034e276, Ghidra index: 13018, label: FUN_0034e276
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e276(int *param_1)

{
  FUN_00352e4c(param_1);
  if (*param_1 == 0 && param_1[1] == 0) {
    param_1[1] = 0;
    *param_1 = 1;
  }
  return;
}
