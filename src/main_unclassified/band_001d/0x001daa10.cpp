/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64E29A45FCFA22C48BBBCDB21F2024116C05EE21C5B1BD33FF8C85BFAC639BD3
 * Entry: 0x001daa10, Ghidra index: 6504, label: FUN_001daa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001daa10(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309250; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309250U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcfe0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
