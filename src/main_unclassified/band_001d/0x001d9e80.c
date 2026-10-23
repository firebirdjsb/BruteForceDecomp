/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8AC412386BB74FCDC1C2747FE9FE43FCF972542AA0ACD26ACF85F0ACC512C8D
 * Entry: 0x001d9e80, Ghidra index: 6487, label: FUN_001d9e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9e80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308db0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dce70(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
