/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 166AA8698188F83D49F67C1A2D8DA4F2B5D12A53D8BE97F810EC183498A0A594
 * Entry: 0x00250960, Ghidra index: 8351, label: FUN_00250960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00250960(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00250f60(param_2,piVar3,param_3 + -1,param_4);
  for (piVar4 = piVar3; param_2 < piVar4; piVar4 = piVar4 + -1) {
    iVar1 = piVar4[-1];
    if (iVar1 == 0) {
LAB_002509bd:
      if (((*piVar4 != 0) && (iVar1 != 0)) && (*(uint *)(*piVar4 + 8) < *(uint *)(iVar1 + 8)))
      break;
    }
    else if (*piVar4 != 0) {
      if (*(uint *)(*piVar4 + 8) <= *(uint *)(iVar1 + 8)) goto LAB_002509bd;
      break;
    }
  }
joined_r0x002509df:
  do {
    piVar3 = piVar3 + 1;
    piVar5 = piVar3;
    piVar2 = piVar4;
    if (param_3 <= piVar3) break;
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      if (*piVar4 == 0) goto joined_r0x002509df;
      if (*(uint *)(iVar1 + 8) < *(uint *)(*piVar4 + 8)) break;
    }
  } while (((*piVar4 == 0) || (iVar1 == 0)) || (*(uint *)(iVar1 + 8) <= *(uint *)(*piVar4 + 8)));
joined_r0x00250a24:
  do {
    if (param_3 <= piVar3) {
joined_r0x00250a72:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        iVar1 = piVar4[-1];
        if (iVar1 == 0) {
LAB_00250a8e:
          if (((*piVar2 != 0) && (iVar1 != 0)) && (*(uint *)(*piVar2 + 8) < *(uint *)(iVar1 + 8)))
          break;
LAB_00250aa5:
          iVar1 = piVar2[-1];
          piVar2 = piVar2 + -1;
          *piVar2 = piVar4[-1];
          piVar4[-1] = iVar1;
        }
        else {
          if (*piVar2 == 0) goto LAB_00250aa5;
          if (*(uint *)(*piVar2 + 8) <= *(uint *)(iVar1 + 8)) goto LAB_00250a8e;
        }
      }
      if (piVar4 == param_2) {
        if (piVar3 == param_3) {
          *param_1 = piVar2;
          param_1[1] = piVar5;
          return param_1;
        }
        if (piVar5 != piVar3) {
          iVar1 = *piVar2;
          *piVar2 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar1 = *piVar2;
        *piVar2 = *piVar3;
        *piVar3 = iVar1;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        piVar4 = piVar4 + -1;
        if (piVar3 == param_3) {
          piVar2 = piVar2 + -1;
          if (piVar4 != piVar2) {
            iVar1 = *piVar4;
            *piVar4 = *piVar2;
            *piVar2 = iVar1;
          }
          iVar1 = *piVar2;
          *piVar2 = piVar5[-1];
          piVar5[-1] = iVar1;
          piVar5 = piVar5 + -1;
        }
        else {
          iVar1 = *piVar3;
          *piVar3 = *piVar4;
          piVar3 = piVar3 + 1;
          *piVar4 = iVar1;
        }
      }
      goto joined_r0x00250a24;
    }
    iVar1 = *piVar2;
    if (iVar1 == 0) {
LAB_00250a3f:
      if (((*piVar3 != 0) && (iVar1 != 0)) && (*(uint *)(*piVar3 + 8) < *(uint *)(iVar1 + 8)))
      goto joined_r0x00250a72;
LAB_00250a56:
      iVar1 = *piVar5;
      *piVar5 = *piVar3;
      piVar5 = piVar5 + 1;
      *piVar3 = iVar1;
    }
    else {
      if (*piVar3 == 0) goto LAB_00250a56;
      if (*(uint *)(*piVar3 + 8) <= *(uint *)(iVar1 + 8)) goto LAB_00250a3f;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}
