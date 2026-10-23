/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F71737DD85C5B3D68F82EFE2E57A390EF0089E045665CBB43FA3CFF0EBFDD2AB
 * Entry: 0x001dec20, Ghidra index: 6665, label: FUN_001dec20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dec20(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309670; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309670U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1a8) {
    if (param_3 != 0) {
      FUN_001ca1d0();
    }
    param_3 = param_3 + 0x1a8;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
