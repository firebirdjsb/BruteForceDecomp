/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7A7D8B3A4209C1D12247AAB5C0A95A66F8DBD5188ACD7FCAD6CAFD760B4EEF6
 * Entry: 0x001daf50, Ghidra index: 6512, label: FUN_001daf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001daf50(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307410; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307410U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_001dd0c0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
