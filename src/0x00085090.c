/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C50ED4E5736E5D4586EE428AC8FDD541EF63F5A0514136D5448754B90178766C
 * Entry: 0x00085090, Ghidra index: 1549, label: FUN_00085090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469b58;
void FUN_00085090(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469aac + 0xbec);
  iVar5 = *piVar3;
  FUN_00078df0();
  uVar4 = FUN_00078d80();
  (**(code **)(iVar5 + 0x18))(uVar4);
  cVar2 = (**(code **)(*piVar1 + 100))();
  if (cVar2 != '\0') {
    FUN_00084f50(0);
    return;
  }
  cVar2 = (**(code **)(*piVar1 + 0x68))();
  if (cVar2 != '\0') {
    FUN_00084f50(1);
    return;
  }
  iVar5 = (**(code **)(*piVar1 + 8))();
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) | 8;
  }
  return;
}
