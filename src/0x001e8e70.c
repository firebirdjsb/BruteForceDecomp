/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3C045E101582EDD55A1A9DC4B72AA5EDCA51CC0CF79C417DFB1EEACBA5D5E47
 * Entry: 0x001e8e70, Ghidra index: 6849, label: FUN_001e8e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e8e70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_14 [2];
  float local_c;
  float local_8;
  int local_4;
  
  if (*(undefined4 **)(param_2 + 4) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_2 + 4);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (piVar4 != *(int **)(param_2 + 4)) {
    do {
      piVar5 = piVar4 + 2;
      piVar6 = local_14;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      local_8 = local_8 + *(float *)(param_1 + 4);
      local_c = local_c + *(float *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 0xc);
      local_4 = iVar2;
      iVar1 = FUN_00129f40(param_1 + 8,iVar3,*(undefined4 *)(iVar3 + 4),local_14);
      FUN_0027a650();
      *(int *)(iVar3 + 4) = iVar1;
      **(int **)(iVar1 + 4) = iVar1;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_2 + 4));
  }
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return iVar2;
}
