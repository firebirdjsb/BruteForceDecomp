/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80378AE9B4A33A045724E62BCF2F332EC81A2EFDF5D46C336DE2258DCAD955E9
 * Entry: 0x001de4c0, Ghidra index: 6653, label: FUN_001de4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de4c0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308cb0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308cb0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x44) {
    if (param_3 != 0) {
      FUN_001c9830(param_3);
    }
    param_3 = param_3 + 0x44;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
