/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDB0A23C9F5EE1C71FCB1AE0A247B236C2CF942683190E807DBB535E484B117C
 * Entry: 0x0023bbc0, Ghidra index: 7917, label: FUN_0023bbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023bbc0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003076c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x24);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0023bd70();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
