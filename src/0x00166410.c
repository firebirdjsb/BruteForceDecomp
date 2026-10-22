/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC4CC306A9BE86858733FFEC2A08CCB08B0DAAE78670856EAAD38F328732A0BA
 * Entry: 0x00166410, Ghidra index: 4714, label: FUN_00166410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00166410(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_4;
  
  puVar6 = (undefined4 *)(param_1 + 4);
  iVar5 = (int)in_EAX - param_1;
  local_4 = 0x13;
  do {
    puVar6[-1] = *in_EAX;
    piVar1 = (int *)((int)puVar6 + iVar5);
    *puVar6 = 0;
    if (*piVar1 == 0) {
      *puVar6 = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_002ea01d(4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *puVar6 = puVar3;
    }
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      *(undefined4 *)*puVar6 = *(undefined4 *)*piVar1;
    }
    puVar3 = puVar6 + 1;
    iVar2 = 4 - (int)puVar3;
    iVar4 = 4;
    do {
      *puVar3 = *(undefined4 *)((int)piVar1 + iVar2 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar6 = puVar6 + 6;
    in_EAX = in_EAX + 6;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return param_1;
}
