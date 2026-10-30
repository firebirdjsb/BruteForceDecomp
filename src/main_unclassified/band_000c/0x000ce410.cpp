/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09DEC6D6DA1CBA66106EC1F23BAD032089F294322375511A3A839A54E391A39D
 * Entry: 0x000ce410, Ghidra index: 2556, label: FUN_000ce410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ce140(void);
extern int FUN_000ce210(void);

undefined4 FUN_000ce410(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  float *in_EAX;
  int **ppiVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int local_4e8;
  int *local_4e4;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  int *local_4d0;
  int local_4cc;
  int local_4c0 [9];
  int local_49c;
  int local_498;
  int *local_494;
  int *local_490;
  float local_48c;
  float local_484;
  int local_474;
  int aiStack_470 [8];
  int local_450;
  int local_44c;
  int *local_448;
  int *local_444;
  float local_440;
  float local_438;
  
  ppiVar8 = &local_494;
  iVar10 = 0x10;
  do {
    ppiVar8[1] = (int *)0x0;
    *ppiVar8 = (int *)0x0;
    ppiVar8[-0xb] = (int *)0x0;
    ppiVar8 = ppiVar8 + 0x13;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0;
  iVar13 = 0;
  local_4e4 = (int *)0x0;
  local_4e8 = 0;
  if (3 < param_2) {
    iVar16 = 0;
    local_4dc = 0x18;
    pfVar9 = in_EAX + 6;
    iVar11 = 2;
    do {
      if (pfVar9[-6] < *(float *)(iVar16 + (int)in_EAX)) {
        iVar16 = (-0x18 - (int)in_EAX) + (int)pfVar9;
        local_4e4 = (int *)iVar13;
      }
      if (*(float *)(iVar10 + (int)in_EAX) < pfVar9[-6]) {
        iVar10 = (-0x18 - (int)in_EAX) + (int)pfVar9;
        local_4e8 = iVar13;
      }
      if (pfVar9[-3] < *(float *)(iVar16 + (int)in_EAX)) {
        local_4e4 = (int *)(iVar11 + -1);
        iVar16 = (-0xc - (int)in_EAX) + (int)pfVar9;
      }
      if (*(float *)(iVar10 + (int)in_EAX) < pfVar9[-3]) {
        local_4e8 = iVar11 + -1;
        iVar10 = (-0xc - (int)in_EAX) + (int)pfVar9;
      }
      if (*pfVar9 < *(float *)(iVar16 + (int)in_EAX)) {
        iVar16 = local_4dc;
        local_4e4 = (int *)iVar11;
      }
      if (*(float *)(iVar10 + (int)in_EAX) < *pfVar9) {
        iVar10 = local_4dc;
        local_4e8 = iVar11;
      }
      if (pfVar9[3] < *(float *)(iVar16 + (int)in_EAX)) {
        local_4e4 = (int *)(iVar11 + 1);
        iVar16 = (0xc - (int)in_EAX) + (int)pfVar9;
      }
      if (*(float *)(iVar10 + (int)in_EAX) < pfVar9[3]) {
        local_4e8 = iVar11 + 1;
        iVar10 = (0xc - (int)in_EAX) + (int)pfVar9;
      }
      local_4dc = local_4dc + 0x30;
      iVar1 = iVar11 + 5;
      iVar13 = iVar13 + 4;
      pfVar9 = pfVar9 + 0xc;
      iVar11 = iVar11 + 4;
    } while (iVar1 < param_2);
  }
  if (iVar13 < param_2) {
    iVar10 = local_4e8 * 0xc;
    iVar11 = iVar13 * 0xc;
    iVar16 = (int)local_4e4 * 0xc;
    do {
      if (*(float *)(iVar11 + (int)in_EAX) < *(float *)(iVar16 + (int)in_EAX)) {
        iVar16 = iVar11;
        local_4e4 = (int *)iVar13;
      }
      if (*(float *)(iVar10 + (int)in_EAX) < *(float *)(iVar11 + (int)in_EAX)) {
        iVar10 = iVar11;
        local_4e8 = iVar13;
      }
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar13 < param_2);
  }
  local_49c = (int)local_4e4;
  local_498 = local_4e8;
  FUN_000ce140();
  local_450 = local_498;
  local_44c = local_49c;
  FUN_000ce140();
  local_494 = &local_474;
  local_444 = local_4c0;
  iVar16 = 0;
  local_448 = local_4c0;
  local_490 = &local_474;
  pfVar9 = in_EAX;
  iVar10 = local_49c;
  iVar13 = local_450;
  if (0 < param_2) {
    do {
      if (((iVar16 == iVar10) || (iVar16 == local_498)) ||
         ((*pfVar9 - in_EAX[iVar10 * 3]) * local_48c +
          (pfVar9[2] - in_EAX[iVar10 * 3 + 2]) * local_484 <= 2.3841858e-07)) {
        if (((iVar16 != iVar13) && (iVar16 != local_44c)) &&
           (2.3841858e-07 <
            (*pfVar9 - in_EAX[iVar13 * 3]) * local_440 +
            (pfVar9[2] - in_EAX[iVar13 * 3 + 2]) * local_438)) {
          aiStack_470[local_474] = iVar16;
          local_474 = local_474 + 1;
          iVar10 = local_49c;
          iVar13 = local_450;
        }
      }
      else {
        local_4c0[local_4c0[0] + 1] = iVar16;
        local_4c0[0] = local_4c0[0] + 1;
        iVar10 = local_49c;
        iVar13 = local_450;
      }
      iVar16 = iVar16 + 1;
      pfVar9 = pfVar9 + 3;
    } while (iVar16 < param_2);
  }
  local_4dc = 2;
  local_4e8 = 2;
  iVar10 = 2;
  do {
    bVar6 = true;
    local_4cc = 0;
    iVar13 = iVar10;
    if (iVar10 < 1) break;
    local_4e4 = local_4c0 + local_4e8 * 0x13;
    piVar12 = local_4c0;
    do {
      piVar3 = (int *)piVar12[0xb];
      if (*piVar12 != 0) {
        bVar6 = false;
        iVar13 = FUN_000ce210();
        local_4e4[9] = iVar13;
        local_4e4[10] = piVar12[10];
        piVar12[10] = iVar13;
        FUN_000ce140();
        cVar7 = FUN_000ce140();
        if (cVar7 == '\0') {
          piVar15 = (int *)piVar12[0xb];
          piVar15[9] = iVar13;
          cVar7 = FUN_000ce140();
          if (cVar7 == '\0') {
            FUN_000ce140();
            return 0;
          }
        }
        else {
          local_4dc = local_4dc + 1;
          iVar13 = piVar12[0xb];
          local_4e4[0xb] = iVar13;
          *(int **)(iVar13 + 0x30) = local_4e4;
          piVar12[0xb] = (int)local_4e4;
          local_4e4[0xc] = (int)piVar12;
          piVar15 = local_4e4;
          local_4e8 = local_4e8 + 1;
          local_4e4 = local_4e4 + 0x13;
        }
        *piVar15 = 0;
        local_4d8 = 0;
        local_4d4 = 0;
        if (0 < *piVar12) {
          piVar14 = piVar12 + 1;
          local_4d0 = piVar14;
          do {
            iVar13 = *piVar14;
            iVar16 = piVar15[9];
            if (((iVar13 != iVar16) && (iVar13 != piVar15[10])) &&
               (2.3841858e-07 <
                (in_EAX[iVar13 * 3] - in_EAX[iVar16 * 3]) * (float)piVar15[0xd] +
                (in_EAX[iVar13 * 3 + 2] - in_EAX[iVar16 * 3 + 2]) * (float)piVar15[0xf])) {
              piVar15[*piVar15 + 1] = iVar13;
              *piVar15 = *piVar15 + 1;
            }
            iVar16 = piVar12[9];
            if (((iVar13 != iVar16) && (iVar13 != piVar12[10])) &&
               (2.3841858e-07 <
                (in_EAX[iVar13 * 3] - in_EAX[iVar16 * 3]) * (float)piVar12[0xd] +
                (in_EAX[iVar13 * 3 + 2] - in_EAX[iVar16 * 3 + 2]) * (float)piVar12[0xf])) {
              local_4d8 = local_4d8 + 1;
              *local_4d0 = iVar13;
              local_4d0 = local_4d0 + 1;
            }
            local_4d4 = local_4d4 + 1;
            piVar14 = piVar14 + 1;
          } while (local_4d4 < *piVar12);
        }
        *piVar12 = local_4d8;
        iVar13 = local_4dc;
      }
      local_4cc = local_4cc + 1;
      piVar12 = piVar3;
    } while (local_4cc < iVar10);
    iVar10 = iVar13;
  } while (!bVar6);
  iVar10 = 0;
  piVar12 = local_4c0;
  if (3 < iVar13) {
    iVar16 = 3;
    pfVar9 = (float *)(param_3 + 0x14);
    do {
      fVar4 = in_EAX[piVar12[9] * 3 + 2];
      fVar5 = (in_EAX + piVar12[9] * 3)[1];
      pfVar9[-5] = in_EAX[piVar12[9] * 3];
      pfVar9[-4] = fVar5;
      pfVar9[-3] = fVar4;
      iVar13 = piVar12[0xb];
      iVar11 = *(int *)(iVar13 + 0x24);
      fVar4 = in_EAX[iVar11 * 3 + 2];
      fVar5 = (in_EAX + iVar11 * 3)[1];
      pfVar9[-2] = in_EAX[iVar11 * 3];
      pfVar9[-1] = fVar5;
      *pfVar9 = fVar4;
      iVar13 = *(int *)(iVar13 + 0x2c);
      pfVar2 = in_EAX + *(int *)(iVar13 + 0x24) * 3;
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[1];
      pfVar9[1] = *pfVar2;
      pfVar9[2] = fVar5;
      pfVar9[3] = fVar4;
      iVar13 = *(int *)(iVar13 + 0x2c);
      pfVar2 = in_EAX + *(int *)(iVar13 + 0x24) * 3;
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[1];
      pfVar9[4] = *pfVar2;
      pfVar9[5] = fVar5;
      pfVar9[6] = fVar4;
      piVar12 = *(int **)(iVar13 + 0x2c);
      iVar16 = iVar16 + 4;
      iVar10 = iVar10 + 4;
      pfVar9 = pfVar9 + 0xc;
      iVar13 = local_4dc;
    } while (iVar16 < local_4dc);
  }
  if (iVar10 < iVar13) {
    pfVar9 = (float *)(param_3 + 8 + iVar10 * 0xc);
    iVar10 = iVar13 - iVar10;
    do {
      fVar4 = in_EAX[piVar12[9] * 3 + 2];
      fVar5 = (in_EAX + piVar12[9] * 3)[1];
      pfVar9[-2] = in_EAX[piVar12[9] * 3];
      pfVar9[-1] = fVar5;
      *pfVar9 = fVar4;
      piVar12 = (int *)piVar12[0xb];
      pfVar9 = pfVar9 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *param_4 = iVar13;
  return 1;
}
