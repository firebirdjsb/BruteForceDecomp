/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 049170A114155276061D360DC3336740CA7539777BC844E53BDE923DF22AC274
 * Entry: 0x002e5bf0, Ghidra index: 10489, label: FUN_002e5bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e5bf0(int param_1)

{
  int in_ECX;
  
  if (param_1 == -6) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + *(int *)(*(int *)(in_ECX + 0x24) + 8) * 4);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 * 4);
}
