/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90670878EDB73CD589353BC80C7BDB8EF0C08EAA272AD09998EFFF49EEE82599
 * Entry: 0x0028e4a0, Ghidra index: 9211, label: FUN_0028e4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028e4a0(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308610;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001e0dd0(param_1);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
