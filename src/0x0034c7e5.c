/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9C5C6E3F5EF2A460505D8DF9189D558365150DEFE3BBBB22D914AFF9056B3F4
 * Entry: 0x0034c7e5, Ghidra index: 12968, label: FUN_0034c7e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c7e5(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  KeRaiseIrqlToDpcLevel();
  XcRC4Crypt(in_ECX + 0x84,param_2,param_1);
  KfLowerIrql();
  return;
}
