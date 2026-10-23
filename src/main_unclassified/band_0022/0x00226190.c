/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41149BA1D1B1E02568D93A936990D96A0E0D2F5363F8CF15FA68A7B90677E829
 * Entry: 0x00226190, Ghidra index: 7640, label: FUN_00226190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 * FUN_00226190(undefined1 *param_1)

{
  int iVar1;
  undefined1 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003086a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003086a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = *in_ECX;
  iVar1 = FUN_0025ae60(param_1);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  FUN_00226220();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
