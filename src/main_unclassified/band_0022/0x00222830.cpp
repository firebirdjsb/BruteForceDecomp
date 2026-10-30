/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC4F59D13C913C157D98C989C101B9495164E1A2AA8C3480AB0AC9DE3617DD9A
 * Entry: 0x00222830, Ghidra index: 7585, label: FUN_00222830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00222830(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307b00; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307b00U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x14);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001faef0();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
