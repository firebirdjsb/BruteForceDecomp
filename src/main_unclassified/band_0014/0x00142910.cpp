/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4402E07D059F9154F89C31D853E3CD2B75832D59BF010D6C9D22B24AE2B5E35A
 * Entry: 0x00142910, Ghidra index: 4126, label: FUN_00142910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped address 0x00309870; label semantic type and definition not recovered. */
extern unsigned char LAB_00309870;

int FUN_00142910(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00309870;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x20);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00142ae0(in_stack_00000010,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
