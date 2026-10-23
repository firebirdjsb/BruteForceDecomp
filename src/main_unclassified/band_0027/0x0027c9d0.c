/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28ACC1B03F50361150CEE12F4A6762203E79F99913B67DA5DFD8A0104E5E59F8
 * Entry: 0x0027c9d0, Ghidra index: 8984, label: FUN_0027c9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0027c9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003072b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x24);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0027cbb0(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
