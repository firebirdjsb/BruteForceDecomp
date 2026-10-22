/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD4E113C3F44F99D83B93CB5AC356A74E95F4B876008E798F5636F914EA7E5DB
 * Entry: 0x000fb8a0, Ghidra index: 3135, label: FUN_000fb8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fb8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003070d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x18);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0017a550(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
