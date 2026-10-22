/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42F6F913A08F2B598EA2A8F78063C85FA5C220BF2DF62C854D3C089BC07DFACA
 * Entry: 0x00250c60, Ghidra index: 8354, label: FUN_00250c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00250c60(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_002510b0(param_2,piVar3,param_3 + -1,param_4);
  for (piVar4 = piVar3; param_2 < piVar4; piVar4 = piVar4 + -1) {
    iVar1 = piVar4[-1];
    if (iVar1 == 0) {
LAB_00250cbd:
      if (((*piVar4 != 0) && (iVar1 != 0)) && (*(int *)(*piVar4 + 0x10) < *(int *)(iVar1 + 0x10)))
      break;
    }
    else if (*piVar4 != 0) {
      if (*(int *)(*piVar4 + 0x10) <= *(int *)(iVar1 + 0x10)) goto LAB_00250cbd;
      break;
    }
  }
joined_r0x00250cdf:
  do {
    piVar3 = piVar3 + 1;
    piVar5 = piVar3;
    piVar2 = piVar4;
    if (param_3 <= piVar3) break;
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      if (*piVar4 == 0) goto joined_r0x00250cdf;
      if (*(int *)(iVar1 + 0x10) < *(int *)(*piVar4 + 0x10)) break;
    }
  } while (((*piVar4 == 0) || (iVar1 == 0)) || (*(int *)(iVar1 + 0x10) <= *(int *)(*piVar4 + 0x10)))
  ;
joined_r0x00250d24:
  do {
    if (param_3 <= piVar3) {
joined_r0x00250d72:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        iVar1 = piVar4[-1];
        if (iVar1 == 0) {
LAB_00250d8e:
          if (((*piVar2 != 0) && (iVar1 != 0)) &&
             (*(int *)(*piVar2 + 0x10) < *(int *)(iVar1 + 0x10))) break;
LAB_00250da5:
          iVar1 = piVar2[-1];
          piVar2 = piVar2 + -1;
          *piVar2 = piVar4[-1];
          piVar4[-1] = iVar1;
        }
        else {
          if (*piVar2 == 0) goto LAB_00250da5;
          if (*(int *)(*piVar2 + 0x10) <= *(int *)(iVar1 + 0x10)) goto LAB_00250d8e;
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
      goto joined_r0x00250d24;
    }
    iVar1 = *piVar2;
    if (iVar1 == 0) {
LAB_00250d3f:
      if (((*piVar3 != 0) && (iVar1 != 0)) && (*(int *)(*piVar3 + 0x10) < *(int *)(iVar1 + 0x10)))
      goto joined_r0x00250d72;
LAB_00250d56:
      iVar1 = *piVar5;
      *piVar5 = *piVar3;
      piVar5 = piVar5 + 1;
      *piVar3 = iVar1;
    }
    else {
      if (*piVar3 == 0) goto LAB_00250d56;
      if (*(int *)(*piVar3 + 0x10) <= *(int *)(iVar1 + 0x10)) goto LAB_00250d3f;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}
