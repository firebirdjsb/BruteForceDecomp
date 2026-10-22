/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89B11BDC338D3B35ACC91D56406D56E5D3168D580CB6AD631717DB9DB39C12C7
 * Entry: 0x000f2e40, Ghidra index: 3035, label: FUN_000f2e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x000f2f7c) */

undefined1 FUN_000f2e40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar4 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  pbVar3 = (byte *)(**(code **)(iVar4 + 0x130))(uVar2);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  for (piVar7 = *(int **)(param_1 + 0x74);
      (piVar8 = (int *)0x0, piVar7 != *(int **)(param_1 + 0x78) &&
      (piVar8 = (int *)*piVar7, piVar8[9] != -0xc60ef8b)); piVar7 = piVar7 + 1) {
  }
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar8 + 4))();
  if (iVar4 != 3) {
    return 0;
  }
  puVar5 = (undefined4 *)FUN_0010c850();
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(pbVar3,puVar5);
  piVar7 = DAT_00469b54;
  if (iVar4 == 0) {
    *(undefined4 *)(pbVar3 + 0x10) = *puVar5;
    *pbVar3 = *pbVar3 | 4;
    (**(code **)(*piVar7 + 0x48))(puVar5);
    iVar4 = FUN_000f2c20();
    if (iVar4 != -1) {
      iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
      *(int *)(pbVar3 + 0x9c) = iVar4 * 0x3c + *(int *)(iVar6 + 0xe0);
    }
    *pbVar3 = *pbVar3 | 0x20;
    FUN_001020a0();
    cVar1 = FUN_0010cb00(&stack0xffffffd8);
    if (cVar1 != '\0') {
      uVar2 = FUN_00102000();
      FUN_000f2dc0(uVar2,&stack0xffffffdc);
    }
    return 1;
  }
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&stack0xffffffd4);
  if (iVar4 == 1) {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  }
  else if (iVar4 == 2) {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  }
  else {
    if (iVar4 != 3) goto LAB_000f3016;
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  }
  (**(code **)(*piVar7 + 8))(&stack0xffffffd0,0,0);
LAB_000f3016:
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&stack0xffffffd0);
  return 0;
}
