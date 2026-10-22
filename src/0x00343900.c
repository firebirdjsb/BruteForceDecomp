/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FA66225CF6D20BA351ADD25F017D59F732DE069E95BA436A852FBA9B4DCCB3E
 * Entry: 0x00343900, Ghidra index: 12717, label: FUN_00343900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00343900(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0xfffffc0f;
  }
  else {
    *param_3 = 0;
    piVar3 = *(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar3 + 0x14;
    if (*(int **)(param_1 + 4) < piVar3 + 0x14) {
      *(int **)(param_1 + 8) = piVar3;
      piVar3 = (int *)0x0;
    }
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xfffffc12;
    }
    else {
      piVar4 = piVar3;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      piVar3[7] = 0;
      *piVar3 = param_1;
      piVar3[1] = 0x44434544;
      piVar3[0xb] = *(int *)(param_2 + 8);
      piVar3[3] = param_2;
      if (param_4 != 0) {
        piVar3[0xb] = piVar3[0xb] | 8;
        piVar3[9] = param_4;
        piVar3[4] = param_4;
        piVar3[5] = param_5;
      }
      if (param_6 == 0) {
        piVar3[0xc] = (int)piVar3;
        iVar2 = *(int *)(param_2 + 4);
      }
      else {
        piVar3[0xc] = param_6;
        iVar2 = *(int *)(param_6 + 0x28);
      }
      piVar3[10] = iVar2;
      if (param_6 != 0) {
        *(int **)(param_6 + 0x34) = piVar3;
      }
      *param_3 = piVar3;
      uVar1 = 0;
    }
  }
  return uVar1;
}
