/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D98E6D6EC1D2F55C70B24A29387345AAC0282F3820E071D0C4BAD838F6EF57F8
 * Entry: 0x0005b3c0, Ghidra index: 920, label: FUN_0005b3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005b3c0(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined4 *in_EAX;
  int iVar6;
  float10 fVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_1;
  *param_2 = 0;
  piVar1 = (int *)param_1[2];
  param_1 = (int *)0x1;
  if ((piVar1 == (int *)0x0) ||
     (((uint)piVar1 & -(uint)((*(byte *)((int)piVar1 + 0x26) & 0x40) != 0)) == 0)) {
    param_1 = (int *)0x0;
  }
  else {
    iVar6 = (**(code **)(*piVar1 + 0x40))();
    uVar2 = *(undefined4 *)(iVar6 + 0x2c);
    uVar3 = *(undefined4 *)(iVar6 + 0x28);
    *in_EAX = *(undefined4 *)(iVar6 + 0x24);
    in_EAX[1] = uVar3;
    in_EAX[2] = uVar2;
    iVar6 = FUN_000388b0(*(undefined4 *)(*piVar4 + 0x358));
    if ((iVar6 == 0) || (*(int *)(iVar6 + 100) != 1)) {
      in_EAX[1] = in_EAX[1];
      in_EAX[2] = in_EAX[2];
      return 1;
    }
    iVar6 = FUN_000120f0();
    iVar6 = *(int *)(iVar6 + 0x2e8);
    cVar5 = (**(code **)(*(int *)(iVar6 + 0x144) + 0x20))();
    if ((((cVar5 != '\0') && (iVar6 = *(int *)(iVar6 + 0x164), iVar6 != 0)) &&
        (*(int *)(*(int *)(iVar6 + 0xc) + 4) == 0x14)) &&
       ((iVar6 != 0 && (0.99 < *(float *)(*(int *)(iVar6 + 0x228) + 0x24))))) {
      *param_2 = 1;
      iVar6 = (**(code **)(*piVar1 + 0x40))();
      uVar2 = *(undefined4 *)(iVar6 + 0x2c);
      uVar3 = *(undefined4 *)(iVar6 + 0x28);
      *in_EAX = *(undefined4 *)(iVar6 + 0x24);
      in_EAX[1] = uVar3;
      in_EAX[2] = uVar2;
      return 1;
    }
    if ((float)piVar4[5] <= 0.0) {
      *param_2 = 1;
      return 1;
    }
    cVar5 = FUN_0005b1b0(piVar4[5],&uStack_c);
    if (cVar5 != '\0') {
      *in_EAX = uStack_c;
      in_EAX[1] = uStack_8;
      in_EAX[2] = uStack_4;
      (**(code **)(*piVar1 + 0x40))();
      fVar7 = (float10)FUN_00039460();
      if (fVar7 < (float10)0.010000001) {
        *param_2 = 1;
        if (piVar4[3] == 1) {
          FUN_0005b260();
          return 1;
        }
        if (piVar4[3] == 0) {
          FUN_0005b2e0(in_EAX);
          return 1;
        }
      }
    }
  }
  return param_1;
}
