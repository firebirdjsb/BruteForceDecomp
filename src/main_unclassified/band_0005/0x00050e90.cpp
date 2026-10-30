/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D87BBB4C495695EA68B10A1E59C73FE039F174C642F05C8C037E3902F40D859
 * Entry: 0x00050e90, Ghidra index: 728, label: FUN_00050e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00051350(int param_1,int param_2,int param_3);

undefined4 * FUN_00050e90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00051350(param_2,puVar2,param_3 + -1);
  puVar4 = puVar2 + 1;
  for (; param_2 < puVar2; puVar2 = puVar2 + -1) {
    if ((*(int *)puVar2[-1] < *(int *)*puVar2) || (*(int *)*puVar2 < *(int *)puVar2[-1])) break;
  }
  puVar5 = puVar4;
  puVar3 = puVar2;
  if (puVar4 < param_3) {
    do {
      puVar5 = puVar4;
      if ((*(int *)*puVar4 < *(int *)*puVar2) || (*(int *)*puVar2 < *(int *)*puVar4)) break;
      puVar4 = puVar4 + 1;
      puVar5 = puVar4;
    } while (puVar4 < param_3);
  }
joined_r0x00050f09:
  do {
    if (param_3 <= puVar4) {
joined_r0x00050f3c:
      for (; param_2 < puVar2; puVar2 = puVar2 + -1) {
        if (*(int *)*puVar3 <= *(int *)puVar2[-1]) {
          if (*(int *)*puVar3 < *(int *)puVar2[-1]) break;
          uVar1 = puVar3[-1];
          puVar3 = puVar3 + -1;
          *puVar3 = puVar2[-1];
          puVar2[-1] = uVar1;
        }
      }
      if (puVar2 == param_2) {
        if (puVar4 == param_3) {
          *param_1 = puVar3;
          param_1[1] = puVar5;
          return param_1;
        }
        if (puVar5 != puVar4) {
          uVar1 = *puVar3;
          *puVar3 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar3;
        *puVar3 = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar2 = puVar2 + -1;
        if (puVar4 == param_3) {
          puVar3 = puVar3 + -1;
          if (puVar2 != puVar3) {
            uVar1 = *puVar2;
            *puVar2 = *puVar3;
            *puVar3 = uVar1;
          }
          uVar1 = *puVar3;
          *puVar3 = puVar5[-1];
          puVar5[-1] = uVar1;
          puVar5 = puVar5 + -1;
        }
        else {
          uVar1 = *puVar4;
          *puVar4 = *puVar2;
          puVar4 = puVar4 + 1;
          *puVar2 = uVar1;
        }
      }
      goto joined_r0x00050f09;
    }
    if (*(int *)*puVar4 <= *(int *)*puVar3) {
      if (*(int *)*puVar4 < *(int *)*puVar3) goto joined_r0x00050f3c;
      uVar1 = *puVar5;
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar1;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}
