/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42E638F333AB757497E9794B77D7417D29A6050006562DF551904EEF26C9CA08
 * Entry: 0x001326c0, Ghidra index: 3847, label: FUN_001326c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001326c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_001327c0();
  }
  return;
}
