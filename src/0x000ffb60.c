/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A1EB988445898062F12E67B6E8B60D0335AFEAC198EF950C2CE4A88D04C461
 * Entry: 0x000ffb60, Ghidra index: 3203, label: FUN_000ffb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_000ffb60(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (int)param_1;
  iVar7 = 0;
  uVar3 = 0;
  if ((*(int *)((int)param_1 + 0x74) != 0) &&
     (iVar6 = *(int *)((int)param_1 + 0x78) - *(int *)((int)param_1 + 0x74) >> 2, iVar6 != 0)) {
    param_1 = (int *)0x0;
    iVar4 = FUN_000ffb00(iVar1);
    if (iVar4 != -1) {
      param_1 = *(int **)(*(int *)(iVar1 + 0x74) + iVar4 * 4);
    }
    *param_2 = -1;
    *param_3 = -1;
    *param_4 = -1;
    *param_6 = -1;
    *param_5 = -1;
    if (0 < iVar6) {
      do {
        piVar5 = *(int **)(*(int *)(iVar1 + 0x74) + iVar7 * 4);
        cVar2 = (**(code **)(*piVar5 + 0x14))();
        if (cVar2 != '\0') {
          if (*param_5 == -1) {
            *param_5 = iVar7;
          }
          if (*param_6 < iVar7) {
            *param_6 = iVar7;
          }
          if (piVar5 == param_1) {
            *param_2 = iVar7;
          }
          else {
            piVar5 = param_3;
            if ((*param_2 == -1) || (piVar5 = param_4, *param_4 == -1)) {
              *piVar5 = iVar7;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    uVar3 = 1;
  }
  return uVar3;
}
