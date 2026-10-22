/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06D1D36C462852BB4D29DCDEBA6EB81CD1A945A5E29D6A9C4F6B94142537D0CA
 * Entry: 0x001150e0, Ghidra index: 3577, label: FUN_001150e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001150e0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((*(char *)((int)param_2 + 0x26) < '\0') &&
     (piVar6 = *(int **)(param_1 + 0x50c), piVar6 != *(int **)(param_1 + 0x510))) {
LAB_00115104:
    puVar1 = (undefined4 *)*piVar6;
    if ((int *)puVar1[4] != param_2) goto code_r0x0011510b;
    FUN_0016ad50();
    piVar2 = *(int **)(param_1 + 0x510);
    piVar5 = piVar6 + 1;
    if (piVar5 != piVar2) {
      iVar7 = (int)piVar6 - (int)piVar5;
      do {
        *(int *)(iVar7 + (int)piVar5) = *piVar5;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar2);
    }
    *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x510) + -4;
    iVar7 = puVar1[2];
    if ((int *)puVar1[1] != (int *)0x0) {
      (**(code **)(*(int *)puVar1[1] + 0x18))(1);
    }
    (**(code **)*puVar1)(1);
  }
LAB_00115170:
  iVar3 = param_2[0x1b];
  if ((iVar3 != 0) && (iVar3 != -1)) {
    if ((*(int *)(iVar3 + 0x10) != 0) &&
       ((iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 100), iVar4 != 0 && (iVar4 != -1)))) {
      FUN_00235e40();
    }
    if (iVar3 == *(int *)(param_1 + 0x3ac)) {
      *(undefined4 *)(param_1 + 0x3ac) = 0;
    }
  }
  if (iVar7 == 0) {
    (**(code **)(*param_2 + 0xb8))(0x3f800000);
    return;
  }
  if ((*(uint *)(iVar7 + 0x70) & 0x300) != 0) {
    if (*(int **)(iVar7 + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(iVar7 + 0x84) + 0x10))(1);
    }
    *(undefined4 *)(iVar7 + 0x84) = 0;
    *(uint *)(iVar7 + 0x70) = *(uint *)(iVar7 + 0x70) & 0xfffffcff;
    FUN_002b32b0(iVar7,1);
    if ((*(uint *)(iVar7 + 0x70) & 0x300) != 0) goto LAB_0011521a;
  }
  FUN_002c00d0(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x10));
  *(uint *)(iVar7 + 0x70) = *(uint *)(iVar7 + 0x70) & 0xfffffdff | 0x100;
LAB_0011521a:
  iVar7 = *(int *)(param_1 + 8);
  piVar6 = (int *)0x0;
  if (*(undefined4 **)(iVar7 + 0xe0) != (undefined4 *)0x0) {
    piVar6 = (int *)**(undefined4 **)(iVar7 + 0xe0);
  }
  piVar5 = *(int **)(iVar7 + 0xe0);
  if (piVar6 != piVar5) {
    do {
      if ((int *)piVar6[2] == param_2) break;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar5);
    if (piVar6 != piVar5) {
      return;
    }
  }
  iVar3 = *(int *)(iVar7 + 0xe0);
  iVar7 = FUN_000ff730(iVar7 + 0xdc,iVar3,*(undefined4 *)(iVar3 + 4),&param_2);
  FUN_000b2a50();
  *(int *)(iVar3 + 4) = iVar7;
  **(int **)(iVar7 + 4) = iVar7;
  return;
code_r0x0011510b:
  piVar6 = piVar6 + 1;
  if (piVar6 == *(int **)(param_1 + 0x510)) goto LAB_00115170;
  goto LAB_00115104;
}
