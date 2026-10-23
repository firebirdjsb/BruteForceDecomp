/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC2CFFEF2447CB1606A0A36C1E7B43E6738DD67502876C54876C173F7CC82584
 * Entry: 0x001df820, Ghidra index: 6685, label: FUN_001df820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001df820(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308c70; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308c70U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[7] = 7;
      param_3[6] = 0;
      if ((uint)param_3[7] < 8) {
        puVar1 = param_3 + 2;
      }
      else {
        puVar1 = (undefined4 *)param_3[2];
      }
      *(undefined2 *)puVar1 = 0;
      FUN_00087940(param_3 + 1,0,0xffffffff);
      param_3[0xe] = 0xf;
      param_3[0xd] = 0;
      if ((uint)param_3[0xe] < 0x10) {
        puVar1 = param_3 + 9;
      }
      else {
        puVar1 = (undefined4 *)param_3[9];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(param_1 + 8,0,0xffffffff);
      param_3[0xf] = param_1[0xf];
    }
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
