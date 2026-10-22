/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C4203B1D993BD376B271CC9C327AE3B2EE1D8F29F4271637EAE75C7114EC810
 * Entry: 0x003815f0, Ghidra index: 13570, label: FUN_003815f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003815f0(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 2) || ((param_1 & param_1 - 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
