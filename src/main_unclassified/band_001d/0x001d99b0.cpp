/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE82B86DE5F78F8715823F550DA1F4BC1D6A3E8BB1DABAA79CE2E063646F09FF
 * Entry: 0x001d99b0, Ghidra index: 6477, label: FUN_001d99b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d99b0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307890; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307890U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcd70(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
