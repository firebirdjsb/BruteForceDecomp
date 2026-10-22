/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD83FE4B1794968041B890A9F334DD605830CDB913A4FE171BBB17522A32B34C
 * Entry: 0x000e1910, Ghidra index: 2774, label: FUN_000e1910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e1910(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307610;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x10);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0020d1b0();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
