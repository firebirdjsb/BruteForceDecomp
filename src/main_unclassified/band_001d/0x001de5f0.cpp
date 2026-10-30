/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7EEA201E960684C5E0A3286D24AE785F9BF42F04EBA0AD32E9A242B2FFA0FB4
 * Entry: 0x001de5f0, Ghidra index: 6655, label: FUN_001de5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001de5f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309a90; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309a90U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x25) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_1 + 5);
      *(undefined1 *)((int)param_3 + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
      param_3[6] = param_1[6];
      *(undefined1 *)(param_3 + 7) = *(undefined1 *)(param_1 + 7);
      FUN_001caa30(param_3 + 8);
    }
    param_3 = param_3 + 0x25;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
