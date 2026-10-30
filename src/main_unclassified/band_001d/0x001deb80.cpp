/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF9D11465B02E7F9A229DD60ABFEA79F5D489BCB7CE7E63A2B6C83349EBB148
 * Entry: 0x001deb80, Ghidra index: 6664, label: FUN_001deb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001deb80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309680; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309680U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x144) {
    FUN_001dd160(param_4);
    param_3 = param_3 + 0x144;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
