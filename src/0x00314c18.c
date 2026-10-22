/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DED71F7EDEC9B702D418B8B68B45ED204BD657EC85AD695C4173440A954590E
 * Entry: 0x00314c18, Ghidra index: 12084, label: FUN_00314c18
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00314c18(undefined4 param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *param_2;
  uVar2 = 0;
  if (sVar1 == 1) {
    FUN_0031496b(param_1,param_2);
  }
  else if (sVar1 == 0x69) {
    FUN_00314994(param_1,param_2);
  }
  else if (sVar1 == -2) {
    uVar2 = FUN_003149bb(param_1,param_2);
  }
  return uVar2;
}
