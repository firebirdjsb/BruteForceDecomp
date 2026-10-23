/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99BEEF069389BB2D4DE2976B4D94789D286F7C2F3377202F22F63B5B0911F60F
 * Entry: 0x0021d800, Ghidra index: 7542, label: FUN_0021d800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0021d800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00306fd0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00306fd0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x14);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0021d930(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
