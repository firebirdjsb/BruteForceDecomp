/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ECF06332E106FF106624E3D4380590C5B6DCC0E7DD5A91E60A268CBCEBF186B
 * Entry: 0x00287fc0, Ghidra index: 9100, label: FUN_00287fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00287fc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003072a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003072a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    FUN_00263580(param_4);
    param_3 = param_3 + 4;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
