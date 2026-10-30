/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C03EA2B7F7FC9F6823D5E97F93B16F674EF8D88FEA97EAF7B2C5D1CB0E4B6623
 * Entry: 0x001de860, Ghidra index: 6659, label: FUN_001de860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de860(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307bc0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307bc0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    if (param_3 != 0) {
      FUN_001d1f40();
    }
    param_3 = param_3 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
