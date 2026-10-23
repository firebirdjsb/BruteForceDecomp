/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03EA9C2B473CDC07DE2BD43F28EA3499D1D885E362E6E6B752805FE9FE45F39C
 * Entry: 0x000e3260, Ghidra index: 2810, label: FUN_000e3260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_000e3260(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_000e3920(param_2,piVar5,param_3 + -1,param_4);
  piVar6 = piVar5 + 1;
  for (; ((param_2 < piVar5 &&
          (uVar1 = *(uint *)(piVar5[-1] + 4), uVar2 = *(uint *)(*piVar5 + 4),
          uVar1 > uVar2 || uVar2 == uVar1)) && (uVar1 <= uVar2)); piVar5 = piVar5 + -1) {
  }
  piVar7 = piVar6;
  piVar4 = piVar5;
  if (piVar6 < param_3) {
    uVar1 = *(uint *)(*piVar5 + 4);
    do {
      uVar2 = *(uint *)(*piVar6 + 4);
      piVar7 = piVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      piVar6 = piVar6 + 1;
      piVar7 = piVar6;
    } while (piVar6 < param_3);
  }
joined_r0x000e32e4:
  do {
    if (param_3 <= piVar6) {
joined_r0x000e3314:
      for (; param_2 < piVar5; piVar5 = piVar5 + -1) {
        if (*(uint *)(*piVar4 + 4) <= *(uint *)(piVar5[-1] + 4)) {
          if (*(uint *)(*piVar4 + 4) < *(uint *)(piVar5[-1] + 4)) break;
          iVar3 = piVar4[-1];
          piVar4 = piVar4 + -1;
          *piVar4 = piVar5[-1];
          piVar5[-1] = iVar3;
        }
      }
      if (piVar5 == param_2) {
        if (piVar6 == param_3) {
          *param_1 = piVar4;
          param_1[1] = piVar7;
          return param_1;
        }
        if (piVar7 != piVar6) {
          iVar3 = *piVar4;
          *piVar4 = *piVar7;
          *piVar7 = iVar3;
        }
        iVar3 = *piVar4;
        *piVar4 = *piVar6;
        *piVar6 = iVar3;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
        piVar4 = piVar4 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        if (piVar6 == param_3) {
          piVar4 = piVar4 + -1;
          if (piVar5 != piVar4) {
            iVar3 = *piVar5;
            *piVar5 = *piVar4;
            *piVar4 = iVar3;
          }
          iVar3 = *piVar4;
          *piVar4 = piVar7[-1];
          piVar7[-1] = iVar3;
          piVar7 = piVar7 + -1;
        }
        else {
          iVar3 = *piVar6;
          *piVar6 = *piVar5;
          piVar6 = piVar6 + 1;
          *piVar5 = iVar3;
        }
      }
      goto joined_r0x000e32e4;
    }
    if (*(uint *)(*piVar6 + 4) <= *(uint *)(*piVar4 + 4)) {
      if (*(uint *)(*piVar6 + 4) < *(uint *)(*piVar4 + 4)) goto joined_r0x000e3314;
      iVar3 = *piVar7;
      *piVar7 = *piVar6;
      piVar7 = piVar7 + 1;
      *piVar6 = iVar3;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}
