/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 353D7D28D70BA9B58B73F3F82B506E52FFF63A0FC09D32DC3A4974564CE97577
 * Entry: 0x001e0040, Ghidra index: 6698, label: FUN_001e0040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e0040(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307710;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_001dce30(in_ECX);
    param_3 = param_3 + 0xc;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
