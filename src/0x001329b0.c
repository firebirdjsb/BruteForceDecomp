/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10516BFCD7EB0FF3AA43A3A4FBB40F3CD1D023436E25DDBF44AF25CC0D5E5BB1
 * Entry: 0x001329b0, Ghidra index: 3857, label: FUN_001329b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001329b0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307560;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00132a20(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
