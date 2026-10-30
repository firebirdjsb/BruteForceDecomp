/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 623535E3A853E418386E49A792496FB82296A016CE4DD9561EC227F467428D2B
 * Entry: 0x0004eb40, Ghidra index: 682, label: FUN_0004eb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004eb40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int unaff_EDI;
  
  FUN_0001b650();
  piVar6 = *(int **)(in_EAX + 4);
  piVar1 = *(int **)(in_EAX + 8);
  do {
    if (piVar6 == piVar1) {
      iVar5 = *(int *)(unaff_EDI + 8);
      if (((**(int **)(iVar5 + -4) == 0) && (*(int *)(unaff_EDI + 4) != 0)) &&
         (iVar5 - *(int *)(unaff_EDI + 4) >> 2 != 0)) {
        *(int *)(unaff_EDI + 8) = iVar5 + -4;
      }
      return;
    }
    puVar2 = *(undefined4 **)(unaff_EDI + 8);
    puVar4 = *(undefined4 **)(unaff_EDI + 4);
    if (puVar4 != puVar2) {
      do {
        if (*(int *)*puVar4 == *piVar6) break;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar2);
      if (puVar4 != puVar2) {
        puVar3 = puVar4 + 1;
        if (puVar3 != puVar2) {
          iVar5 = (int)puVar4 - (int)puVar3;
          do {
            *(undefined4 *)(iVar5 + (int)puVar3) = *puVar3;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar2);
        }
        *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + -4;
      }
    }
    if (0.0 <= (float)piVar6[1]) {
      FUN_001611d0();
    }
    piVar6 = piVar6 + 0x20;
  } while( true );
}
