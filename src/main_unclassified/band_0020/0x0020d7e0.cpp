/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDE65B1729CA115BD3E6EF5477D536AD5DFD4FE36612D35C2661E7D04BADDF5E
 * Entry: 0x0020d7e0, Ghidra index: 7383, label: FUN_0020d7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020d7e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307fb0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307fb0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_3 != param_4; param_3 = (undefined4 *)*param_3) {
    FUN_0020c1f0(param_2);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
