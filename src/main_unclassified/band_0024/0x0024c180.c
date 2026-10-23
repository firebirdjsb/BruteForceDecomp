/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A10FC17DFC31F6338439A80193829D80B6BA329CAD4D61EA65C7894A2F9BC4
 * Entry: 0x0024c180, Ghidra index: 8282, label: FUN_0024c180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024c180(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308a90; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a90U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_0024bcf0(param_4);
    param_3 = param_3 + 0x24;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
