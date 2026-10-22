/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 841265929340B0E333EFF6897ADF0E935FF062E35EBD015E4FABBA524D3BF5DE
 * Entry: 0x002dcd20, Ghidra index: 10308, label: FUN_002dcd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dcd20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  piVar3 = *(int **)(unaff_EDI + 0x20);
  if (*(int **)(unaff_EDI + 0x20) != (int *)0x0) {
    while (piVar4 = piVar3, piVar1 = (int *)*piVar4, piVar1 != (int *)0x0) {
      piVar3 = piVar1;
      if (piVar1[0x19] < piVar4[0x19]) {
        if (*(int **)(unaff_EDI + 0x20) == piVar4) {
          *(int **)(unaff_EDI + 0x20) = piVar1;
        }
        if ((int *)piVar4[1] != (int *)0x0) {
          *(int *)piVar4[1] = (int)piVar1;
        }
        if (*piVar1 != 0) {
          *(int **)(*piVar1 + 4) = piVar4;
        }
        *piVar4 = *piVar1;
        piVar1[1] = piVar4[1];
        piVar4[1] = (int)piVar1;
        *piVar1 = (int)piVar4;
        while ((puVar2 = (undefined4 *)piVar1[1], piVar3 = piVar4, puVar2 != (undefined4 *)0x0 &&
               (piVar1[0x19] < (int)puVar2[0x19]))) {
          if (*(undefined4 **)(unaff_EDI + 0x20) == puVar2) {
            *(int **)(unaff_EDI + 0x20) = piVar1;
          }
          if ((int *)puVar2[1] != (int *)0x0) {
            *(int *)puVar2[1] = (int)piVar1;
          }
          if (*piVar1 != 0) {
            *(undefined4 **)(*piVar1 + 4) = puVar2;
          }
          *puVar2 = *piVar1;
          piVar1[1] = puVar2[1];
          puVar2[1] = piVar1;
          *piVar1 = (int)puVar2;
        }
      }
    }
  }
  return;
}
