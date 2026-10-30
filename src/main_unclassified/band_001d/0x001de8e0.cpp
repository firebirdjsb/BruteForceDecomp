/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD285CFF1C21EA49DCD5CA488F7F3BCF536373C23E2B99AF2D2E4A0A5AB01FC1
 * Entry: 0x001de8e0, Ghidra index: 6660, label: FUN_001de8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de8e0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003091a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003091a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x3d4) {
    if (param_3 != 0) {
      FUN_001c9a40(param_3);
    }
    param_3 = param_3 + 0x3d4;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
