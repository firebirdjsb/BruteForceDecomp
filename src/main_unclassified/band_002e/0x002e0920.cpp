/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 754CF8DBD332F331BCED0662E138779410FD3704DE1761FA13241F14466970F6
 * Entry: 0x002e0920, Ghidra index: 10358, label: FUN_002e0920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0920(int param_1)

{
  if ((((param_1 != 0) && (param_1 != -1)) && (param_1 != -2)) &&
     (((param_1 != -3 && (param_1 != -4)) && ((param_1 != -5 && (*(int *)(param_1 + 0x28) != 0))))))
  {
    return 1;
  }
  return 0;
}
