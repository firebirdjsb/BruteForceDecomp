/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EFB325AFBE657656BC1A0C756058248C40133192594FDD1EB174ADD418E0EBB
 * Entry: 0x0012a050, Ghidra index: 3761, label: FUN_0012a050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307120; extern label with unresolved link definition. */
extern unsigned char LAB_00307120;

int FUN_0012a050(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307120;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x24);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0012aa50(in_stack_00000010,in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
