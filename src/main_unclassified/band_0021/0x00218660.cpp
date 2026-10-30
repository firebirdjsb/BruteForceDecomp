/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0714BBD99D7FD6DB7A43615F9F919260A8246363E993FB1269A1E26E8C02B82F
 * Entry: 0x00218660, Ghidra index: 7477, label: FUN_00218660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00218660(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00306fe0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00306fe0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x40);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    FUN_00218bb0();
  }
  *unaff_FS_OFFSET = local_10;
  return puVar1;
}
