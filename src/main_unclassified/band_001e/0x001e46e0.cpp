/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7171EE2B5337029340AE7F3FBBA92E4E16CFC6B3DB048D9B58E3F1E72DCFECB5
 * Entry: 0x001e46e0, Ghidra index: 6780, label: FUN_001e46e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e46e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307020; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307020U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x358);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1 = puVar1 + 2;
    for (iVar2 = 0xd4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_4;
      param_4 = param_4 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
