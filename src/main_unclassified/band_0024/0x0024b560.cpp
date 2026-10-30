/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7DE5A1351ED3F040B5BFD1B6CF1AB07A2E4BD4E8C61AD3B701E7F6796ED78A2
 * Entry: 0x0024b560, Ghidra index: 8252, label: FUN_0024b560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b560(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308650; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308650U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bc50(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
