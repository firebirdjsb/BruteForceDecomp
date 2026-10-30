/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5AE7F6A42A0BC4DBC0E6518ED124144A3B49A26ACFFDF1C65141935D5AF570D
 * Entry: 0x001db1b0, Ghidra index: 6516, label: FUN_001db1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db1b0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00308d50; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308d50U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd110(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
