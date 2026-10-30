/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 847A2290E300E991C827776A28319E80633CEF1EDA88A6506B4628F7F6033FF0
 * Entry: 0x0024c320, Ghidra index: 8285, label: FUN_0024c320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024c320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308a80; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a80U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[0xb] = 0xf;
      param_3[10] = 0;
      if ((uint)param_3[0xb] < 0x10) {
        puVar1 = param_3 + 6;
      }
      else {
        puVar1 = (undefined4 *)param_3[6];
      }
      *(undefined1 *)puVar1 = 0;
      FUN_0001f4f0(param_1 + 5,0,0xffffffff);
      param_3[0xc] = param_1[0xc];
      param_3[0xd] = param_1[0xd];
    }
    param_3 = param_3 + 0xe;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
