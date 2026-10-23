/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6860A5CF1E6CAC70F90F57D2C02243A64907D1FDC2EA211B3189757CA94A98C
 * Entry: 0x001f9d40, Ghidra index: 7080, label: FUN_001f9d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_001f9d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = param_2;
  cVar2 = FUN_001f8c90(param_1,param_2,param_3);
  param_3 = bf_x86_word_replace_lo8(param_3,(uint8_t)cVar2);
  if (cVar2 == '\0') {
    param_2 = 0x162b262;
    FUN_000ee450(param_1,&param_2,uVar1);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
