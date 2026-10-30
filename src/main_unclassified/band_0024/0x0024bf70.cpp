/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1AA5BD089A9F9DDA189AE1893736F957632E174DB08A299686A5FF402DC1925
 * Entry: 0x0024bf70, Ghidra index: 8279, label: FUN_0024bf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024bf70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308aa0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308aa0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_0024bc00(param_4);
    param_3 = param_3 + 0x50;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
