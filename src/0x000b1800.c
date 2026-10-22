/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD393D6FD9C3412EF9DE4F20A46E43AC9B6104B48717459258F5786550ED2AB7
 * Entry: 0x000b1800, Ghidra index: 2121, label: FUN_000b1800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1800(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307180;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_000b1920(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
