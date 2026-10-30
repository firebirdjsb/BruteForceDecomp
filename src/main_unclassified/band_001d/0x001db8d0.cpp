/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32086EACD0FFAB8FBE2DA8423AA6F4ED981CB118F5479081139BC9F2B04AB4C1
 * Entry: 0x001db8d0, Ghidra index: 6528, label: FUN_001db8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db8d0(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307830; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307830U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001d2840();
    }
    param_1 = param_1 + 0x88;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
