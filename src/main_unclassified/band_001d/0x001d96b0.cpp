/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C58BB648D16B8F72FB7B15148E6F9D0D03F2B5222D4C3EA035F158030C3B8CF
 * Entry: 0x001d96b0, Ghidra index: 6471, label: FUN_001d96b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d96b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307bf0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307bf0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcc70(param_4,param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
