/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88F4BDA88B71A2F42CEEC8618F17643B3450D8B06E7DF615CD99659B3922ED56
 * Entry: 0x00178950, Ghidra index: 4972, label: FUN_00178950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
void FUN_00178950(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_14;
  undefined1 uStack_10;
  
  piVar1 = *(int **)(unaff_ESI + 0x10);
  if ((*(int *)(unaff_ESI + 4) != 0) && (piVar1 != (int *)0x0)) {
    iVar2 = FUN_0017c170(DAT_00469984);
    *(int *)(unaff_ESI + 8) = iVar2;
    if (iVar2 != 0) {
      FUN_0003f010();
      iVar2 = (**(code **)(*piVar1 + 0x40))();
      uStack_60 = 1;
      uStack_64 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_68 = *(undefined4 *)(iVar2 + 0x28);
      local_6c = *(undefined4 *)(iVar2 + 0x24);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x54))();
      uStack_40 = 1;
      uStack_44 = puVar3[2];
      uStack_48 = puVar3[1];
      uStack_4c = *puVar3;
      iVar2 = *(int *)(unaff_ESI + 4);
      uStack_38 = 1;
      uStack_3c = *(undefined4 *)(iVar2 + 8);
      uStack_30 = 1;
      uStack_34 = *(undefined4 *)(iVar2 + 0xc);
      uStack_10 = 1;
      uStack_14 = *(undefined4 *)(iVar2 + 0x18);
      (**(code **)(*DAT_00469940 + 0x28))
                (*(undefined4 *)(unaff_ESI + 8),&local_6c,*(byte *)(unaff_ESI + 0x14) >> 1 & 1);
    }
  }
  return;
}
