/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 358C934897111768731D3B931ED0CB81D0F0B08B0C3C53E6D89F3A3329879302
 * Entry: 0x00181220, Ghidra index: 5146, label: FUN_00181220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00181220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003074c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003074c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x44);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001813e0(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
