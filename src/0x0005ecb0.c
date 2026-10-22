/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D4794C25682C0FBFBF944CB463579C86CDF0931D2B51C5C8F72D0C2244EE43B
 * Entry: 0x0005ecb0, Ghidra index: 997, label: FUN_0005ecb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005ecb0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003076e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001f7bf0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
