/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD5781A59C33A25B791FE830E8D965322B2C498FB0B087E47F16C81024A90952
 * Entry: 0x001d9e10, Ghidra index: 6486, label: FUN_001d9e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9e10(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307070;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dce50(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
