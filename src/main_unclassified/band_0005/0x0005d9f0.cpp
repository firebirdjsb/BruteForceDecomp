/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D56FD5CB778006799F0170E0772CF24A5D1E2D945D7F0DEBF1BA9786E5FD43E0
 * Entry: 0x0005d9f0, Ghidra index: 970, label: FUN_0005d9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
/* Xbox image VA 0x00307200; address-only label. Link definition and role unverified. */
extern void FUN_0005dac0(undefined4 param_1,undefined4 param_2,undefined1 param_3);

extern unsigned char LAB_00307200;

int FUN_0005d9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307200;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x20);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0005dac0(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
