/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 083066764DD474ABF52777254AA4EACF1AF0EDDC30EABCF5FAFD8E462375F527
 * Entry: 0x002542e0, Ghidra index: 8410, label: FUN_002542e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002542e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return 0;
}
