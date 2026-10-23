/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD1FD4F163F50717594AF45DE1A198C891652D20096540E169F4EE047E9F6E29
 * Entry: 0x00139090, Ghidra index: 3935, label: FUN_00139090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image address 0x00308fb0; address-only label pending link definition. */
extern unsigned char LAB_00308fb0;

int FUN_00139090(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308fb0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x24);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001391f0(in_stack_00000010,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
