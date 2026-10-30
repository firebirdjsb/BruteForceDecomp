/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25A08E8B64AD140B0A89D93C9DF34383ADE41C10F06FD6119F23EC8787364AAD
 * Entry: 0x0024be50, Ghidra index: 8277, label: FUN_0024be50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024be50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308a60; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a60U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_0024bbb0(param_4);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
