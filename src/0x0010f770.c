/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A756C5C4D70A9091F6C9EA2B38CA91A725F151356B0D9A5A015CB337D99F6D4
 * Entry: 0x0010f770, Ghidra index: 3532, label: FUN_0010f770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0010f770(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  *param_1 = *unaff_EBX;
  param_1[2] = 0;
  if (unaff_EBX[2] != 0) {
    FUN_0008f6a0(unaff_EBX[2]);
  }
  param_1[4] = 0;
  if (unaff_EBX[4] != 0) {
    FUN_0008f6a0(unaff_EBX[4]);
  }
  param_1[5] = unaff_EBX[5];
  return param_1;
}
