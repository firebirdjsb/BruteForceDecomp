/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F564616D7DD043CBABF6F41A2E97CCE58276A5CB8207FFB76973198CFA57A37A
 * Entry: 0x001dba70, Ghidra index: 6531, label: FUN_001dba70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dba70(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003091f0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003091f0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca410();
    }
    param_1 = param_1 + 0x1ac;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
