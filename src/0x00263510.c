/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EF8D02626E6B8EBB25170C33535C48E5072198083E4646A2F5685F16B603C18
 * Entry: 0x00263510, Ghidra index: 8680, label: FUN_00263510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263510(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00306e00;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_002635c0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
