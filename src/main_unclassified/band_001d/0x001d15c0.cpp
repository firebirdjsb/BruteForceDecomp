/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 279E22F81F02737132375ADCD9C40C9AF3BE08B18283AEBCB4A6BB1CC67C4EEB
 * Entry: 0x001d15c0, Ghidra index: 6250, label: FUN_001d15c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d15c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    FUN_001d2e90();
  }
  return;
}
