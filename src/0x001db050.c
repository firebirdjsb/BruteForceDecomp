/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6489313F8757E575172A14145BFC280047FEB267A70FCEC7649EB06BCBF5C3DE
 * Entry: 0x001db050, Ghidra index: 6514, label: FUN_001db050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db050(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308750;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd0f0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
