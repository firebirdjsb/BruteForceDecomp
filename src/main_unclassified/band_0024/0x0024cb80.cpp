/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BE028F758C21EA5CB831F9B218EC2670CB5F2F63AB0044CD34DB945BD650FB
 * Entry: 0x0024cb80, Ghidra index: 8296, label: FUN_0024cb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024cb80(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int *piVar4;
  int local_4;
  
  FUN_0024ec90();
  puVar1 = *(undefined4 **)(in_EAX + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_001298b0(&local_4,uVar3,puVar1);
  if (*(int *)(in_EAX + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x78));
  }
  *(undefined4 *)(in_EAX + 0x78) = 0;
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  *(undefined4 *)(in_EAX + 0x80) = 0;
  piVar4 = *(int **)(in_EAX + 0x68);
  if (piVar4 != *(int **)(in_EAX + 0x6c)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(in_EAX + 0x6c));
  }
  if (*(int *)(in_EAX + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x68));
  }
  *(undefined4 *)(in_EAX + 0x68) = 0;
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  *(undefined4 *)(in_EAX + 0x70) = 0;
  local_4 = **(int **)(in_EAX + 0x5c);
  if ((int *)local_4 != *(int **)(in_EAX + 0x5c)) {
    do {
      iVar2 = local_4;
      if (*(undefined4 **)(local_4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4 + 0x10))(1);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      FUN_0012aba0();
    } while (local_4 != *(int *)(in_EAX + 0x5c));
  }
  iVar2 = *(int *)(*(int *)(in_EAX + 0x5c) + 4);
  if (*(char *)(iVar2 + 0x15) == '\0') {
    FUN_0024f830(*(undefined4 *)(iVar2 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  *(int *)(*(int *)(in_EAX + 0x5c) + 4) = *(int *)(in_EAX + 0x5c);
  *(undefined4 *)(in_EAX + 0x60) = 0;
  *(undefined4 *)*(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(in_EAX + 0x5c);
  *(int *)(*(int *)(in_EAX + 0x5c) + 8) = *(int *)(in_EAX + 0x5c);
  *(undefined2 *)(in_EAX + 0x54) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}
