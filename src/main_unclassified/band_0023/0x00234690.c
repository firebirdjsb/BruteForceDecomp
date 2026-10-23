/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D29C4E5D80BAEE4E1DAEAD31160F2216C5FC2FD0AA609DDDDF81502E496E244F
 * Entry: 0x00234690, Ghidra index: 7803, label: FUN_00234690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234690(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  int *unaff_ESI;
  int *piStack_10;
  int iStack_c;
  
  piStack_10 = (int *)*unaff_ESI;
  iStack_c = param_2;
  (**(code **)(*piStack_10 + 0x18))();
  piVar1 = (int *)unaff_ESI[1];
  (**(code **)(*piVar1 + 0x18))();
  cVar5 = (**(code **)(*(int *)*unaff_ESI + 0x1c))((int *)*unaff_ESI);
  piVar4 = piStack_10;
  if (cVar5 == '\0') {
    piVar2 = (int *)*unaff_ESI;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if ((int *)*unaff_ESI != piVar4) {
      if (piVar2 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar2 + 0x40))(piVar2);
        if (iVar6 == param_2) {
          (**(code **)(*piVar2 + 0x3c))(piVar2,0);
        }
      }
      piVar3 = (int *)*unaff_ESI;
      if (piVar3 != piVar4) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *unaff_ESI = 0;
        }
        *unaff_ESI = (int)piVar4;
        if (piVar4 == (int *)0x0) goto LAB_0023471f;
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x3c))(piVar4,param_2);
      }
    }
LAB_0023471f:
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  piVar4 = (int *)unaff_ESI[1];
  if (piStack_10 != (int *)0x0) {
    (**(code **)(*piStack_10 + 8))(piStack_10);
    piStack_10 = (int *)0x0;
  }
  cVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4,&piStack_10);
  if (cVar5 != '\0') goto LAB_002347bd;
  piVar4 = (int *)unaff_ESI[1];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if ((int *)unaff_ESI[1] != piVar1) {
    if (piVar4 != (int *)0x0) {
      puVar7 = (undefined1 *)(**(code **)(*piVar4 + 0x40))(piVar4);
      if (puVar7 == &stack0xfffffff8) {
        (**(code **)(*piVar4 + 0x3c))(piVar4,0);
      }
    }
    piVar2 = (int *)unaff_ESI[1];
    if (piVar2 != piVar1) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        unaff_ESI[1] = 0;
      }
      unaff_ESI[1] = (int)piVar1;
      if (piVar1 == (int *)0x0) goto LAB_002347b3;
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,&stack0xfffffff8);
    }
  }
LAB_002347b3:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
LAB_002347bd:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
