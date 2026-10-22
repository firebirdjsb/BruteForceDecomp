/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14D7D7300466B887F03E3D2BEE4CF468B7FF60EF76A9AE9140ABF1260F9846E1
 * Entry: 0x0024b960, Ghidra index: 8258, label: FUN_0024b960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b960(int param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309580;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_00248040(param_1,in_ECX);
    }
    param_1 = param_1 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
