/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16D8C26D1CB58071D287EB37A18B4832FC204F18DAC069B6C9630BE0040A94EE
 * Entry: 0x001de980, Ghidra index: 6661, label: FUN_001de980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001de980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308c90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)param_3 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      param_3[10] = 0xf;
      param_3[9] = 0;
      if ((uint)param_3[10] < 0x10) {
        puVar1 = param_3 + 5;
      }
      else {
        puVar1 = (undefined4 *)param_3[5];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(param_1 + 4,0,0xffffffff);
    }
    param_3 = param_3 + 0xb;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
