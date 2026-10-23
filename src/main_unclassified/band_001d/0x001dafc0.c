/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC7597D63F7E171F1FAD9E862363037F246CCBF1C27FDDA44B158113ADD9200A
 * Entry: 0x001dafc0, Ghidra index: 6513, label: FUN_001dafc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dafc0(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308760;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c9830(param_1);
    }
    param_1 = param_1 + 0x44;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
