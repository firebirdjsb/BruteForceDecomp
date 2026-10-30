/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D708FF9861F2DC7A575783D2C924A0FFD6175E3AA1F1F18F4627AEF6141717C6
 * Entry: 0x0020c490, Ghidra index: 7353, label: FUN_0020c490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c490(int param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307b30; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307b30U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  uVar1 = FUN_0020d190(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}
