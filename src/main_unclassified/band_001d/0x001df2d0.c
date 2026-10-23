/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4B4D54B7D30A469D6C085EDD845EFC05A2CFEE35A7D1703AD2F45254892D59D
 * Entry: 0x001df2d0, Ghidra index: 6676, label: FUN_001df2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df2d0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309a80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    if (param_3 != 0) {
      FUN_001ca740();
    }
    param_3 = param_3 + 0x70;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
