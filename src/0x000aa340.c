/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37D0BE7982CD6D99D96F761016E68E2F41420DE674E22A33917A90FCDA99F138
 * Entry: 0x000aa340, Ghidra index: 2031, label: FUN_000aa340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000aa340(undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  
  if (!isnan(param_2) && param_2 < 0.0 != (param_2 == 0.0)) {
    return 0xf04ed2c0;
  }
  if (!isnan(param_2) && param_2 < 2.5 != (param_2 == 2.5)) {
    return 0x34dd808;
  }
  if (!isnan(param_2) && param_2 < 7.5 != (param_2 == 7.5)) {
    return 0x8658e99;
  }
  uVar1 = 0x1bb20b3b;
  if (isnan(param_2) || param_2 < 15.0 == (param_2 == 15.0)) {
    uVar1 = 0xe8b101f3;
  }
  return uVar1;
}
