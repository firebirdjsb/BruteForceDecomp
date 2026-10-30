/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0033C142548739D856EBA83570A0D943170A29B524E42FADFE7139AA8CBA63A7
 * Entry: 0x000d3be0, Ghidra index: 2631, label: FUN_000d3be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d3e40(int param_1,undefined4 param_2);

undefined4 * FUN_000d3be0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_000d3e40(param_3 + -1,param_4);
  piVar6 = piVar4 + 1;
  while (((param_2 < piVar4 &&
          (uVar1 = *(uint *)(*(int *)(piVar4[-1] + 0xc) + 4),
          uVar2 = *(uint *)(*(int *)(*piVar4 + 0xc) + 4), uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2))) {
    piVar4 = piVar4 + -1;
  }
  piVar7 = piVar6;
  piVar5 = piVar4;
  if (piVar6 < param_3) {
    uVar1 = *(uint *)(*(int *)(*piVar4 + 0xc) + 4);
    do {
      uVar2 = *(uint *)(*(int *)(*piVar6 + 0xc) + 4);
      piVar7 = piVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      piVar6 = piVar6 + 1;
      piVar7 = piVar6;
    } while (piVar6 < param_3);
  }
joined_r0x000d3c74:
  do {
    if (param_3 <= piVar6) {
joined_r0x000d3ca8:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        uVar1 = *(uint *)(*(int *)(piVar4[-1] + 0xc) + 4);
        uVar2 = *(uint *)(*(int *)(*piVar5 + 0xc) + 4);
        if (uVar2 <= uVar1) {
          if (uVar2 < uVar1) break;
          iVar3 = piVar5[-1];
          piVar5 = piVar5 + -1;
          *piVar5 = piVar4[-1];
          piVar4[-1] = iVar3;
        }
      }
      if (piVar4 == param_2) {
        if (piVar6 == param_3) {
          param_1[1] = piVar7;
          *param_1 = piVar5;
          return param_1;
        }
        if (piVar7 != piVar6) {
          iVar3 = *piVar5;
          *piVar5 = *piVar7;
          *piVar7 = iVar3;
        }
        iVar3 = *piVar5;
        *piVar5 = *piVar6;
        *piVar6 = iVar3;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      }
      else {
        piVar4 = piVar4 + -1;
        if (piVar6 == param_3) {
          piVar5 = piVar5 + -1;
          if (piVar4 != piVar5) {
            iVar3 = *piVar4;
            *piVar4 = *piVar5;
            *piVar5 = iVar3;
          }
          iVar3 = *piVar5;
          *piVar5 = piVar7[-1];
          piVar7[-1] = iVar3;
          piVar7 = piVar7 + -1;
        }
        else {
          iVar3 = *piVar6;
          *piVar6 = *piVar4;
          *piVar4 = iVar3;
          piVar6 = piVar6 + 1;
        }
      }
      goto joined_r0x000d3c74;
    }
    uVar1 = *(uint *)(*(int *)(*piVar5 + 0xc) + 4);
    uVar2 = *(uint *)(*(int *)(*piVar6 + 0xc) + 4);
    if (uVar2 <= uVar1) {
      if (uVar2 < uVar1) goto joined_r0x000d3ca8;
      iVar3 = *piVar7;
      *piVar7 = *piVar6;
      piVar7 = piVar7 + 1;
      *piVar6 = iVar3;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}
