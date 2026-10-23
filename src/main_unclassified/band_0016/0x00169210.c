/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 459E3EC40F6157057B2B8E8E31436FD1CCF5213C0D927D15F1241757E9F0222C
 * Entry: 0x00169210, Ghidra index: 4747, label: FUN_00169210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_001693dc_caseD_3[];
undefined4 FUN_00169210(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int in_EAX;
  int *piVar9;
  int iVar10;
  int in_ECX;
  int iVar11;
  
  piVar1 = *(int **)(in_EAX + 4);
  piVar9 = *(int **)(in_ECX + 4);
  iVar11 = *(int *)(piVar1[3] + 4);
  if ((((iVar11 == 2) || (iVar11 == 0x1a)) || (iVar11 == 0x1f)) &&
     (((iVar10 = *(int *)(piVar9[3] + 4), iVar10 == 2 || (iVar10 == 0x1a)) || (iVar10 == 0x1f)))) {
    return 0;
  }
  if ((((iVar11 != 2) && (iVar11 != 0x1a)) && (iVar11 != 0x1f)) || (*(int *)(piVar9[3] + 4) != 0x1d)
     ) {
    iVar10 = piVar9[3];
    iVar2 = *(int *)(iVar10 + 4);
    iVar3 = iVar11;
    if (((((iVar2 != 2) && (iVar2 != 0x1a)) && (iVar2 != 0x1f)) && (iVar3 = iVar2, iVar11 != 0x1d))
       || (iVar3 != 0x1d)) {
      if ((*(uint *)(piVar1[3] + 0xa8) >> 0xb & 1) == 0) {
        if ((((*(uint *)(iVar10 + 0xa8) >> 0xb & 1) != 0) && (iVar11 != 2)) &&
           ((iVar11 != 0x1a && (iVar11 != 0x1f)))) {
          return 0;
        }
      }
      else {
        if (((iVar2 != 2) && (iVar2 != 0x1a)) && (iVar2 != 0x1f)) {
          return 0;
        }
        if ((*(uint *)(iVar10 + 0xa8) >> 0xb & 1) != 0) {
          return 0;
        }
      }
      if ((((iVar11 != 0x10) || (iVar2 != 0x10)) && (piVar4 = (int *)piVar1[0xf], piVar4 != piVar9))
         && (piVar5 = (int *)piVar9[0xf], piVar5 != piVar1)) {
        iVar11 = piVar1[0x1b];
        iVar10 = piVar9[0x1b];
        cVar8 = FUN_00039360();
        if ((cVar8 == '\0') || (cVar8 = FUN_00039360(), cVar8 == '\0')) {
          return 1;
        }
        if (*(int *)(iVar11 + 0x10) != 0) {
          iVar11 = *(int *)(iVar11 + 8);
        }
        if (*(int *)(iVar10 + 0x10) != 0) {
          iVar10 = *(int *)(iVar10 + 8);
        }
        if (iVar11 != iVar10) {
          piVar6 = *(int **)(iVar11 + 0x5c);
          piVar7 = *(int **)(iVar10 + 0x5c);
          if ((piVar4 != piVar7) && (piVar5 != piVar6)) {
            if ((piVar6 != (int *)0x0) && (piVar7 != (int *)0x0)) {
              if (*(int *)(piVar6[3] + 4) == 3) {
                if (*(int *)(piVar7[3] + 4) == 3) {
                  return 0;
                }
                cVar8 = FUN_001546b0();
                if ((cVar8 != '\0') && (cVar8 = (**(code **)(*piVar9 + 0xd8))(), cVar8 == '\0')) {
                  return 0;
                }
                switch(*(undefined4 *)(piVar7[3] + 4)) {
                case 3:
                case 0x13:
                case 0x14:
                case 0x1d:
                  goto switchD_001693dc_caseD_3;
                default:
                  if ((*(byte *)(piVar6 + 0x1c) & 1) != 0) {
                    return 0;
                  }
                }
              }
              else if (*(int *)(piVar7[3] + 4) == 3) {
                cVar8 = FUN_001546b0();
                if ((cVar8 != '\0') && (cVar8 = (**(code **)(*piVar1 + 0xd8))(), cVar8 == '\0')) {
                  return 0;
                }
                switch(*(undefined4 *)(piVar6[3] + 4)) {
                case 3:
                case 0x13:
                case 0x14:
                case 0x1d:
                  goto switchD_001693dc_caseD_3;
                default:
                  if ((*(byte *)(piVar7 + 0x1c) & 1) != 0) {
                    return 0;
                  }
                }
              }
            }
            iVar2 = *(int *)(piVar1[3] + 4);
            if ((iVar2 != 0x15) || (cVar8 = FUN_001546b0(), cVar8 != '\0')) {
              cVar8 = FUN_001546b0();
              if (cVar8 != '\0') {
                return 1;
              }
              if (*(int *)(piVar9[3] + 4) != 0x15) {
                return 1;
              }
            }
            if (iVar2 == 0x15) {
              piVar9 = piVar1;
              iVar11 = iVar10;
            }
            if (piVar9[0x6d] == 0) {
              return 1;
            }
            iVar10 = *(int *)(piVar9[0x6d] + 0x6c);
            if (*(int *)(iVar10 + 0x10) != 0) {
              iVar10 = *(int *)(iVar10 + 8);
            }
            if (iVar10 != iVar11) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
switchD_001693dc_caseD_3:
  return 0;
}
