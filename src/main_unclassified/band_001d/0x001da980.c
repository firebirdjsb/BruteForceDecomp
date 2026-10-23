/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8958B9701B06D37E9FC880FC5B6F3D45833FE9465BA5F04FC268AFD1AA50B180
 * Entry: 0x001da980, Ghidra index: 6503, label: FUN_001da980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da980(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309260;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcfc0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
