/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A208D8A61125010321A336F286B1A9156D7B3B45666B2159AFD11AE11E31DBD4
 * Entry: 0x001638d0, Ghidra index: 4672, label: FUN_001638d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001638d0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *local_b0;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00164660(param_3 + -6,param_4);
  piVar10 = piVar7 + 6;
  for (; param_2 < piVar7; piVar7 = piVar7 + -6) {
    if ((piVar7[-6] < *piVar7) || (*piVar7 < piVar7[-6])) break;
  }
  piVar9 = piVar10;
  piVar13 = piVar7;
  local_b0 = piVar10;
  if (piVar10 < param_3) {
    do {
      piVar9 = piVar10;
      local_b0 = piVar10;
      if ((*piVar10 < *piVar7) || (*piVar7 < *piVar10)) break;
      piVar10 = piVar10 + 6;
      piVar9 = piVar10;
      local_b0 = piVar10;
    } while (piVar10 < param_3);
  }
  do {
    if (piVar9 < param_3) {
      piVar8 = piVar9 + 4;
      do {
        if (*piVar9 <= *piVar7) {
          local_b0 = piVar9;
          if (*piVar9 < *piVar7) break;
          iVar1 = *piVar10;
          iVar2 = piVar10[1];
          iVar3 = piVar10[2];
          iVar4 = piVar10[3];
          iVar5 = piVar10[4];
          iVar6 = piVar10[5];
          *piVar10 = *piVar9;
          piVar10[1] = piVar8[-3];
          piVar10[2] = piVar8[-2];
          piVar10[3] = piVar8[-1];
          piVar10[4] = *piVar8;
          piVar10[5] = piVar8[1];
          *piVar9 = iVar1;
          piVar8[-3] = iVar2;
          piVar8[-2] = iVar3;
          piVar8[-1] = iVar4;
          *piVar8 = iVar5;
          piVar10 = piVar10 + 6;
          piVar8[1] = iVar6;
        }
        piVar9 = piVar9 + 6;
        piVar8 = piVar8 + 6;
        local_b0 = piVar9;
      } while (piVar9 < param_3);
    }
    piVar8 = piVar9;
    if (param_2 < piVar13) {
      piVar9 = piVar13 + -2;
      piVar11 = piVar7 + 4;
      do {
        piVar12 = piVar11;
        piVar8 = local_b0;
        if (*piVar7 <= piVar9[-4]) {
          if (*piVar7 < piVar9[-4]) break;
          iVar1 = piVar7[-6];
          iVar2 = piVar11[-9];
          piVar7 = piVar7 + -6;
          piVar12 = piVar11 + -6;
          iVar3 = piVar11[-8];
          iVar4 = piVar11[-7];
          iVar5 = piVar11[-6];
          iVar6 = piVar11[-5];
          *piVar7 = piVar9[-4];
          piVar11[-9] = piVar9[-3];
          piVar11[-8] = piVar9[-2];
          piVar11[-7] = piVar9[-1];
          *piVar12 = *piVar9;
          piVar11[-5] = piVar9[1];
          piVar9[-4] = iVar1;
          piVar9[-3] = iVar2;
          piVar9[-2] = iVar3;
          piVar9[-1] = iVar4;
          *piVar9 = iVar5;
          piVar9[1] = iVar6;
        }
        piVar13 = piVar13 + -6;
        piVar9 = piVar9 + -6;
        piVar11 = piVar12;
      } while (param_2 < piVar13);
    }
    if (piVar13 == param_2) {
      if (piVar8 == param_3) {
        *param_1 = piVar7;
        param_1[1] = piVar10;
        return param_1;
      }
      if (piVar10 != piVar8) {
        iVar1 = piVar7[2];
        iVar2 = *piVar7;
        iVar3 = piVar7[1];
        iVar4 = piVar7[3];
        iVar5 = piVar7[4];
        iVar6 = piVar7[5];
        *piVar7 = *piVar10;
        piVar7[1] = piVar10[1];
        piVar7[2] = piVar10[2];
        piVar7[3] = piVar10[3];
        piVar7[4] = piVar10[4];
        piVar7[5] = piVar10[5];
        *piVar10 = iVar2;
        piVar10[1] = iVar3;
        piVar10[2] = iVar1;
        piVar10[3] = iVar4;
        piVar10[4] = iVar5;
        piVar10[5] = iVar6;
      }
      iVar1 = *piVar7;
      iVar2 = piVar7[1];
      iVar3 = piVar7[2];
      iVar4 = piVar7[3];
      iVar5 = piVar7[4];
      iVar6 = piVar7[5];
      *piVar7 = *piVar8;
      piVar7[1] = piVar8[1];
      piVar7[2] = piVar8[2];
      piVar7[3] = piVar8[3];
      piVar7[4] = piVar8[4];
      piVar7[5] = piVar8[5];
      *piVar8 = iVar1;
      piVar8[1] = iVar2;
      piVar8[2] = iVar3;
      piVar8[3] = iVar4;
      piVar8[4] = iVar5;
      piVar8[5] = iVar6;
      piVar7 = piVar7 + 6;
      piVar10 = piVar10 + 6;
      piVar9 = piVar8 + 6;
      local_b0 = piVar8 + 6;
    }
    else {
      piVar11 = piVar13 + -6;
      if (piVar8 == param_3) {
        piVar9 = piVar7 + -6;
        if (piVar11 != piVar9) {
          iVar1 = piVar13[-4];
          iVar2 = *piVar11;
          iVar3 = piVar13[-5];
          iVar4 = piVar13[-3];
          iVar5 = piVar13[-2];
          iVar6 = piVar13[-1];
          *piVar11 = *piVar9;
          piVar13[-5] = piVar7[-5];
          piVar13[-4] = piVar7[-4];
          piVar13[-3] = piVar7[-3];
          piVar13[-2] = piVar7[-2];
          piVar13[-1] = piVar7[-1];
          *piVar9 = iVar2;
          piVar7[-5] = iVar3;
          piVar7[-4] = iVar1;
          piVar7[-3] = iVar4;
          piVar7[-2] = iVar5;
          piVar7[-1] = iVar6;
        }
        iVar1 = piVar7[-4];
        iVar2 = *piVar9;
        iVar3 = piVar7[-5];
        iVar4 = piVar7[-3];
        iVar5 = piVar7[-2];
        piVar13 = piVar10 + -6;
        iVar6 = piVar7[-1];
        *piVar9 = *piVar13;
        piVar7[-5] = piVar10[-5];
        piVar7[-4] = piVar10[-4];
        piVar7[-3] = piVar10[-3];
        piVar7[-2] = piVar10[-2];
        piVar7[-1] = piVar10[-1];
        *piVar13 = iVar2;
        piVar10[-5] = iVar3;
        piVar10[-4] = iVar1;
        piVar10[-3] = iVar4;
        piVar10[-2] = iVar5;
        piVar10[-1] = iVar6;
        piVar7 = piVar9;
        piVar10 = piVar13;
        piVar9 = piVar8;
        piVar13 = piVar11;
      }
      else {
        iVar1 = piVar8[2];
        iVar2 = *piVar8;
        iVar3 = piVar8[1];
        iVar4 = piVar8[3];
        iVar5 = piVar8[4];
        iVar6 = piVar8[5];
        *piVar8 = *piVar11;
        piVar8[1] = piVar13[-5];
        piVar8[2] = piVar13[-4];
        piVar8[3] = piVar13[-3];
        piVar8[4] = piVar13[-2];
        piVar8[5] = piVar13[-1];
        *piVar11 = iVar2;
        piVar13[-5] = iVar3;
        piVar13[-4] = iVar1;
        piVar13[-3] = iVar4;
        piVar13[-2] = iVar5;
        piVar13[-1] = iVar6;
        piVar9 = piVar8 + 6;
        piVar13 = piVar11;
        local_b0 = piVar8 + 6;
      }
    }
  } while( true );
}
