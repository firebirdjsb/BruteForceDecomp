/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE277C73A4EEE5957A2373E98F388377110D2D329889DECD5B07ACA64DA926DD
 * Entry: 0x0024b4d0, Ghidra index: 8251, label: FUN_0024b4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b4d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308660;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bc00(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
