/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B5FA43058A0026BAAF9202BD02E7AC8F99A107E8C43BD58BD5AC2FCAFB21232
 * Entry: 0x00235ac0, Ghidra index: 7818, label: FUN_00235ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00235ac0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x17] = 0xcbcbcbcb;
  piVar1 = (int *)unaff_ESI[0x16];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[0x16] = 0;
  }
  iVar2 = unaff_ESI[4];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(iVar2 + 0x3c));
    }
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  unaff_ESI[4] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  piVar1 = (int *)unaff_ESI[0x16];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[0x16] = 0;
  }
  if (unaff_ESI[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x13]);
  }
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  return;
}
