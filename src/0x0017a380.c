/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F9D89372ED2AA6F3804413FF8D3F05CFC00E38C356A8224D933C8B54FA66F11
 * Entry: 0x0017a380, Ghidra index: 5008, label: FUN_0017a380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0017a380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003074d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x88);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    FUN_00179b40();
  }
  *unaff_FS_OFFSET = local_10;
  return puVar1;
}
