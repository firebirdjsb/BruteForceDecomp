/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AC83A168A9E235F6EF3DF00C51ACF3CA49CB71593CF0A6A67F34F607088BACA
 * Entry: 0x002adbd0, Ghidra index: 9698, label: FUN_002adbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002adbd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307270;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_002adc80(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
