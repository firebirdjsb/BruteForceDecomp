/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCBB5E2D0B78C18F318F8C789D317003AFDD029B0CFDA4A457465510641CD7F3
 * Entry: 0x00142c20, Ghidra index: 4135, label: FUN_00142c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142c20(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307f80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_3 != param_4; param_3 = (undefined4 *)*param_3) {
    FUN_000ff700(param_2);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
