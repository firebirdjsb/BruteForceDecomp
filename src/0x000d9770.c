/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75E0301BAAF8088B05E41946539A9B7907CF4ABFDC3BFEC95A332A20D8F1BF92
 * Entry: 0x000d9770, Ghidra index: 2680, label: FUN_000d9770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d9770(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  
  if (*(undefined4 **)(unaff_EBX + 0xc28) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(unaff_EBX + 0xc28);
  }
  if (piVar4 != *(int **)(unaff_EBX + 0xc28)) {
    do {
      if ((param_2 == -1) || (*(int *)(piVar4[2] + 4) == param_2)) {
        piVar1 = (int *)piVar4[2];
        if ((*(byte *)(piVar1 + 5) & 2) == 0) {
          if (((*(byte *)(piVar1 + 5) & 4) == 0) &&
             (cVar2 = (**(code **)(*piVar1 + 8))(param_1), cVar2 == '\0')) goto LAB_000d97e8;
        }
        else {
          cVar2 = (**(code **)(*piVar1 + 4))(param_1);
          if (cVar2 == '\0') {
LAB_000d97e8:
            if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)piVar4[2])(1);
            }
            piVar1 = (int *)*piVar4;
            if (piVar4 != *(int **)(unaff_EBX + 0xc28)) {
              *(int **)piVar4[1] = piVar1;
              *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(piVar4);
            }
            piVar4 = piVar1;
            if (piVar1 == (int *)*(int *)(unaff_EBX + 0xc28)) {
              return;
            }
          }
          else if ((*(int *)(piVar4[2] + 4) == 1) && (iVar3 = FUN_0001b460(), iVar3 != 0)) {
            *(undefined4 *)(unaff_EBX + 0xc10) = 0x40a00000;
          }
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != *(int **)(unaff_EBX + 0xc28));
  }
  return;
}
