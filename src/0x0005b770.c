/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E1FFF3E2549746A577C095F30F98D9119C5AD404496B3DDE72B3880AABDD15C
 * Entry: 0x0005b770, Ghidra index: 923, label: FUN_0005b770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005b770(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1;
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_0005b7ae;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 8) + uVar3 * 4);
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x59c) = 0;
        FUN_0014cb60(0);
      }
LAB_0005b7ae:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar2 + 4));
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  if ((iVar1 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
    if (*(int *)(*(int *)(iVar2 + 0x24) + 0xbe0) != 0) {
      FUN_00149e10();
    }
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    if (*(undefined4 **)(iVar2 + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x14))(1);
    }
  }
  if (*(undefined4 **)(iVar2 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar2 + 0x1c))(1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  FUN_0005db00();
  iVar1 = *(int *)(iVar2 + 0x28);
  if (iVar1 != 0) {
    FUN_0005b8b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  FUN_0008f720();
  FUN_0005d4d0(&param_1,**(undefined4 **)(iVar2 + 0x38),*(undefined4 **)(iVar2 + 0x38));
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 0x38));
}
