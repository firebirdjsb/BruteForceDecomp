/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F5DFF86497ED2B84EDBF25827927D894725D1A9320923C23B7861EEFA0D334C
 * Entry: 0x001decc0, Ghidra index: 6666, label: FUN_001decc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001decc0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309950;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1b8) {
    if (param_3 != 0) {
      FUN_001ca1d0();
      *(undefined4 *)(param_3 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined4 *)(param_3 + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
      *(undefined1 *)(param_3 + 0x1b0) = *(undefined1 *)(param_1 + 0x1b0);
      *(undefined4 *)(param_3 + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
    }
    param_3 = param_3 + 0x1b8;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
