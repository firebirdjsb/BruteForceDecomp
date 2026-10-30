/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74B159FA745522717D67477CFD07914446655A83EC7D91150844BC62DF21916C
 * Entry: 0x00288340, Ghidra index: 9106, label: FUN_00288340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288340(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int in_EAX;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  while ((int)param_2 < in_EAX) {
    iVar4 = (in_EAX + -1) / 2;
    piVar1 = *(int **)(param_1 + iVar4 * 4);
    puVar2 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
    puVar3 = (uint *)(**(code **)(*param_2 + 0xc))(param_2);
    if (*puVar3 <= *puVar2) break;
    piVar1 = *(int **)(param_1 + in_EAX * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + in_EAX * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + iVar4 * 4);
    *(int **)(param_1 + in_EAX * 4) = piVar1;
    in_EAX = iVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + in_EAX * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + in_EAX * 4) = 0;
  }
  *(int **)(param_1 + in_EAX * 4) = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
    (**(code **)(*param_3 + 8))(param_3);
  }
  return;
}
