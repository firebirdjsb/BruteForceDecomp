/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAFE8CFACC22E9111794B1D365E0C821608666637B11745B8BD112184EDA0844
 * Entry: 0x00344af4, Ghidra index: 12748, label: FUN_00344af4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00344af4(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return 0xfffffc0f;
  }
  FUN_0034335a(param_1,0);
  if ((param_4 & 8) == 0) {
    uVar3 = *(uint *)(param_1 + 0x30) | param_4;
    if ((uVar3 & 0x10) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff7;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_00344b58;
    }
    if (((param_4 & 4) != 0) || ((uVar3 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_00344b58;
    }
  }
  else {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    *(undefined4 *)(param_1 + 0x10) = param_5;
    *(undefined4 *)(param_1 + 0x24) = param_5;
    *(undefined4 *)(param_1 + 0x14) = param_6;
LAB_00344b58:
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (param_3 < *(uint *)(iVar2 + 0xc)) {
    if ((*(uint *)(param_1 + 0x2c) & 3) == 0) {
      if ((*(uint *)(param_1 + 0x2c) & 0x700) == 0) {
        uVar4 = 0xfffffc0b;
        goto LAB_00344c1a;
      }
      pcVar1 = *(code **)(*(int *)(iVar2 + 0x18) + param_3 * 4);
      if (pcVar1 == (code *)0x0) goto LAB_00344c15;
      iVar2 = (*pcVar1)(param_1,0,param_2);
      if (iVar2 == 0) goto LAB_00344bb7;
      FUN_003446d9(param_1);
    }
    else {
      pcVar1 = *(code **)(*(int *)(iVar2 + 0x18) + param_3 * 4);
      if (pcVar1 == (code *)0x0) goto LAB_00344c15;
      iVar2 = (*pcVar1)(param_1,param_2);
      if (iVar2 == 0) {
LAB_00344bb7:
        if (-1 < *(int *)(*(int *)(param_1 + 0x34) + 0x1c)) {
          FUN_0034335a(param_1,0xfffffc15);
        }
      }
      else {
        FUN_00343f79(param_1);
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x34) + 0x1c) < 0) {
      if (((*(uint *)(param_1 + 0x30) | param_4) & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x38);
      while (iVar2 != 0) {
        *(int *)(iVar2 + 0x34) = iVar2;
        FUN_00343092(iVar2);
        iVar2 = extraout_EDX;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x1c);
  }
  else {
LAB_00344c15:
    uVar4 = 0xfffffc10;
LAB_00344c1a:
    uVar4 = FUN_0034335a(param_1,uVar4);
  }
  return uVar4;
}
