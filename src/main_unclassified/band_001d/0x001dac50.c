/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C0463E22329D5314F07C0A06DADCF5246CEFF8A9A4C7420B9FB5830087A555A
 * Entry: 0x001dac50, Ghidra index: 6507, label: FUN_001dac50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dac50(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309220;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd040(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
