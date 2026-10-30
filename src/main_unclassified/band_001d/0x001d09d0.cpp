/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61907AD727A08F5407A8012726028836129F6CC841745F4C2A7A74D5CB570FC4
 * Entry: 0x001d09d0, Ghidra index: 6197, label: FUN_001d09d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D26F0 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d26f0(void);
void FUN_001d09d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1a8) {
    FUN_001d26f0();
  }
  return;
}
