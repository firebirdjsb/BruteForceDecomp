/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BD95A8E4402B7066EF65CD9631385A8FF13705733A0D561441B5401FE153390
 * Entry: 0x0025de80, Ghidra index: 8583, label: FUN_0025de80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0025de80(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00308a40; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00308a40U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x28);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0025dfc0(iVar1,in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
