/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F8D9810F3EA41AED9CBB1AD86596A1C439996A2AE191BD7E6AE11B88A81F82C
 * Entry: 0x000f2610, Ghidra index: 3024, label: FUN_000f2610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f2610(void)

{
  int in_EAX;
  int *piVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar1 != 0x120785ef) {
    iVar4 = **(int **)(DAT_00469b58 + 8);
    uVar2 = FUN_00102000();
    pbVar3 = (byte *)(**(code **)(iVar4 + 0x130))(uVar2);
    if (pbVar3 != (byte *)0x0) {
      uStack_4 = *(undefined4 *)(pbVar3 + 0x10);
      iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(pbVar3,&uStack_4);
      if (iVar4 != 0) {
        *pbVar3 = *pbVar3 & 0xdb;
        FUN_001020a0();
        piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar1 + 0x14))();
        piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar1 + 8))(&stack0xfffffff8,0,0);
        return;
      }
    }
  }
  piVar1 = *(int **)(in_EAX + 0x74);
  if (piVar1 != *(int **)(in_EAX + 0x78)) {
    while (*(int *)(*piVar1 + 0x24) != 0xe2d9ad9) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int **)(in_EAX + 0x78)) {
        FUN_000f2700();
        return;
      }
    }
  }
  FUN_000f2700();
  return;
}
