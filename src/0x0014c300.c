/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69CADE87A2F90CD6D2783D1667A1A1955B85B77305E7A6F4F9B92E235FC3BB7C
 * Entry: 0x0014c300, Ghidra index: 4336, label: FUN_0014c300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0014c300(undefined4 param_1,int param_2,uint param_3,int *param_4,int *param_5,
            undefined4 param_6)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  int *local_c;
  int local_8;
  int local_4;
  
  local_c = (int *)0x0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 10;
  local_14 = 0xffffffff;
  FUN_00064490();
  piVar2 = local_c;
  while (iVar8 = local_8, cVar3 = FUN_0014c230(param_1,&local_20,&local_1c,param_6), cVar3 != '\0')
  {
    local_18 = local_20;
    local_14 = local_1c;
    if ((piVar2 == (int *)0x0) ||
       ((uint)(local_4 - (int)piVar2 >> 3) <= (uint)(iVar8 - (int)piVar2 >> 3))) {
      FUN_001e10c0(iVar8,&local_18);
      piVar2 = local_c;
    }
    else {
      FUN_00144b10(iVar8,1,local_10,param_2);
      local_8 = iVar8 + 8;
    }
  }
  piVar7 = piVar2;
  for (uVar6 = 0; (piVar2 != (int *)0x0 && (uVar6 < (uint)(iVar8 - (int)piVar2 >> 3)));
      uVar6 = uVar6 + 1) {
    iVar5 = *piVar7;
    if (iVar5 == 10) {
      if (param_2 == 10) break;
    }
    else if ((param_2 == 10) ||
            ((param_2 <= iVar5 && ((iVar5 != param_2 || (param_3 <= (uint)piVar7[1])))))) break;
    piVar7 = piVar7 + 2;
  }
  if (uVar6 != 0) {
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = iVar8 - (int)piVar2 >> 3;
    }
    if (uVar6 != uVar4) {
      iVar5 = piVar2[uVar6 * 2 + -2];
      iVar8 = piVar2[uVar6 * 2 + -1];
      goto LAB_0014c432;
    }
  }
  iVar5 = *(int *)(iVar8 + -8);
  iVar8 = *(int *)(iVar8 + -4);
LAB_0014c432:
  *param_4 = iVar5;
  *param_5 = iVar8;
  if ((iVar5 == 10) && (iVar8 == -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (piVar2 == (int *)0x0) {
    return CONCAT31((int3)((uint)iVar5 >> 8),!bVar1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
