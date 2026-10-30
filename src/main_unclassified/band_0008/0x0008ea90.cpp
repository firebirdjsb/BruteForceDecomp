/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C77468EFAF2AC67694410BD665023356BC6274BB42946005F6D1C11DE023CD6B
 * Entry: 0x0008ea90, Ghidra index: 1735, label: FUN_0008ea90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307e30; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_00307e30;

void FUN_0008ea90(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307e30;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (in_ECX < 0x6666667) {
    iVar3 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x28;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_0008f3f0(in_EDX);
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) != 0) {
        iVar3 = (*(int *)(in_EDX + 8) - *(int *)(in_EDX + 4)) / 0x28;
      }
      if (*(int *)(in_EDX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = in_ECX * 0x28 + iVar1;
      *(int *)(in_EDX + 8) = iVar1 + iVar3 * 0x28;
      *(int *)(in_EDX + 4) = iVar1;
      *unaff_FS_OFFSET = local_10;
      return;
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
