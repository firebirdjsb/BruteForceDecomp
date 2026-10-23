/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5DB5899C11F0A8C49EC805E4F6980C8BEF38FF425A0CCB2771EBAD411B65F3E
 * Entry: 0x001de220, Ghidra index: 6649, label: FUN_001de220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001de220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309110;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x11) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 3);
      FUN_001cc3b0(param_3 + 4);
      param_3[8] = param_1[8];
      FUN_001e0dd0(param_3 + 9);
      FUN_001e0dd0(param_3 + 0xd);
    }
    param_3 = param_3 + 0x11;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
