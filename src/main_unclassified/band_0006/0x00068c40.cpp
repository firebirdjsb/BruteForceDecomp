/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34F72379915AE46555F83D9073C16F04BA0F4ABE28227CAF6CFA05471849E0FC
 * Entry: 0x00068c40, Ghidra index: 1156, label: FUN_00068c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e35e0(byte param_1);

void FUN_00068c40(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = *(int *)(unaff_EBX + 8);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    *(undefined4 *)(unaff_EBX + 0x10) = 0;
    return;
  }
  iVar1 = *(int *)(unaff_EBX + 0xc);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 8));
}
