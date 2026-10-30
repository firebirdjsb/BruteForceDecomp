/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF2C886B88124DB478E18ECC3810965FC3EE27C1F7A42E1E1F54643C7532D40B
 * Entry: 0x0008c380, Ghidra index: 1699, label: FUN_0008c380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_0008c1b0(void);
extern float10 FUN_001e80a0(void);
extern void FUN_0008bc20(undefined4 param_1);
extern void FUN_0008bcb0(undefined4 param_1);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_0008c380(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  int iStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
  bVar2 = false;
  iStack_14 = 0;
  piVar8 = param_1 + 0x14;
  piVar7 = param_1 + 0x19;
  do {
    iVar6 = *(int *)((int)piVar8 + DAT_00469948 + (0x1cc - (int)param_1));
    iVar4 = FUN_0008c1b0(param_1);
    if (iVar4 == 9) {
      bVar1 = false;
      if (*(char *)(iVar6 + 4) != '\0') {
        if (cVar3 == '\0') {
          fVar9 = (float10)FUN_001e80a0();
        }
        else {
          fVar9 = (float10)*(float *)(*(int *)(iVar6 + 0xb4) + 0x4c);
        }
        if (fVar9 <= (float10)0.0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar6 = *piVar8;
      if (iVar6 == 0) {
        if (!bVar1) {
          *piVar8 = 1;
        }
LAB_0008c5c4:
        if (*piVar7 == 0) goto LAB_0008c5c9;
        goto LAB_0008c5e9;
      }
      if (iVar6 == 1) {
        if (bVar1) {
          *piVar8 = 2;
        }
        goto LAB_0008c5c4;
      }
      if ((iVar6 != 2) || (bVar1)) goto LAB_0008c5c4;
      iVar6 = *piVar7;
      *piVar8 = 3;
      if (iVar6 == 0) {
        piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
        iVar6 = *piVar5;
        if (iVar6 == 0x120785ef) {
          piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          uStack_c = 0x19743553;
          (**(code **)(*piVar5 + 8))(&uStack_c,0,0);
          goto LAB_0008c5c4;
        }
        iVar4 = (**(code **)(*param_1 + 0x34))();
        if (iVar6 != 0x17506391) {
          if ((iVar6 != -0x104e72d8) || (iVar4 < 8)) goto LAB_0008c53e;
          piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          uStack_4 = 0xd6984cb;
          (**(code **)(*piVar5 + 8))(&uStack_4,0,0);
          *piVar8 = 0;
          goto LAB_0008c5c4;
        }
        if (3 < iVar4) {
          piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          uStack_8 = 0x176982e1;
          (**(code **)(*piVar5 + 8))(&uStack_8,0,0);
          *piVar8 = 0;
          goto LAB_0008c5c4;
        }
LAB_0008c53e:
        if (*piVar7 == 0) {
          piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
          if (*piVar5 == 0x17506391) {
            iVar6 = FUN_0008bc20(param_1[0x12]);
          }
          else {
            if (*piVar5 != -0x104e72d8) goto LAB_0008c5c4;
            iVar6 = FUN_0008bcb0(param_1[0x12]);
          }
          if (iVar6 != 0) {
            piVar8[0xc] = iVar6;
            if (*piVar7 != iVar6) {
              FUN_0008f6a0(iVar6);
            }
            bVar2 = true;
          }
          goto LAB_0008c5c4;
        }
        goto LAB_0008c5e9;
      }
    }
    else {
      iVar6 = *piVar7;
      *piVar8 = 0;
      if (iVar6 != 0) {
        piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar5 + 0x14))(*piVar7);
        goto LAB_0008c5c4;
      }
LAB_0008c5c9:
      if (piVar8[0xc] == 0) {
LAB_0008c5e9:
        iVar6 = *piVar8;
        if (iVar6 < 10) {
          if (0x27 < iVar6) goto LAB_0008c5ff;
        }
        else if (iVar6 < 0x28) {
          *piVar8 = iVar6 + 1;
        }
        else {
LAB_0008c5ff:
          *piVar8 = 0;
        }
      }
      else {
        *piVar8 = 10;
        piVar8[0xc] = 0;
        bVar2 = true;
        *piVar8 = *piVar8 + 1;
      }
    }
    iStack_14 = iStack_14 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 2;
    if (3 < iStack_14) {
      if (bVar2) {
        (**(code **)(*param_1 + 0x1c))();
      }
      return;
    }
  } while( true );
}
