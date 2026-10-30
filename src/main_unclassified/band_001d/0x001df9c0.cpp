/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9E16C5EA178F702FFC1269397053FC933DF3863DB848C45A7C66C74D7F958E7
 * Entry: 0x001df9c0, Ghidra index: 6687, label: FUN_001df9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df9c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309b70; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309b70U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_001dd2b0(param_4);
    param_3 = param_3 + 0xc;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
