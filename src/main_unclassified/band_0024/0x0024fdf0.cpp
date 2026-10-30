/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F43E37B5C7EEAAD8D9800665F7BA074FB3FD8B62180713E5E8D94C87DF953224
 * Entry: 0x0024fdf0, Ghidra index: 8331, label: FUN_0024fdf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024fdf0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307a50; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307a50U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x48);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00250230(in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
