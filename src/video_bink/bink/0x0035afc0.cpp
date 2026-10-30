/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3466170A314FE2468D6BC53AF9C1E74D0BC899E635DD20047252752A382C2049
 * Entry: 0x0035afc0, Ghidra index: 13195, label: FUN_0035afc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0035afc0(int *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)param_1[6];
    if (piVar1 == param_2) {
      param_1[6] = *piVar1;
LAB_0035aff8:
      uVar3 = 1;
    }
    else {
      iVar4 = *piVar1;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar1;
        if (piVar2 == param_2) {
          *piVar1 = *param_2;
          goto LAB_0035aff8;
        }
        piVar1 = piVar2;
        iVar4 = *piVar2;
      }
    }
  }
  if (param_3 != (int *)0x0) {
    piVar1 = (int *)param_3[6];
    if (piVar1 == param_4) {
      param_3[6] = *piVar1;
LAB_0035b033:
      uVar3 = uVar3 | 2;
    }
    else {
      iVar4 = *piVar1;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar1;
        if (piVar2 == param_4) {
          *piVar1 = *param_4;
          goto LAB_0035b033;
        }
        piVar1 = piVar2;
        iVar4 = *piVar2;
      }
    }
  }
  if (uVar3 == 1) {
    iVar4 = FUN_0035af50(param_5);
    return iVar4;
  }
  if (uVar3 == 2) {
    iVar4 = FUN_0035af50(param_5);
    return iVar4 << 1;
  }
  if (uVar3 != 3) {
    return 0;
  }
  param_1[8] = param_1[8] + -1;
  param_3[8] = param_3[8] + -1;
  if ((param_5 & 1) != 0) {
    if (param_1[6] == 0) {
      if (param_3[6] == 0) {
        FUN_0035ae50(param_1,param_3);
        iVar4 = 3;
      }
      else {
        FUN_0035abe0();
        *param_3 = 4;
        FUN_0035a960();
        FUN_0035ac20();
        *param_3 = 2;
        FUN_0035acd0(param_3);
        iVar4 = 1;
      }
      goto LAB_0035b149;
    }
    if (param_3[6] == 0) {
      FUN_0035abe0();
      *param_1 = 4;
      FUN_0035a960();
      FUN_0035ac20();
      *param_1 = 2;
      FUN_0035acd0(param_1);
      iVar4 = 2;
      goto LAB_0035b149;
    }
  }
  FUN_0035ac50(param_1,param_3);
  iVar4 = *param_1;
  *param_1 = 1;
  if (iVar4 == 0) {
    XAPILIB__ResumeThread(param_1[3]);
  }
  else {
    XAPILIB__ReleaseMutex(param_1[5]);
  }
  iVar4 = *param_3;
  *param_3 = 1;
  if (iVar4 == 0) {
    XAPILIB__ResumeThread(param_3[3]);
  }
  else {
    XAPILIB__ReleaseMutex(param_3[5]);
  }
  iVar4 = 0;
LAB_0035b149:
  XAPILIB__CloseHandle(param_2[1]);
  XAPILIB__CloseHandle(param_4[1]);
  param_2[1] = 0;
  param_4[1] = 0;
  return iVar4;
}
