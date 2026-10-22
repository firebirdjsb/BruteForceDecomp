/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27D03690F34C6170691D287B13F331BD18E669056DC51A3674A636B8F2D46E5C
 * Entry: 0x0024b6d0, Ghidra index: 8254, label: FUN_0024b6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b6d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308ab0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bcb0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
