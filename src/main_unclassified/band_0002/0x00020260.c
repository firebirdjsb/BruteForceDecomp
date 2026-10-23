/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A25651703848ACB659320488349F01C1F5AA42A7DD2111E14052E939404E2FBB
 * Entry: 0x00020260, Ghidra index: 177, label: FUN_00020260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00020260(int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iStack_34;
  int *local_30;
  float local_2c;
  
  local_2c = 1e+13;
  local_30 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0x167];
    if (iVar1 != 0) {
      piVar9 = param_2;
      (**(code **)(*param_1 + 0xf4))(param_2);
      cVar5 = FUN_00045310(piVar9);
      if (cVar5 == '\0') {
        if (*(int *)(iVar1 + 4) != 0) {
          if (*(int *)(iVar1 + 4) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int **)(iVar1 + 8);
          }
          piVar9 = *(int **)(iVar6 + 4);
          if (piVar9 != (int *)0x0) {
            iStack_34 = 0;
            uVar8 = 1;
            do {
              iVar6 = (**(code **)(*piVar9 + 0xf4))();
              if (((iVar6 != 0) && ((*(byte *)(iVar6 + 0x14) & 2) != 0)) &&
                 (*(int *)(iVar6 + 0x58) == 1)) {
                iVar6 = *(int *)(iVar6 + 0x6ac);
                iVar7 = FUN_0011dfa0();
                if ((piVar9 != param_1) && (*(int **)(iVar7 + 0xc) == param_2)) {
                  local_30 = (int *)0x0;
                  break;
                }
                if ((iVar6 != 5) &&
                   ((iVar6 != 3 ||
                    (iVar6 = (**(code **)(**(int **)(iVar7 + 0xc) + 0x3c))(), iVar6 != 10)))) {
                  iVar6 = (**(code **)(*piVar9 + 0x40))();
                  fVar2 = *(float *)(iVar6 + 0x2c) - (float)param_2[7];
                  fVar3 = *(float *)(iVar6 + 0x28) - (float)param_2[6];
                  fVar4 = *(float *)(iVar6 + 0x24) - (float)param_2[5];
                  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
                  if (fVar2 < local_2c) {
                    local_30 = piVar9;
                    local_2c = fVar2;
                  }
                }
              }
              if (*(uint *)(iVar1 + 4) <= uVar8) break;
              iStack_34 = iStack_34 + 4;
              if (uVar8 < *(uint *)(iVar1 + 4)) {
                iVar6 = *(int *)(iStack_34 + *(int *)(iVar1 + 8));
              }
              else {
                iVar6 = 0;
              }
              piVar9 = *(int **)(iVar6 + 4);
              uVar8 = uVar8 + 1;
            } while (piVar9 != (int *)0x0);
          }
        }
      }
    }
    if (param_1 != local_30) {
      return 0;
    }
  }
  return 1;
}
