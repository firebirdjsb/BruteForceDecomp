/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 914FD93128D67BE9F6C481317959EA800BF95A916943082D57582B62749A4B31
 * Entry: 0x00149b70, Ghidra index: 4275, label: FUN_00149b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00149b70(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  if (*(int *)(unaff_EBX + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0x2c));
  }
  *(undefined4 *)(unaff_EBX + 0x2c) = 0;
  *(undefined4 *)(unaff_EBX + 0x30) = 0;
  *(undefined4 *)(unaff_EBX + 0x34) = 0;
  iVar2 = 0;
  while (iVar1 = *(int *)(unaff_EBX + iVar2 * 4), iVar1 == 0) {
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      return;
    }
  }
  if (*(int *)(iVar1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
