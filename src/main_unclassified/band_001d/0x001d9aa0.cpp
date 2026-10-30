/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71BA23E26C0ACCCD7BBF54812DBAEF800C8D62FDAD41C32C3EEFE97F24435745
 * Entry: 0x001d9aa0, Ghidra index: 6479, label: FUN_001d9aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9aa0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307480; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307480U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcd30(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
