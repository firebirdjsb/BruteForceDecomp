/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7EFB135B6B23F930DB5C6AB5EB5937EA2372D6FA711BA4AF6834F004D03753D
 * Entry: 0x000ff730, Ghidra index: 3195, label: FUN_000ff730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00306e60; extern address-only, definition TODO. */
extern unsigned char LAB_00306e60;

/* Original 0x000ff753 allocator return remains in EAX through 0x000ff796 RET 16.
 * EAX is a 32-bit guest address, not a native host allocation ABI.
 * TODO: guest32 allocation/memory translation and Xbox SEH are ABI_UNVERIFIED. */
undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00306e60;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = *param_4;
  }
  *unaff_FS_OFFSET = local_10;
  return (undefined4)(uintptr_t)puVar1;
}
