/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76E34B388CC77602C6703199F1B2E3EA881F08F56E955768682B49B1224920A1
 * Entry: 0x000dfd90, Ghidra index: 2736, label: FUN_000dfd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e0860(int *param_1);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);
extern void FUN_00017b60(int32_t* param_1, int32_t param_2);

int * FUN_000dfd90(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = param_2;
  piVar3 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    if (((short)param_2[9] == -1) ||
       (sVar2 = (short)param_2[9] + -1, *(short *)(param_2 + 9) = sVar2, sVar2 != 0)) {
      piVar3 = (int *)FUN_000da730();
    }
    else {
      FUN_000e0860(&param_2);
      (**(code **)(*piVar1 + 0x9c))(param_1,piVar1[3]);
      iVar5 = *(int *)(param_1 + 0x28);
      iVar4 = FUN_000ff730(param_1 + 0x24,iVar5,*(undefined4 *)(iVar5 + 4),&param_2);
      FUN_000b2a50();
      *(int *)(iVar5 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      iVar5 = *(int *)(param_1 + 0x4c);
      iVar4 = FUN_000ff730(param_1 + 0x48,iVar5,*(undefined4 *)(iVar5 + 4),&param_2);
      FUN_000b2a50();
      *(int *)(iVar5 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      piVar3 = piVar1;
    }
    if (piVar3 != (int *)0x0) {
      if (param_4 != (int *)0x0) {
        piVar3[1] = *param_4;
      }
      iVar5 = (**(code **)(*piVar3 + 0xf4))();
      if (iVar5 != 0) {
        uVar7 = param_3;
        uVar6 = (**(code **)(*piVar3 + 0xf4))(param_3);
        FUN_00017b60(uVar6,uVar7);
      }
      (**(code **)(*piVar3 + 0xa4))();
    }
  }
  return piVar3;
}
