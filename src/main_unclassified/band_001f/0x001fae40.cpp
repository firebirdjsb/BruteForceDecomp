/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B238C7AB9A37B1BD4D87DAEA758FB426F3022612CF0A6ED78C118A3867067D0F
 * Entry: 0x001fae40, Ghidra index: 7102, label: FUN_001fae40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001fae40(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307b40; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307b40U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x18);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001faec0();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
