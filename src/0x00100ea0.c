/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 116D8AE37EE92C89D5C1087FC883C9BF9013DAB5C93FE7685BC5E93348F2BCB5
 * Entry: 0x00100ea0, Ghidra index: 3227, label: FUN_00100ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_00100ea0(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x94);
  if (piVar1 == (int *)0x0) {
    return '\0';
  }
  if (*(int *)(in_EAX + 0x24) == -0x1355b4b8) {
    iVar3 = *(int *)(in_EAX + 4) + 0x24;
    if ((*(int *)(unaff_ESI + 4) == 0) ||
       (piVar4 = *(int **)(*(int *)(unaff_ESI + 4) + 0x94), piVar4 == (int *)0x0)) {
      (**(code **)(*piVar1 + 0x2c))(iVar3);
    }
    else {
      (**(code **)(*piVar4 + 0x2c))(iVar3);
    }
  }
  else if (*(int *)(in_EAX + 0x24) != 0x1966467f) goto LAB_00100f01;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar4 + 0x14))();
LAB_00100f01:
  cVar2 = (**(code **)(*piVar1 + 0x1c))();
  if ((cVar2 != '\0') && (*(undefined4 **)(unaff_ESI + 0xac) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0xac))();
  }
  return cVar2;
}
