/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ADEDDC68502D97F498237091A1EC319A7B6E302458370066D82156D6EDA3DD9
 * Entry: 0x000b8d70, Ghidra index: 2234, label: FUN_000b8d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b8d70(void)

{
  char cVar1;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int *piVar2;
  
  cVar1 = (**(code **)*unaff_ESI)(unaff_EBX + 0x130c);
  if (cVar1 != '\0') {
    if (*(undefined4 **)(unaff_EBX + 0x1348) == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0x1348);
    }
    if (piVar2 != *(int **)(unaff_EBX + 0x1348)) {
      do {
        cVar1 = (**(code **)*unaff_ESI)(piVar2[2]);
        if (cVar1 == '\0') {
          return;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(unaff_EBX + 0x1348));
    }
    if (*(undefined4 **)(unaff_EBX + 0x1364) == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0x1364);
    }
    if (piVar2 != *(int **)(unaff_EBX + 0x1364)) {
      do {
        cVar1 = (**(code **)*unaff_ESI)(piVar2[2]);
        if (cVar1 == '\0') {
          return;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(unaff_EBX + 0x1364));
    }
    if (*(undefined4 **)(unaff_EBX + 0x1354) == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0x1354);
    }
    if (piVar2 != *(int **)(unaff_EBX + 0x1354)) {
      do {
        cVar1 = (**(code **)*unaff_ESI)(piVar2[2]);
        if (cVar1 == '\0') {
          return;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(unaff_EBX + 0x1354));
    }
    (**(code **)*unaff_ESI)(*(undefined4 *)(unaff_EBX + 0x135c));
  }
  return;
}
