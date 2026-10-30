/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 060B2E21F3B40C12B69A256FB898D7FA0D9C108B82494CACA760E7B344FF4610
 * Entry: 0x0005e670, Ghidra index: 988, label: FUN_0005e670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0005bca0(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0005eb10(int param_1,undefined4 param_2);
extern void FUN_0004b5f0(void);
extern void FUN_0005eab0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_0005e670(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fStack_c;
  int iStack_8;
  float fStack_4;
  
  if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0xf4))(), iVar4 != 0)) {
    (**(code **)(*param_2 + 0xf4))();
    iVar4 = FUN_000120f0();
    if ((iVar4 != 0) &&
       ((*(int *)(iVar4 + 0x59c) != 0 && (piVar5 = (int *)FUN_0005bca0(), piVar5 != (int *)0x0)))) {
      iVar4 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 4);
      iVar6 = (**(code **)(*piVar5 + 0x40))();
      iVar7 = (**(code **)(*param_2 + 0x40))();
      fStack_4 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar7 + 0x2c);
      fVar10 = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
      fVar11 = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
      fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fStack_4 * fStack_4);
      iVar7 = iVar4;
      for (; iVar9 != iVar4; iVar9 = iVar9 + 8) {
        if (*(int **)(iVar9 + 4) != (int *)0x0) {
          iVar8 = (**(code **)(**(int **)(iVar9 + 4) + 0x40))();
          fVar11 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar8 + 0x2c);
          fVar2 = *(float *)(iVar6 + 0x28) - *(float *)(iVar8 + 0x28);
          fVar1 = *(float *)(iVar6 + 0x24) - *(float *)(iVar8 + 0x24);
          fVar11 = SQRT(fVar11 * fVar11 + fVar2 * fVar2 + fVar1 * fVar1);
          if (iVar7 == iVar4) {
            iVar7 = iVar9;
            if (fVar10 < fVar11 - 5.0) {
              iStack_8 = 0;
              FUN_0008f6a0(param_2);
LAB_0005e890:
              FUN_0005eb10(iVar9,&fStack_c);
              goto LAB_0005e865;
            }
          }
          else {
            iVar7 = (**(code **)(**(int **)(iVar7 + 4) + 0x40))();
            fVar1 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar7 + 0x2c);
            fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
            fVar2 = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
            fStack_c = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
            iVar7 = iVar9;
            if ((fVar10 < fVar11 - 5.0) && (fStack_c + 5.0 < fVar10)) {
              FUN_0004b5f0();
              goto LAB_0005e890;
            }
          }
        }
      }
      iStack_8 = 0;
      FUN_0008f6a0(param_2);
      FUN_0005eab0();
LAB_0005e865:
      if (iStack_8 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  return;
}
