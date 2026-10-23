/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DE513B2CF05ACD79DC34A29C1844B52C6E5F43CF40891106780F8C50864473E
 * Entry: 0x001df400, Ghidra index: 6678, label: FUN_001df400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001df400(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309a70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    if (param_3 != 0) {
      FUN_001ca7c0(param_3);
    }
    param_3 = param_3 + 0x24;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
