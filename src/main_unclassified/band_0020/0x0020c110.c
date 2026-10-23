/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B8D70500E8835E47435AEAE337658490DE7218E6233FE81676C4801D002E4C0
 * Entry: 0x0020c110, Ghidra index: 7348, label: FUN_0020c110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c110(int param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307360; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307360U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  uVar1 = FUN_00052f20();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}
