/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3CA03D3DD0DF1A25419200D71F9B375E20BE0472A5577B1848E381DBEC8C75C
 * Entry: 0x0023d460, Ghidra index: 7956, label: FUN_0023d460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d460(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1;
  puVar5 = *(undefined4 **)(param_1 + 8);
  piVar2 = (int *)FUN_0023df90(&param_1,puVar5);
  puVar3 = (undefined4 *)*piVar2;
  puVar4 = puVar5;
  if (puVar5 != puVar3) {
    do {
      FUN_0023cc80();
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
    if (puVar5 != puVar3) {
      puVar4 = *(undefined4 **)(iVar1 + 0xc);
      for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
        *puVar5 = *puVar3;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 **)(iVar1 + 0xc) = puVar5;
    }
  }
  if ((*(int *)(iVar1 + 8) == 0) || (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2 == 0)) {
    *(float *)(iVar1 + 0x40) = *(float *)(*(int *)(iVar1 + 0x20) + 0x3c) - *(float *)(iVar1 + 0x3c);
  }
  return;
}
