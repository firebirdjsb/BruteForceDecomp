/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C753B620736AFD654658F1D450B9426B1F3EA21122A41BFC102FFF84617FC45B
 * Entry: 0x0004c030, Ghidra index: 630, label: FUN_0004c030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004c030(float *param_1,int param_2,int param_3,int *param_4,float param_5,int param_6,
                 int param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (*param_4 == 0) {
    piVar1 = *(int **)(param_7 + 8);
    piVar7 = *(int **)(param_7 + 4);
    if (piVar7 != piVar1) {
      do {
        if (*piVar7 == param_2) break;
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar1);
      if (piVar7 != piVar1) {
        return;
      }
    }
    fVar4 = *(float *)(param_2 + 0x14) - *param_1;
    fVar6 = *(float *)(param_2 + 0x18) - param_1[1];
    fVar5 = *(float *)(param_2 + 0x1c) - param_1[2];
    if (param_5 < fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) {
      *param_4 = param_2;
      return;
    }
    if (param_6 != 0) {
      FUN_001611d0();
      puVar8 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_2 + 0x30) != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)**(undefined4 **)(param_2 + 0x30);
      }
      puVar2 = *(undefined4 **)(param_2 + 0x30);
      for (; puVar8 != puVar2; puVar8 = (undefined4 *)*puVar8) {
        iVar3 = puVar8[3];
        if (((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 4) != 0)) && (iVar3 != param_3)) {
          FUN_0004c030(param_1,iVar3,param_2,param_4,param_5,param_6 + -1,param_7);
        }
      }
    }
  }
  return;
}
