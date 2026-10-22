/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E7B7476481FA5D82D593A2878F2B7DC3EEB100CE30A13BBB7FD142110A62BD4
 * Entry: 0x001dee20, Ghidra index: 6668, label: FUN_001dee20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dee20(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307b90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x3c) {
    if (param_3 != 0) {
      FUN_001ca330();
    }
    param_3 = param_3 + 0x3c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
