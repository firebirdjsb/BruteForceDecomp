/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F5DA41ED515B102FAB8A0914AD3A4C2E1DF45CA03952872563ACCBF969ED0AF
 * Entry: 0x0035332d, Ghidra index: 13083, label: FUN_0035332d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035332d(int param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x24);
  puVar3 = (undefined4 *)
           (-(uint)(*(undefined4 **)(param_1 + 0x28) != puVar1) &
           (uint)*(undefined4 **)(param_1 + 0x28));
  if ((puVar3 == (undefined4 *)0x0) || (-1 < param_2 - puVar3[3])) {
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    *param_3 = (uint)puVar1;
    param_3[1] = (uint)puVar3;
    *puVar3 = *param_3;
    *(uint **)(param_1 + 0x28) = param_3;
  }
  else {
    do {
      puVar3 = (undefined4 *)(-(uint)((undefined4 *)puVar3[1] != puVar1) & (uint)puVar3[1]);
      if (puVar3 == (undefined4 *)0x0) goto LAB_00353371;
    } while (param_2 - puVar3[3] < 0);
    if (puVar3 == (undefined4 *)0x0) {
LAB_00353371:
      puVar4 = (undefined4 *)*puVar1;
    }
    else {
      puVar4 = (undefined4 *)*puVar3;
    }
    uVar2 = -(uint)(puVar4 != puVar1) & (uint)puVar4;
    uVar2 = (*(int *)(uVar2 + 8) - *(int *)(uVar2 + 0xc)) + param_3[3];
    if (0 < (int)uVar2) {
      if (param_3[2] <= uVar2) {
        FUN_0034c6bc(param_3);
        return;
      }
      param_3[2] = param_3[2] - uVar2;
      param_3[3] = param_3[3] - uVar2;
    }
    FUN_00353125(param_3,puVar3);
  }
  return;
}
