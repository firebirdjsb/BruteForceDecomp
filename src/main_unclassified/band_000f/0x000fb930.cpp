/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 513B2EAD2A6CEBC59E5BF79D5C8978FB44FB71461D0ABBF7CB7D6F26EC98935B
 * Entry: 0x000fb930, Ghidra index: 3136, label: FUN_000fb930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00306ea0; extern address-only, definition TODO. */
extern unsigned char LAB_00306ea0;

int FUN_000fb930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00306ea0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x18);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00181350(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
