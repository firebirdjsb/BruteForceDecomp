/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A5F4062C7C21BCE36B1AC5EFE12C007C68A84792F609A66A38623F494673D8B
 * Entry: 0x000a7c90, Ghidra index: 1997, label: FUN_000a7c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307e20; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_00307e20;

int FUN_000a7c90(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307e20;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x1c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_000a8410(in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
