/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D44BB2D3238C7185116C3904B6DB95FB6024A8CEE05EEAA48A991F1E967E45A
 * Entry: 0x001dd850, Ghidra index: 6633, label: FUN_001dd850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dd850(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309120;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_001dce70(param_4);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
