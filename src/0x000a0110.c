/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCC2C3024C49554808BDDCFCA9F46DF7815645CB3AC9D1218BD9B38964B2F536
 * Entry: 0x000a0110, Ghidra index: 1894, label: FUN_000a0110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_000a0110(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_80;
  int *local_7c;
  uint local_78;
  uint local_74 [4];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_000a0750(param_3 + -3,param_4);
  piVar7 = piVar5 + 3;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = *piVar5;
      iVar2 = piVar5[-3];
      local_7c = (int *)(uint)(iVar1 < iVar2);
      local_78 = (uint)((uint)piVar5[2] < (uint)piVar5[-1]);
      if ((&local_7c)[iVar2 == iVar1] != (int *)0x0) break;
      local_74[1] = (uint)((uint)piVar5[-1] < (uint)piVar5[2]);
      local_74[0] = (uint)(iVar2 < iVar1);
      if ((local_74[iVar1 == iVar2] != 0) || (piVar5 = piVar5 + -3, piVar5 <= param_2)) break;
    }
  }
  if (piVar7 < param_3) {
    iVar1 = *piVar5;
    while( true ) {
      iVar2 = *piVar7;
      local_74[0] = (uint)(iVar1 < iVar2);
      local_74[1] = (uint)((uint)piVar5[2] < (uint)piVar7[2]);
      if (local_74[iVar2 == iVar1] != 0) break;
      local_78 = (uint)((uint)piVar7[2] < (uint)piVar5[2]);
      local_7c = (int *)(uint)(iVar2 < iVar1);
      if (((&local_7c)[iVar1 == iVar2] != (int *)0x0) || (piVar7 = piVar7 + 3, param_3 <= piVar7))
      break;
    }
  }
  local_7c = piVar5;
  piVar9 = piVar7;
  local_80 = piVar7;
  do {
    while (piVar4 = local_7c, param_3 <= piVar7) {
joined_r0x000a030e:
      while (param_2 < piVar4) {
        piVar8 = local_7c + -3;
        iVar1 = *piVar5;
        iVar2 = *piVar8;
        local_64 = (uint)(iVar1 < iVar2);
        local_60 = (uint)((uint)piVar5[2] < (uint)local_7c[-1]);
        piVar6 = piVar5;
        piVar9 = local_80;
        if (local_74[(iVar2 == iVar1) + 4] == 0) {
          local_5c = (uint)(iVar2 < iVar1);
          local_58 = (uint)((uint)local_7c[-1] < (uint)piVar5[2]);
          if (local_74[(iVar1 == iVar2) + 6] != 0) break;
          piVar6 = piVar5 + -3;
          iVar1 = *piVar6;
          iVar2 = piVar5[-2];
          iVar3 = piVar5[-1];
          *piVar6 = *piVar8;
          piVar5[-2] = local_7c[-2];
          piVar5[-1] = local_7c[-1];
          *piVar8 = iVar1;
          local_7c[-2] = iVar2;
          local_7c[-1] = iVar3;
        }
        local_7c = piVar4 + -3;
        piVar5 = piVar6;
        local_7c = piVar8;
        piVar4 = piVar4 + -3;
      }
      if (piVar4 == param_2) {
        if (piVar7 == param_3) {
          param_1[1] = (uint)piVar9;
          *param_1 = (uint)piVar5;
          return param_1;
        }
        if (piVar9 != piVar7) {
          iVar1 = *piVar5;
          iVar2 = piVar5[1];
          iVar3 = piVar5[2];
          *piVar5 = *piVar9;
          piVar5[1] = piVar9[1];
          piVar5[2] = piVar9[2];
          *piVar9 = iVar1;
          piVar9[1] = iVar2;
          piVar9[2] = iVar3;
        }
        iVar1 = *piVar5;
        iVar2 = piVar5[1];
        iVar3 = piVar5[2];
        *piVar5 = *piVar7;
        piVar5[1] = piVar7[1];
        piVar5[2] = piVar7[2];
        *piVar7 = iVar1;
        piVar7[1] = iVar2;
        local_80 = piVar9 + 3;
        piVar7[2] = iVar3;
        piVar7 = piVar7 + 3;
        piVar9 = local_80;
        local_7c = piVar4;
        piVar5 = piVar5 + 3;
      }
      else {
        local_7c = piVar4 + -3;
        if (piVar7 == param_3) {
          piVar6 = piVar5 + -3;
          if (local_7c != piVar6) {
            iVar1 = *local_7c;
            iVar2 = piVar4[-2];
            iVar3 = piVar4[-1];
            *local_7c = *piVar6;
            piVar4[-2] = piVar5[-2];
            piVar4[-1] = piVar5[-1];
            *piVar6 = iVar1;
            piVar5[-2] = iVar2;
            piVar5[-1] = iVar3;
          }
          iVar1 = *piVar6;
          iVar2 = piVar5[-2];
          iVar3 = piVar5[-1];
          local_80 = piVar9 + -3;
          *piVar6 = *local_80;
          piVar5[-2] = piVar9[-2];
          piVar5[-1] = piVar9[-1];
          *local_80 = iVar1;
          piVar9[-2] = iVar2;
          piVar9[-1] = iVar3;
          piVar9 = local_80;
          piVar5 = piVar6;
        }
        else {
          iVar1 = *piVar7;
          iVar2 = piVar7[1];
          iVar3 = piVar7[2];
          *piVar7 = *local_7c;
          piVar7[1] = piVar4[-2];
          piVar7[2] = piVar4[-1];
          *local_7c = iVar1;
          piVar4[-2] = iVar2;
          piVar4[-1] = iVar3;
          piVar7 = piVar7 + 3;
        }
      }
    }
    iVar1 = *piVar5;
    iVar2 = *piVar7;
    local_74[0] = (uint)(iVar2 < iVar1);
    local_74[1] = (uint)((uint)piVar7[2] < (uint)piVar5[2]);
    if (local_74[iVar1 == iVar2] == 0) {
      local_74[2] = (uint)(iVar1 < iVar2);
      local_74[3] = (uint)((uint)piVar5[2] < (uint)piVar7[2]);
      local_80 = piVar9;
      if (local_74[(iVar2 == iVar1) + 2] != 0) goto joined_r0x000a030e;
      iVar1 = *piVar9;
      iVar2 = piVar9[1];
      iVar3 = piVar9[2];
      *piVar9 = *piVar7;
      piVar9[1] = piVar7[1];
      piVar9[2] = piVar7[2];
      *piVar7 = iVar1;
      piVar7[1] = iVar2;
      piVar9 = piVar9 + 3;
      piVar7[2] = iVar3;
    }
    piVar7 = piVar7 + 3;
    local_80 = piVar9;
  } while( true );
}
