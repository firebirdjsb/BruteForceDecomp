/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFD1D79188A89338BEC5CA04FE2FCFEC15F19DDD2446A7A16B484B492BAF7EBD
 * Entry: 0x00053c30, Ghidra index: 776, label: FUN_00053c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053c30(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307600;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00053d90(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
