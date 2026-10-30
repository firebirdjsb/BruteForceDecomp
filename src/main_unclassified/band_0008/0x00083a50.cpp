/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BAB831AAFA730B548F4357DA6E28E8EB91C6A3524BC1DF42A876A5AAD09AA2
 * Entry: 0x00083a50, Ghidra index: 1537, label: FUN_00083a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000782c0(int param_1);

extern uint32_t DAT_00402028;
extern uint32_t DAT_0040202c;
extern uint32_t DAT_00402030;
extern uint32_t *DAT_00469b54;
int * FUN_00083a50(undefined4 param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int unaff_retaddr;
  int local_20;
  int *piStack_1c;
  int *piStack_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_00402028;
  local_4 = DAT_00402030;
  local_8 = DAT_0040202c;
  *(byte *)(in_EAX + 0x5bc) = *(byte *)(in_EAX + 0x5bc) | 0x80;
  iVar3 = FUN_000782c0(3);
  piStack_18 = (int *)0x0;
  if (iVar3 != 0) {
    local_20 = 0;
    iVar4 = (**(code **)(**(int **)(param_2 + 0xbec) + 0x10))(&local_20);
    piStack_18 = (int *)0x0;
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x28) + 0x14);
      piVar8 = *(int **)(iVar4 + 0x9c);
      piStack_18 = (int *)(iVar4 + 0x98);
      piVar10 = *(int **)(iVar4 + 0xa0);
      if (piVar8 != *(int **)(iVar4 + 0xa0)) {
        do {
          piStack_18 = piVar10;
          piVar10 = (int *)*piVar8;
          if (((piVar10 != (int *)0x0) && (cVar2 = (**(code **)(*piVar10 + 0x20))(), cVar2 != '\0'))
             && (0 < *(short *)((int)piVar10 + 0x1a))) {
            iVar4 = (**(code **)(*piVar10 + 0x5c))();
            local_20 = iVar4;
            iVar5 = (**(code **)(*DAT_00469b54 + 0x48))();
            piStack_1c = *(int **)(iVar5 + 0xe4);
            piVar10 = *(int **)(iVar5 + 0xe0);
            if (piVar10 != piStack_1c) {
              piVar9 = piVar10 + 0xc;
              do {
                piVar6 = (int *)*piVar9;
                if (piVar6 == (int *)0x0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = piVar9[1] - (int)piVar6 >> 2;
                }
                if (iVar5 == *(int *)(iVar4 + 0x1c4)) {
                  if (piVar6 == (int *)0x0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = piVar9[1] - (int)piVar6 >> 2;
                  }
                  iVar7 = 0;
                  if (0 < iVar5) {
                    iVar4 = *(int *)(iVar4 + 0x1c0) - (int)piVar6;
                    do {
                      iVar3 = unaff_retaddr;
                      if (*piVar6 != *(int *)(iVar4 + (int)piVar6)) goto LAB_00083be8;
                      iVar7 = iVar7 + 1;
                      piVar6 = piVar6 + 1;
                    } while (iVar7 < iVar5);
                  }
                  iVar4 = *(int *)(iVar3 + 0xc);
                  if (iVar4 == 1) {
                    fVar1 = (float)*piVar10;
                    if (*piVar10 < 0) {
                      fVar1 = fVar1 + 4.2949673e+09;
                    }
                    *(float *)(iVar3 + 4) = fVar1;
                  }
                  else if (iVar4 == 2) {
                    *(int *)(iVar3 + 4) = *piVar10;
                  }
                  else if (iVar4 == 3) {
                    *(bool *)(iVar3 + 4) = *piVar10 != 0;
                  }
                }
LAB_00083be8:
                piVar10 = piVar10 + 0xf;
                piVar9 = piVar9 + 0xf;
                iVar4 = local_20;
              } while (piVar10 != piStack_1c);
            }
          }
          piVar8 = piVar8 + 1;
          piVar10 = piStack_18;
        } while (piVar8 != piStack_18);
      }
    }
  }
  return piStack_18;
}
