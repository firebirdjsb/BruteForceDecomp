/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DA9BCE2175930EEEA3A2F3BE0B4E9F0C393A40886AB7F32525343EDBE5D7271
 * Entry: 0x0013be10, Ghidra index: 3998, label: FUN_0013be10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
int FUN_0013be10(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_30 [48];
  
  iVar1 = (**(code **)(**(int **)(in_EAX + 0x18) + 0x40))();
  FUN_0003d6c0(auStack_30,iVar1,iVar1 + 0x24);
  iVar1 = *(int *)(in_EAX + 0x18);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar3 = iVar2 + 0x354;
  if ((*(int *)(iVar2 + 0x354) != DAT_0046d064) && (iVar1 != 0)) {
    piVar4 = (int *)FUN_000da800();
    iVar3 = 0;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xe0))(iVar1,&DAT_0046d004);
      *(byte *)(piVar4 + 0x43) = *(byte *)(piVar4 + 0x43) | 2;
      iVar3 = FUN_0021c380(0x3f800000);
    }
  }
  return iVar3;
}
