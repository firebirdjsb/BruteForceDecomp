/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F38FDFF93230F69C798CCAC4FEC665E7A1BF502361736AE51EFE595464E86DF
 * Entry: 0x0033bfe2, Ghidra index: 12541, label: FUN_0033bfe2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033bfe2(int param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 - 1U) / 500;
  if ((param_1 - 1U) % 500 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}
