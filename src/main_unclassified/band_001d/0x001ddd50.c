/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1AB76D55582339FB0F54DB068774FF48A631D4E95D48F3B347672DD2F466F5E
 * Entry: 0x001ddd50, Ghidra index: 6641, label: FUN_001ddd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001ddd50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003091c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003091c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xf) {
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
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
      param_3[10] = param_1[10];
      FUN_001e0dd0(param_3 + 0xb);
    }
    param_3 = param_3 + 0xf;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
