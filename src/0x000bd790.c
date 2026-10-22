/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15089376E489A2EBF756DEC9666B7126B6F2789050B9325ADEFBA2D8A7A15297
 * Entry: 0x000bd790, Ghidra index: 2309, label: FUN_000bd790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bd790(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_000c8570(iVar1);
    iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 4);
    if (iVar3 != 0) {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(*(int *)(param_1 + 0x30) + 8);
      }
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 != 0) {
        iVar6 = 0;
        uVar7 = 1;
        do {
          iVar4 = 0;
          piVar5 = (int *)(iVar1 + 0x34);
          do {
            if (*piVar5 == iVar3) {
              if (iVar4 != 0) goto LAB_000bd7ee;
              break;
            }
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 2;
          } while (iVar4 < 5);
          FUN_000c84e0();
LAB_000bd7ee:
          uVar2 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
          if (uVar2 <= uVar7) {
            return;
          }
          iVar6 = iVar6 + 4;
          if (uVar7 < uVar2) {
            iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 8) + iVar6);
          }
          else {
            iVar3 = 0;
          }
          iVar3 = *(int *)(iVar3 + 4);
          uVar7 = uVar7 + 1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}
