/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 641CEEB02CE2194E7A254AF5DB3D73C8EF745ED9189FDBE9DC6E37B0A5C18D71
 * Entry: 0x001e0f70, Ghidra index: 6726, label: FUN_001e0f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0f70(int param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307370; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307370U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  uVar1 = FUN_001e0fe0();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}
