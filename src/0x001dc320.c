/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9498CB651FE39F322468A1F9ECE4E8DB29277DB878A16886D85FB4BBC59C8A06
 * Entry: 0x001dc320, Ghidra index: 6546, label: FUN_001dc320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc320(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309aa0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca850(param_1);
    }
    param_1 = param_1 + 0x6c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
