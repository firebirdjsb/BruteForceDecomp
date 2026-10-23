/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1280D125D1E0430FC9E5D8A1DAAA606F43E227D10B03092F585C9F57AEA51313
 * Entry: 0x001deea0, Ghidra index: 6669, label: FUN_001deea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001deea0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309190; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309190U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x128) {
    if (param_3 != 0) {
      FUN_001ca050();
    }
    param_3 = param_3 + 0x128;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
