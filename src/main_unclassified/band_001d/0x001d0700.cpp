/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03BD95987DA03906429EE1EF77E67063456010E51CC06606C083920B58A2CE75
 * Entry: 0x001d0700, Ghidra index: 6183, label: FUN_001d0700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D1F40 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d1f40(void);
void FUN_001d0700(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_001d1f40();
  }
  return;
}
