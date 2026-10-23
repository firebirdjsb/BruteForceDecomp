/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08192E1D12F0FAA5585B7109B9F313141DD117F816DABE5C0782ADC91ECA35FE
 * Entry: 0x0034c9ec, Ghidra index: 12979, label: FUN_0034c9ec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c9ec(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  while (*in_ECX != 0) {
    uVar1 = FUN_0034c30c();
    FUN_0034c826(uVar1);
  }
  return;
}
