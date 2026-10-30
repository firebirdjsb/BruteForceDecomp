/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56F26705D2152DEC8C7E0C8E7197999E4FF751694664348039853D75798DD446
 * Entry: 0x00088610, Ghidra index: 1634, label: FUN_00088610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005b5d0(byte param_1);
extern undefined4 FUN_0008a720(undefined4 *param_1,int *param_2);
extern uint FUN_0008a890(int param_1);

void FUN_00088610(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_18 [5];
  
  if ((-1 < param_2) && (param_2 < 2)) {
    iVar2 = 0;
    piVar5 = (int *)((param_2 + 2) * 0x10 + param_1);
    do {
      if (*piVar5 == 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    piVar5 = (int *)(param_2 * 0x20 + 0x58 + param_1);
    piVar6 = piVar5;
    while (*piVar6 == 0) {
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 2;
      if (3 < iVar2) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x58 + (iVar2 + param_2 * 4) * 8) != 0) {
      iVar2 = 0;
      do {
        iVar3 = FUN_000884b0(param_1,param_2);
        iVar4 = 0;
        if ((iVar3 != 0) && (iVar4 = FUN_0008af20(), iVar4 == 0)) {
          FUN_0005b5d0(1);
        }
        aiStack_18[iVar2] = iVar4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      iVar2 = 4;
      do {
        piVar6 = (int *)*piVar5;
        if (piVar6 != (int *)0x0) {
          iVar4 = 0;
          do {
            if ((aiStack_18[iVar4] != 0) &&
               (*piVar6 == *(int *)(*(int *)(aiStack_18[iVar4] + 0xc) + 8))) {
              cVar1 = FUN_0008a720(piVar6,aiStack_18[iVar4]);
              if (cVar1 == '\0') {
                FUN_0008a890(piVar6);
              }
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
        }
        piVar5 = piVar5 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
