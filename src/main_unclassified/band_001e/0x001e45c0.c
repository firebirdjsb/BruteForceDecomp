/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBB7F91741D420B0797F88C5D88B29B9ACDEBAD6F89739DB8B16E65722783043
 * Entry: 0x001e45c0, Ghidra index: 6778, label: FUN_001e45c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e45c0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003086e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x4c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001e4810();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
