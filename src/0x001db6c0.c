/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D29A342DD6429E6F762F8E795826A70766E6A3FE2E98B5A811B50428EDF8B168
 * Entry: 0x001db6c0, Ghidra index: 6525, label: FUN_001db6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db6c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309210;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd160(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
