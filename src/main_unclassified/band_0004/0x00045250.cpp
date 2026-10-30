/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F18CE898204AFF515344D57D46E7AAB9BFA8F0728BD7DCC542DEC77EFBE01EC
 * Entry: 0x00045250, Ghidra index: 538, label: FUN_00045250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00045250(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  piVar3 = (int *)FUN_000120f0();
  if ((piVar3 != (int *)0x0) && (iVar1 = piVar3[0x167], iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar1 + 8);
      }
      piVar6 = *(int **)(iVar4 + 4);
      if (piVar6 != (int *)0x0) {
        iVar4 = 0;
        uVar7 = 1;
        do {
          if (((piVar3 != piVar6) && (iVar5 = (**(code **)(*piVar6 + 0xf4))(), iVar5 != 0)) &&
             ((param_3 == (int *)0x0 || (cVar2 = (**(code **)(*param_3 + 4))(piVar6), cVar2 != '\0')
              ))) {
            (**(code **)(*piVar6 + 0xf4))();
            FUN_0004dff0(param_1);
          }
          if (*(uint *)(iVar1 + 4) <= uVar7) {
            return;
          }
          iVar4 = iVar4 + 4;
          if (uVar7 < *(uint *)(iVar1 + 4)) {
            iVar5 = *(int *)(*(int *)(iVar1 + 8) + iVar4);
          }
          else {
            iVar5 = 0;
          }
          piVar6 = *(int **)(iVar5 + 4);
          uVar7 = uVar7 + 1;
        } while (piVar6 != (int *)0x0);
      }
    }
  }
  return;
}
