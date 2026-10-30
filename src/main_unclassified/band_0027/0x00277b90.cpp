/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 395BC4AAD40C0D358C08E4DACBB8EBF914EF5554E7C45FBD98A1C518A0DC2D85
 * Entry: 0x00277b90, Ghidra index: 8913, label: FUN_00277b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00277b90(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00306ed0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00306ed0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}
