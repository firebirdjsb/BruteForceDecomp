/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E940F49B170EA3134D5B96C5E65243BD72C355EB5EA42377197229ADB7DEB357
 * Entry: 0x00086af0, Ghidra index: 1594, label: FUN_00086af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086af0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307e40;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00086d60(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
