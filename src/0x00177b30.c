/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D15944179CB9F3283F385EA66F6AC97BE9C9F4A322DD6A56EEDB64007473332
 * Entry: 0x00177b30, Ghidra index: 4956, label: FUN_00177b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00177b30(void)

{
  int *piVar1;
  undefined2 *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x736);
  *in_EAX = 0;
  if (((iVar3 != -1) && (iVar3 != 0)) && (iVar3 != -1)) {
    FUN_00235b40();
    iVar3 = *(int *)(in_EAX + 0x736);
    if (iVar3 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar3);
    }
    *(undefined4 *)(in_EAX + 0x736) = 0xffffffff;
  }
  puVar2 = (undefined4 *)(in_EAX + 6);
  iVar3 = 2;
  do {
    piVar1 = (int *)puVar2[-1];
    puVar2 = puVar2 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
