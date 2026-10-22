/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4149B904D92F8517FB7D912FC991119BD41F22CA3F252DFEE6EFB70B51C20570
 * Entry: 0x000e8c80, Ghidra index: 2878, label: FUN_000e8c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_000e8c80(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_88;
  int *local_84;
  uint local_80;
  int *local_7c;
  uint local_78;
  uint local_74 [14];
  uint local_3c [4];
  uint local_2c;
  uint local_28;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_000e92f0(param_3 + -3,param_4);
  piVar7 = piVar5 + 3;
  if (param_2 < piVar5) {
    local_7c = piVar5 + -2;
    do {
      iVar1 = *local_7c;
      iVar2 = local_7c[3];
      local_84 = (int *)(uint)(iVar2 < iVar1);
      local_80 = (uint)(*piVar5 < local_7c[-1]);
      if ((&local_84)[iVar1 == iVar2] != (int *)0x0) break;
      local_74[0] = (uint)(iVar1 < iVar2);
      local_74[1] = (uint)(local_7c[-1] < *piVar5);
      if (local_74[iVar2 == iVar1] != 0) break;
      piVar5 = piVar5 + -3;
      local_7c = local_7c + -3;
    } while (param_2 < piVar5);
  }
  if (piVar7 < param_3) {
    iVar1 = piVar5[1];
    while( true ) {
      iVar2 = piVar7[1];
      local_74[0] = (uint)(iVar1 < iVar2);
      local_74[1] = (uint)(*piVar5 < *piVar7);
      if (local_74[iVar2 == iVar1] != 0) break;
      local_7c = (int *)(uint)(iVar2 < iVar1);
      local_78 = (uint)(*piVar7 < *piVar5);
      if (((&local_7c)[iVar1 == iVar2] != (int *)0x0) || (piVar7 = piVar7 + 3, param_3 <= piVar7))
      break;
    }
  }
  local_84 = piVar5;
  piVar8 = piVar7;
  local_88 = piVar7;
  do {
    while (param_3 <= piVar7) {
LAB_000e8e92:
      if (param_2 < local_84) {
        local_7c = local_84 + -3;
        do {
          iVar1 = local_7c[1];
          iVar2 = piVar5[1];
          local_3c[2] = (uint)(iVar2 < iVar1);
          local_3c[3] = (uint)(*piVar5 < *local_7c);
          if (local_3c[(iVar1 == iVar2) + 2] == 0) {
            local_3c[0] = (uint)(iVar1 < iVar2);
            local_3c[1] = (uint)(*local_7c < *piVar5);
            piVar8 = local_88;
            if (local_3c[iVar2 == iVar1] != 0) break;
            piVar8 = piVar5 + -3;
            iVar1 = *piVar8;
            iVar2 = piVar5[-2];
            iVar3 = piVar5[-1];
            *piVar8 = *local_7c;
            piVar5[-2] = local_7c[1];
            piVar5[-1] = local_7c[2];
            *local_7c = iVar1;
            local_7c[1] = iVar2;
            local_7c[2] = iVar3;
            piVar5 = piVar8;
          }
          local_84 = local_84 + -3;
          local_7c = local_7c + -3;
          piVar8 = local_88;
        } while (param_2 < local_84);
      }
      piVar4 = local_84;
      if (local_84 == param_2) {
        if (piVar7 == param_3) {
          param_1[1] = (uint)piVar8;
          *param_1 = (uint)piVar5;
          return param_1;
        }
        if (piVar8 != piVar7) {
          iVar1 = *piVar5;
          iVar2 = piVar5[1];
          iVar3 = piVar5[2];
          *piVar5 = *piVar8;
          piVar5[1] = piVar8[1];
          piVar5[2] = piVar8[2];
          *piVar8 = iVar1;
          piVar8[1] = iVar2;
          piVar8[2] = iVar3;
        }
        iVar1 = *piVar5;
        iVar2 = piVar5[1];
        iVar3 = piVar5[2];
        *piVar5 = *piVar7;
        piVar5[1] = piVar7[1];
        piVar5[2] = piVar7[2];
        *piVar7 = iVar1;
        piVar7[1] = iVar2;
        local_88 = piVar8 + 3;
        piVar7[2] = iVar3;
        piVar7 = piVar7 + 3;
        piVar8 = local_88;
        piVar5 = piVar5 + 3;
      }
      else {
        local_84 = local_84 + -3;
        if (piVar7 == param_3) {
          piVar6 = piVar5 + -3;
          if (local_84 != piVar6) {
            iVar1 = *local_84;
            iVar2 = piVar4[-2];
            iVar3 = piVar4[-1];
            *local_84 = *piVar6;
            piVar4[-2] = piVar5[-2];
            piVar4[-1] = piVar5[-1];
            *piVar6 = iVar1;
            piVar5[-2] = iVar2;
            piVar5[-1] = iVar3;
          }
          iVar1 = *piVar6;
          iVar2 = piVar5[-2];
          iVar3 = piVar5[-1];
          local_88 = piVar8 + -3;
          *piVar6 = *local_88;
          piVar5[-2] = piVar8[-2];
          piVar5[-1] = piVar8[-1];
          *local_88 = iVar1;
          piVar8[-2] = iVar2;
          piVar8[-1] = iVar3;
          piVar8 = local_88;
          piVar5 = piVar6;
        }
        else {
          iVar1 = *piVar7;
          iVar2 = piVar7[1];
          iVar3 = piVar7[2];
          *piVar7 = *local_84;
          piVar7[1] = piVar4[-2];
          piVar7[2] = piVar4[-1];
          *local_84 = iVar1;
          piVar4[-2] = iVar2;
          piVar4[-1] = iVar3;
          piVar7 = piVar7 + 3;
        }
      }
    }
    iVar1 = piVar5[1];
    iVar2 = piVar7[1];
    local_74[0] = (uint)(iVar2 < iVar1);
    local_74[1] = (uint)(*piVar7 < *piVar5);
    if (local_74[iVar1 == iVar2] == 0) {
      local_2c = (uint)(iVar1 < iVar2);
      local_28 = (uint)(*piVar5 < *piVar7);
      piVar8 = local_88;
      if (local_3c[(iVar2 == iVar1) + 4] != 0) goto LAB_000e8e92;
      iVar1 = *local_88;
      iVar2 = local_88[1];
      iVar3 = local_88[2];
      *local_88 = *piVar7;
      local_88[1] = piVar7[1];
      local_88[2] = piVar7[2];
      *piVar7 = iVar1;
      piVar7[1] = iVar2;
      local_88 = local_88 + 3;
      piVar7[2] = iVar3;
    }
    piVar7 = piVar7 + 3;
    piVar8 = local_88;
  } while( true );
}
