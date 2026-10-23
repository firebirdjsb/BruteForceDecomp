/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CA1DC54FF3DBE4440DACE1748F92B15A4B11315299D9D09C918076AECFA4E0D
 * Entry: 0x0024b320, Ghidra index: 8248, label: FUN_0024b320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b320(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308670;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bbb0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
