/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7648D9B8513A96CB288CC1F8AA0252380E3B1712FF257A566AE6BFE117C53C68
 * Entry: 0x001db240, Ghidra index: 6517, label: FUN_001db240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db240(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307870;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd130(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
