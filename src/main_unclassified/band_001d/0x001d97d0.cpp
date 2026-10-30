/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 442F917361695D0AE05F7DDC8DE7245B78707B2ABF4B3709C1D008CFE5C02F26
 * Entry: 0x001d97d0, Ghidra index: 6473, label: FUN_001d97d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d97d0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003074b0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003074b0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dcce0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
