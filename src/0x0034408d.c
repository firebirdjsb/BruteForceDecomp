/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 234965093F7652ACA4DAB3F2A83BFB0439ED96C7C284A137C1C1CBB1FBD8C5E8
 * Entry: 0x0034408d, Ghidra index: 12732, label: FUN_0034408d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034408d(int param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 0xfffffc0f;
  }
  FUN_00343377(param_1,0);
  if ((param_4 & 8) == 0) {
    if (((param_4 & 4) != 0) || (((*(uint *)(param_1 + 0x2c) | param_4) & 1) == 0)) {
      param_5 = *(int *)(param_1 + 0x10);
      goto LAB_003440e9;
    }
  }
  else {
    if ((param_5 == 0) || (param_6 == 0)) {
      uVar3 = 0xfffffc0f;
      goto LAB_003441d6;
    }
    *(int *)(param_1 + 0x10) = param_5;
    *(int *)(param_1 + 0x14) = param_6;
LAB_003440e9:
    *(int *)(param_1 + 0x24) = param_5;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (param_3 < *(uint *)(*(int *)(param_1 + 0xc) + 0xc)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    iVar2 = FUN_00343e85(param_1,*(undefined4 *)
                                  (*(int *)(*(int *)(param_1 + 0xc) + 0x14) + param_3 * 4));
    *param_2 = iVar2;
    if (iVar2 == 0) {
      return 0xfffffc12;
    }
    if ((*(uint *)(param_1 + 0x28) & 3) == 0) {
      if ((*(uint *)(param_1 + 0x28) & 0x700) == 0) {
        uVar3 = 0xfffffc0b;
        goto LAB_003441d6;
      }
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + param_3 * 4);
      if (pcVar1 != (code *)0x0) {
        iVar2 = (*pcVar1)(param_1,0,iVar2);
        if (iVar2 != 0) {
          FUN_003439a9(param_1);
          goto LAB_00344189;
        }
        goto LAB_00344176;
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + param_3 * 4);
      if (pcVar1 != (code *)0x0) {
        iVar2 = (*pcVar1)(param_1,iVar2);
        if (iVar2 != 0) {
          FUN_00343759(param_1);
          goto LAB_00344189;
        }
LAB_00344176:
        if (-1 < *(int *)(*(int *)(param_1 + 0x30) + 0x1c)) {
          FUN_00343377(param_1,0xfffffc15);
        }
LAB_00344189:
        if (*(int *)(*(int *)(param_1 + 0x30) + 0x1c) < 0) {
          FUN_003430b7(param_1,*param_2,param_3);
          *param_2 = 0;
          iVar2 = *(int *)(param_1 + 0x34);
          while (iVar2 != 0) {
            *(int *)(iVar2 + 0x30) = iVar2;
            FUN_003430a1(iVar2);
            iVar2 = extraout_EDX;
          }
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c);
      }
    }
  }
  uVar3 = 0xfffffc10;
LAB_003441d6:
  uVar3 = FUN_00343377(param_1,uVar3);
  return uVar3;
}
