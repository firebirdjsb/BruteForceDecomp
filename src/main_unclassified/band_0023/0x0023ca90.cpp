/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42C24196BCEDBE647CECD8D0FC960039ADE39B0CBBBDD0029C2A021FC54DE6E8
 * Entry: 0x0023ca90, Ghidra index: 7939, label: FUN_0023ca90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023ca90(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003076b0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003076b0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_0023c960();
    }
    param_1 = param_1 + 0x38;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
