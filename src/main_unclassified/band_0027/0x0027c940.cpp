/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A86EAF558F8F1F99C4F0713FF9A956DBB387F568E1743FFAC8A4AA051387C16
 * Entry: 0x0027c940, Ghidra index: 8983, label: FUN_0027c940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0027c940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00306e90; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00306e90U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x20);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0027cae0(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
