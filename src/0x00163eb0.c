/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61428FDB45D88228F7830DC79B67A2642E71464BF288875CFA73F4760C9678A2
 * Entry: 0x00163eb0, Ghidra index: 4675, label: FUN_00163eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00163eb0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_98;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2) / 0x28) * 5;
  FUN_00164850(param_3 + -5,param_4);
  piVar9 = piVar6 + 5;
  for (; param_2 < piVar6; piVar6 = piVar6 + -5) {
    if ((piVar6[-5] < *piVar6) || (*piVar6 < piVar6[-5])) break;
  }
  piVar8 = piVar9;
  piVar12 = piVar6;
  local_98 = piVar9;
  if (piVar9 < param_3) {
    do {
      piVar8 = piVar9;
      local_98 = piVar9;
      if ((*piVar9 < *piVar6) || (*piVar6 < *piVar9)) break;
      piVar9 = piVar9 + 5;
      piVar8 = piVar9;
      local_98 = piVar9;
    } while (piVar9 < param_3);
  }
  do {
    if (piVar8 < param_3) {
      piVar7 = piVar8 + 3;
      piVar10 = piVar9;
      do {
        piVar9 = piVar10;
        if (*piVar8 <= *piVar6) {
          if (*piVar8 < *piVar6) break;
          iVar1 = *piVar10;
          piVar9 = piVar10 + 5;
          iVar2 = piVar10[1];
          iVar3 = piVar10[2];
          iVar4 = piVar10[3];
          iVar5 = piVar10[4];
          *piVar10 = *local_98;
          piVar10[1] = piVar7[-2];
          piVar10[2] = piVar7[-1];
          piVar10[3] = *piVar7;
          piVar10[4] = piVar7[1];
          *local_98 = iVar1;
          piVar7[-2] = iVar2;
          piVar7[-1] = iVar3;
          *piVar7 = iVar4;
          piVar7[1] = iVar5;
          piVar8 = local_98;
        }
        piVar8 = piVar8 + 5;
        piVar7 = piVar7 + 5;
        piVar10 = piVar9;
        local_98 = piVar8;
      } while (piVar8 < param_3);
    }
    piVar7 = piVar8;
    if (param_2 < piVar12) {
      piVar8 = piVar12 + -2;
      piVar10 = piVar6 + 3;
      do {
        piVar11 = piVar10;
        piVar7 = local_98;
        if (*piVar6 <= piVar8[-3]) {
          if (*piVar6 < piVar8[-3]) break;
          iVar1 = piVar6[-5];
          piVar6 = piVar6 + -5;
          piVar11 = piVar10 + -5;
          iVar2 = piVar10[-7];
          iVar3 = piVar10[-6];
          iVar4 = piVar10[-5];
          iVar5 = piVar10[-4];
          *piVar6 = piVar8[-3];
          piVar10[-7] = piVar8[-2];
          piVar10[-6] = piVar8[-1];
          *piVar11 = *piVar8;
          piVar10[-4] = piVar8[1];
          piVar8[-3] = iVar1;
          piVar8[-2] = iVar2;
          piVar8[-1] = iVar3;
          *piVar8 = iVar4;
          piVar8[1] = iVar5;
        }
        piVar12 = piVar12 + -5;
        piVar8 = piVar8 + -5;
        piVar10 = piVar11;
      } while (param_2 < piVar12);
    }
    if (piVar12 == param_2) {
      if (piVar7 == param_3) {
        *param_1 = piVar6;
        param_1[1] = piVar9;
        return param_1;
      }
      if (piVar9 != piVar7) {
        iVar1 = *piVar6;
        iVar2 = piVar6[1];
        iVar3 = piVar6[2];
        iVar4 = piVar6[3];
        iVar5 = piVar6[4];
        *piVar6 = *piVar9;
        piVar6[1] = piVar9[1];
        piVar6[2] = piVar9[2];
        piVar6[3] = piVar9[3];
        piVar6[4] = piVar9[4];
        *piVar9 = iVar1;
        piVar9[1] = iVar2;
        piVar9[2] = iVar3;
        piVar9[3] = iVar4;
        piVar9[4] = iVar5;
      }
      iVar1 = *piVar6;
      iVar2 = piVar6[1];
      iVar3 = piVar6[2];
      iVar4 = piVar6[3];
      iVar5 = piVar6[4];
      *piVar6 = *piVar7;
      piVar6[1] = piVar7[1];
      piVar6[2] = piVar7[2];
      piVar6[3] = piVar7[3];
      piVar6[4] = piVar7[4];
      *piVar7 = iVar1;
      piVar7[1] = iVar2;
      piVar7[2] = iVar3;
      piVar7[3] = iVar4;
      piVar7[4] = iVar5;
      piVar6 = piVar6 + 5;
      piVar9 = piVar9 + 5;
      piVar8 = piVar7 + 5;
      local_98 = piVar7 + 5;
    }
    else {
      piVar10 = piVar12 + -5;
      if (piVar7 == param_3) {
        piVar8 = piVar6 + -5;
        if (piVar10 != piVar8) {
          iVar1 = *piVar10;
          iVar2 = piVar12[-4];
          iVar3 = piVar12[-3];
          iVar4 = piVar12[-2];
          iVar5 = piVar12[-1];
          *piVar10 = *piVar8;
          piVar12[-4] = piVar6[-4];
          piVar12[-3] = piVar6[-3];
          piVar12[-2] = piVar6[-2];
          piVar12[-1] = piVar6[-1];
          *piVar8 = iVar1;
          piVar6[-4] = iVar2;
          piVar6[-3] = iVar3;
          piVar6[-2] = iVar4;
          piVar6[-1] = iVar5;
        }
        iVar1 = *piVar8;
        iVar2 = piVar6[-4];
        piVar12 = piVar9 + -5;
        iVar3 = piVar6[-3];
        iVar4 = piVar6[-2];
        iVar5 = piVar6[-1];
        *piVar8 = *piVar12;
        piVar6[-4] = piVar9[-4];
        piVar6[-3] = piVar9[-3];
        piVar6[-2] = piVar9[-2];
        piVar6[-1] = piVar9[-1];
        *piVar12 = iVar1;
        piVar9[-4] = iVar2;
        piVar9[-3] = iVar3;
        piVar9[-2] = iVar4;
        piVar9[-1] = iVar5;
        piVar6 = piVar8;
        piVar9 = piVar12;
        piVar8 = piVar7;
        piVar12 = piVar10;
      }
      else {
        iVar1 = *piVar7;
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        iVar5 = piVar7[4];
        *piVar7 = *piVar10;
        piVar7[1] = piVar12[-4];
        piVar7[2] = piVar12[-3];
        piVar7[3] = piVar12[-2];
        piVar7[4] = piVar12[-1];
        *piVar10 = iVar1;
        piVar12[-4] = iVar2;
        piVar12[-3] = iVar3;
        piVar12[-2] = iVar4;
        piVar12[-1] = iVar5;
        piVar8 = piVar7 + 5;
        piVar12 = piVar10;
        local_98 = piVar7 + 5;
      }
    }
  } while( true );
}
