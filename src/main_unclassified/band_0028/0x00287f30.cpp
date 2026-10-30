/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FCF098729A28E3ACB3252B0B2E6D764FA10CF45EBCFC3177F54B138BC0019C0
 * Entry: 0x00287f30, Ghidra index: 9099, label: FUN_00287f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00287f30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308a20; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a20U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_002878e0(param_4,param_1);
    param_3 = param_3 + 0x18;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
