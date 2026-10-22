/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ED9B62F60C7631444A422A682A0A4FE03E1AA48DE64EBC415D7958B2B282E6C
 * Entry: 0x0004b6d0, Ghidra index: 614, label: FUN_0004b6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004b6d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307ed0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001f7bf0(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
