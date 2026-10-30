/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6CB35EF2E2D0E290D4915A0F7237F490CF6488C74B95CE4AE71870577CF6221
 * Entry: 0x001429f0, Ghidra index: 4128, label: FUN_001429f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped address 0x00308910; label semantic type and definition not recovered. */
extern unsigned char LAB_00308910;

int FUN_001429f0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308910;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x20);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00142b10(in_stack_00000010,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
