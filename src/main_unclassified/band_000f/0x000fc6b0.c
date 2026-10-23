/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5F7CD80CF300694306C927B627671AEB1F986A507963B50A2FD24E62A5CC334
 * Entry: 0x000fc6b0, Ghidra index: 3153, label: FUN_000fc6b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fc6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int unaff_EBX;
  float fVar7;
  float fStack_90;
  float fStack_88;
  undefined4 uStack_5c;
  int aiStack_58 [2];
  int *piStack_50;
  int *apiStack_4c [2];
  float afStack_44 [2];
  int iStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_8;
  
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_3);
  if (iVar4 != 0) {
    if (param_1 != 0) {
      if (*(int *)(iVar4 + 8) != 0) {
        FUN_000fbd90();
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        FUN_000fbdd0();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        FUN_000fbe20();
      }
    }
    apiStack_4c[0] = *(int **)(iVar4 + 0x2c);
    if ((apiStack_4c[0] != (int *)0x0) &&
       (piVar5 = (int *)FUN_000a7770(apiStack_4c[0]), piVar5 != (int *)0x0)) {
      apiStack_4c[1] = piVar5;
      (**(code **)(*piVar5 + 4))(piVar5);
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      iVar4 = (**(code **)(*piVar5 + 0x14))(piVar5);
      fVar7 = (float)iVar4;
      aiStack_58[0] = 0x1fd9234b;
      uStack_5c = 0x10ba4815;
      apiStack_4c[0] = aiStack_58;
      apiStack_4c[1] = &uStack_5c;
      afStack_44[0] = fStack_88 - fVar7;
      iVar4 = 0;
      afStack_44[1] = fStack_88 + fStack_90;
      do {
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        FUN_000fda50();
        iVar3 = iStack_8;
        fStack_38 = afStack_44[iVar4];
        piVar5 = apiStack_4c[iVar4];
        iStack_3c = *piVar5;
        uStack_34 = uVar1;
        fStack_30 = fVar7;
        FUN_000fd550(iStack_8,&iStack_3c);
        piVar2 = *(int **)(iVar3 + 0x78);
        piVar6 = *(int **)(iVar3 + 0x74);
        if (piVar6 != piVar2) {
          do {
            if (*(int *)(*piVar6 + 0x24) == *piVar5) {
              if (*piVar6 != 0) {
                FUN_00064490();
              }
              break;
            }
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar2);
        }
        FUN_0006a4c0();
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      (**(code **)(*piStack_50 + 8))(piStack_50);
      param_1 = iStack_8;
      iVar4 = unaff_EBX;
    }
    if (*(undefined4 **)(iVar4 + 0x30) != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x98) = **(undefined4 **)(iVar4 + 0x30);
    }
  }
  return;
}
