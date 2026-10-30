/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2F4F9E5AB76B353BFF6D58C603CEC95F861F2CD12AA0EFFD02970252887F5B4
 * Entry: 0x001d9f10, Ghidra index: 6488, label: FUN_001d9f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9f10(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307060; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307060U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dce90(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
