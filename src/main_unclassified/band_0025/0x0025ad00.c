/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE490B1D29A1AE91E3D0E158FB2B3F25FEC161A8560B6B5445D9448F6A31360E
 * Entry: 0x0025ad00, Ghidra index: 8528, label: FUN_0025ad00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0025ad00(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003072f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x1c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0025ae00(in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
