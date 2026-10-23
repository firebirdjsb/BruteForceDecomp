/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC91FFF57DC96C674A00F543E62F0AEDEFE62C4A73FD22A9021423260626D1CC
 * Entry: 0x001dbdc0, Ghidra index: 6537, label: FUN_001dbdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dbdc0(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308d10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ccaf0(param_1);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
