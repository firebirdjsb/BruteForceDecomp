/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C85F601037826616D7531355F350CA277995A302673DFFDA459560394D7E4C31
 * Entry: 0x001db330, Ghidra index: 6519, label: FUN_001db330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db330(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308d40; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308d40U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001c9a40(param_1);
    }
    param_1 = param_1 + 0x3d4;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
