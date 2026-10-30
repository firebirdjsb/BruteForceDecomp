/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE6A28BC60016ED6DF4DE916726626AAC9AB5EF8CF56C80D6C56BDD184EA290B
 * Entry: 0x0005e310, Ghidra index: 984, label: FUN_0005e310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffc44;
extern uint32_t DAT_003ffc7c;
void FUN_0005e310(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  iVar3 = (**(code **)(*param_2 + 0xf4))();
  if (iVar3 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3 != 0)) {
    iVar3 = FUN_000120f0();
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0005bca0();
    }
    if (piVar4 == param_2) {
      param_1 = 3;
    }
    else {
      param_1 = FUN_0005e220(param_1);
      if (param_1 == 4) goto LAB_0005e439;
    }
    uVar6 = 0;
    piVar4 = &DAT_003ffc7c;
    do {
      iVar3 = *(int *)(iVar2 + 4);
      if ((iVar3 == 0) || (uVar5 = *(int *)(iVar2 + 8) - iVar3 >> 3, uVar5 <= uVar6)) break;
      if (((piVar4[-1] == 1) &&
          (((uVar5 != 0 && (piVar1 = *(int **)(iVar3 + 4), piVar1 != (int *)0x0)) &&
           (iVar3 = (**(code **)(*piVar1 + 0xf4))(), iVar3 != 0)))) &&
         (iVar3 = (**(code **)(*piVar1 + 0xf4))(), *(int *)(iVar3 + 0x6f4) != 0)) {
        iVar3 = *piVar4;
      }
      else {
        iVar3 = piVar4[-2];
      }
      if (iVar3 == param_1) {
        FUN_001611d0();
      }
      piVar4 = piVar4 + 4;
      uVar6 = uVar6 + 1;
    } while ((int)piVar4 < 0x3ffcac);
  }
LAB_0005e439:
  if ((*(int *)(iVar2 + 0x14) != 0) && (*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 3 != 0))
  {
    iVar3 = FUN_000120f0();
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0005bca0();
    }
    if (piVar4 == param_2) {
      iVar3 = 3;
    }
    else {
      iVar3 = FUN_0005e220(iVar2);
      if (iVar3 == 4) {
        return;
      }
    }
    uVar6 = 0;
    piVar4 = &DAT_003ffc44;
    do {
      if (*(int *)(iVar2 + 0x14) == 0) {
        return;
      }
      if ((uint)(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 3) <= uVar6) {
        return;
      }
      if (*piVar4 == iVar3) {
        FUN_001611d0();
      }
      piVar4 = piVar4 + 4;
      uVar6 = uVar6 + 1;
    } while ((int)piVar4 < 0x3ffc74);
  }
  return;
}
