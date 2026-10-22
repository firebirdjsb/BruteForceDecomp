/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0940394CED87A82F34F05DC01A78B46B3B247BE0ABE0CC9FAA68A859CE6672C9
 * Entry: 0x0027a8d0, Ghidra index: 8956, label: FUN_0027a8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027a8d0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003072c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0027a940(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
