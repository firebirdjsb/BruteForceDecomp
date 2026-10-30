/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2961DBA2020793A03D83E6D32BE7FD2AA9AF25D5D569455EC72A56E956F970D
 * Entry: 0x001dd350, Ghidra index: 6624, label: FUN_001dd350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dd350(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308000; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308000U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_001dcc70(param_4,param_1);
    param_3 = param_3 + 0x1c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
