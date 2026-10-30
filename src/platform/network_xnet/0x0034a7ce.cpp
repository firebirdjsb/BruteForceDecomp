/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D14E3C71EC026C0B84C1B482BCEBC3906E84BAD3C22AC1C20F2D5EC226973F67
 * Entry: 0x0034a7ce, Ghidra index: 12935, label: FUN_0034a7ce
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a7ce(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00347fe3(param_1,param_2,param_3);
  KeRaiseIrqlToDpcLevel();
  FUN_0034a72a(param_1,param_4);
  KfLowerIrql();
  return;
}
