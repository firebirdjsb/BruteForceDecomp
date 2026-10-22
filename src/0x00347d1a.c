/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A679D02DC31B19F316A4E6E0D105F664F1426238D55D7056B28B4B46B933CBD
 * Entry: 0x00347d1a, Ghidra index: 12883, label: FUN_00347d1a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347d1a(int param_1)

{
  if (param_1 == 0) {
    KfLowerIrql();
  }
  else {
    KeRaiseIrqlToDpcLevel();
  }
  return;
}
