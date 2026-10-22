/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCB53A7C19896DE4C383FCD21DB91462BD09605E3675517B01F6D36ACC4056DD
 * Entry: 0x0004a280, Ghidra index: 595, label: FUN_0004a280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0004a280(float param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *unaff_EBX;
  float10 fVar6;
  
  iVar3 = (int)param_1;
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x358) + 4);
  piVar2 = (int *)*piVar1;
  param_1 = -1.0;
  while (piVar2 != piVar1) {
    piVar1 = (int *)piVar2[4];
    if ((((piVar1 != (int *)0x0) && (piVar2[0x1c] == 1)) && ((*(byte *)(piVar1 + 0x1c) & 1) == 0))
       && ((iVar5 = (**(code **)(*piVar1 + 0xf4))(), iVar5 != 0 &&
           ((unaff_EBX == (int *)0x0 ||
            (cVar4 = (**(code **)(*unaff_EBX + 8))(piVar2 + 3), cVar4 != '\0')))))) {
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
      fVar6 = (float10)FUN_0004a3a0(iVar3,piVar1,0);
      param_1 = (float)(fVar6 + (float10)param_1);
    }
    FUN_0001c5d0();
    piVar1 = *(int **)(*(int *)(iVar3 + 0x358) + 4);
  }
  return (float10)param_1;
}
