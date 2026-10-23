/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1713667CF5FCDDE5F456BBCF61CC2889DE79D1346BC23A174B44C773ED154373
 * Entry: 0x0024c090, Ghidra index: 8281, label: FUN_0024c090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024c090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309570;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[7] = 0xf;
      param_3[6] = 0;
      if ((uint)param_3[7] < 0x10) {
        puVar1 = param_3 + 2;
      }
      else {
        puVar1 = (undefined4 *)param_3[2];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(param_1 + 1,0,0xffffffff);
      *(undefined1 *)(param_3 + 8) = *(undefined1 *)(param_1 + 8);
      param_3[9] = param_1[9];
      param_3[10] = param_1[10];
      *(undefined1 *)(param_3 + 0xb) = *(undefined1 *)(param_1 + 0xb);
      FUN_00248740(param_3 + 0xc);
    }
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
