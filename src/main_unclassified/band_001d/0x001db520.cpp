/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C214BF4EA4AB0451F79525B83328DDA5691DFFC1078FE20D0443E41B0498EE2
 * Entry: 0x001db520, Ghidra index: 6522, label: FUN_001db520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db520(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308730; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308730U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c9e70();
    }
    param_1 = param_1 + 0x124;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
