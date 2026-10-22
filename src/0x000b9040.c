/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E965B6A428E085E1520F06220664CF5F89941410D7CDF1601F02B6B4A8B17E21
 * Entry: 0x000b9040, Ghidra index: 2236, label: FUN_000b9040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000b9040(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int unaff_EDI;
  
  (**(code **)(*(int *)(unaff_EDI + 0x130c) + 0x1c))(param_1);
  if ((*(byte *)(DAT_00469ab0 + 4) & 1) != 0) {
    if (*(undefined4 **)(unaff_EDI + 0x1348) == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(unaff_EDI + 0x1348);
    }
    if (piVar3 != *(int **)(unaff_EDI + 0x1348)) {
      do {
        (**(code **)(*(int *)piVar3[2] + 0x1c))(param_1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(unaff_EDI + 0x1348));
    }
  }
  if (*(undefined4 **)(unaff_EDI + 0x1364) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(unaff_EDI + 0x1364);
  }
  if (piVar3 != *(int **)(unaff_EDI + 0x1364)) {
    do {
      piVar1 = (int *)piVar3[2];
      cVar2 = (**(code **)(*piVar1 + 0x20))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar1 + 0x1c))(param_1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(unaff_EDI + 0x1364));
  }
  if (*(undefined4 **)(unaff_EDI + 0x1354) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(unaff_EDI + 0x1354);
  }
  if (piVar3 != *(int **)(unaff_EDI + 0x1354)) {
    do {
      (**(code **)(*(int *)piVar3[2] + 0x1c))(param_1);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(unaff_EDI + 0x1354));
  }
  (**(code **)(**(int **)(unaff_EDI + 0x135c) + 0x1c))(param_1);
  return;
}
