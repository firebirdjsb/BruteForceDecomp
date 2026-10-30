/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 272D8B6226E7E71DFA6ADB357164883953D1AB60A8B39338FF84905CE89733C6
 * Entry: 0x001d13a0, Ghidra index: 6241, label: FUN_001d13a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d13a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EBX;
      FUN_0003d730(param_1 + 1,unaff_EBX + 1);
      param_1 = param_1 + 0xd;
    } while (param_1 != param_2);
  }
  return;
}
