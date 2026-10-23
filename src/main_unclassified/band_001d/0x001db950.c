/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 358D258D5EB9BA4F4F8E479788FCE056F9AA7808A51087EF6E3EAB7D03CC7509
 * Entry: 0x001db950, Ghidra index: 6529, label: FUN_001db950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db950(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307820;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca330();
    }
    param_1 = param_1 + 0x3c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
