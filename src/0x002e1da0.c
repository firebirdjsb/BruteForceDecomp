/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EDB302C20B4C7119BC9B74F219E859FB4F7C628427A4A6B761A67F9537146BB
 * Entry: 0x002e1da0, Ghidra index: 10375, label: FUN_002e1da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e1da0(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (param_1 == -5) {
    iVar1 = FUN_002e1150();
    return iVar1;
  }
  if (((((param_1 != 0) && (param_1 != -1)) && (param_1 != -2)) &&
      ((param_1 != -3 && (param_1 != -4)))) && (*(int *)(param_1 + 0x28) != 0)) {
    if ((*(int *)(param_1 + 700) == 0) || (iVar1 = FUN_002e12a0(param_1), -1 < iVar1)) {
      *(uint *)(param_1 + 700) = param_3;
      puVar3 = *(undefined4 **)(param_1 + 0x2c0);
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    return iVar1;
  }
  return -0x7ffbfffc;
}
