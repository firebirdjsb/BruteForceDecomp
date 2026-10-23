/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91AA602A3B622EDE6C1402B28CAB04045E867C9D4B50D5D03E73DC15A05C5D35
 * Entry: 0x001d9f80, Ghidra index: 6489, label: FUN_001d9f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9f80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308da0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dceb0(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
