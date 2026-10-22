/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FD7B3E76DB05297D95B751368CB3A3456D604D01D1FA3B2EFD6C93A7B6571F8
 * Entry: 0x001da0a0, Ghidra index: 6491, label: FUN_001da0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da0a0(int param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308d90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c95f0(in_ECX);
    }
    param_1 = param_1 + 0x134;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
