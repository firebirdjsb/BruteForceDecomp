/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9E1641B5FF92FC990E1859654927D63F22B87151670BC7350EDB541C03F58AE
 * Entry: 0x001de190, Ghidra index: 6648, label: FUN_001de190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de190(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309600; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309600U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x3c) {
    FUN_001dd040(in_ECX);
    param_3 = param_3 + 0x3c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
