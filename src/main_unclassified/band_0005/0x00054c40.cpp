/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FBF0BCDDCCA6AD92415E9DA7408C69CB743C15B8A2FD1455FF7C472EF195193
 * Entry: 0x00054c40, Ghidra index: 800, label: FUN_00054c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b70;
extern uint32_t DAT_0046cfd8;
int FUN_00054c40(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  puVar10 = &DAT_00469b70;
  for (iVar6 = 0x87; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar6 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar6 + 4) == 0) ||
     ((uint)(*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2) <= param_2)) {
    FUN_0015b7c0(iVar6);
  }
  fVar3 = 0.0;
  iVar6 = *(int *)(*(int *)(iVar6 + 4) + param_2 * 4);
  iVar7 = iVar6 + 0xc;
  iVar9 = 0;
  iVar8 = 0;
  if (*(int *)(iVar6 + 0xc) != 0) {
    do {
      if (9 < iVar8) break;
      if (param_4 == 0) {
LAB_00054cd5:
        fVar11 = *(float *)(iVar6 + 0x10 + iVar8 * 8);
        (&DAT_00469b70)[*(int *)(iVar7 + iVar8 * 8)] = fVar11;
        fVar3 = fVar11 + fVar3;
        if ((ABS(fVar11) < 1.1920929e-07 != (ABS(fVar11) == 1.1920929e-07)) && (iVar9 == 0)) {
          iVar9 = *(int *)(iVar7 + iVar8 * 8);
        }
      }
      else {
        piVar2 = *(int **)(param_4 + 8);
        piVar5 = *(int **)(param_4 + 4);
        if (piVar5 == piVar2) goto LAB_00054cd5;
        do {
          if (*piVar5 == *(int *)(iVar7 + iVar8 * 8)) break;
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar2);
        if (piVar5 == piVar2) goto LAB_00054cd5;
      }
      iVar1 = iVar8 * 8;
      iVar8 = iVar8 + 1;
    } while (*(int *)(iVar6 + 0x14 + iVar1) != 0);
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      fVar11 = (float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0;
      if (fVar11 <= 3.5762787e-07) {
        fVar11 = 3.5762787e-07;
      }
      if (0.99999964 <= fVar11) {
        fVar11 = 0.99999964;
      }
      iVar6 = 1;
      fVar4 = 0.0;
      do {
        if (param_4 == 0) {
LAB_00054daf:
          fVar4 = fVar4 + (float)(&DAT_00469b70)[iVar6];
          if (fVar11 * fVar3 < fVar4 != (fVar11 * fVar3 == fVar4)) {
            return iVar6;
          }
        }
        else {
          piVar2 = *(int **)(param_4 + 8);
          piVar5 = *(int **)(param_4 + 4);
          if (piVar5 == piVar2) goto LAB_00054daf;
          do {
            if (*piVar5 == iVar6) break;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar2);
          if (piVar5 == piVar2) goto LAB_00054daf;
        }
        iVar6 = iVar6 + 1;
        if (0x86 < iVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return iVar9;
}
