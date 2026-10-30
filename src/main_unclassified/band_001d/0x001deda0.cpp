/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D54F930D7DAD8164B6F4D94380138837F22F92604E98201C310AB5634D8BCBD7
 * Entry: 0x001deda0, Ghidra index: 6667, label: FUN_001deda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001deda0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307ba0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307ba0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x88) {
    if (param_3 != 0) {
      FUN_001d2840();
    }
    param_3 = param_3 + 0x88;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
