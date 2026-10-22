/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CDDB00433837F148F71213AD9BA745DC6EEEA243E600ECD28D31BDA85B29D97
 * Entry: 0x00157fe0, Ghidra index: 4493, label: FUN_00157fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00157fe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EBX;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  
  if (*(int *)(*(int *)(unaff_EBX + 0xc) + 0xac) != 0) {
    FUN_0003f010();
    iVar1 = *(int *)(unaff_EBX + 0x6c);
    local_64 = *(undefined4 *)(iVar1 + 0x40);
    local_68 = *(undefined4 *)(iVar1 + 0x3c);
    local_6c = *(undefined4 *)(iVar1 + 0x38);
    local_60 = 1;
    FUN_0017c020(&local_6c);
  }
  if (*(int *)(*(int *)(unaff_EBX + 0xc) + 0xb0) != DAT_0046d064) {
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_88 = 0x3f800000;
    local_98 = 0x3f800000;
    local_a8 = 0x3f800000;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    puVar2 = (undefined4 *)FUN_0015a480(unaff_EBX);
    local_7c = puVar2[2];
    local_80 = puVar2[1];
    local_84 = *puVar2;
    if ((*(int *)(*(int *)(unaff_EBX + 0xc) + 0xb0) != DAT_0046d064) &&
       (piVar3 = (int *)FUN_000da800(), piVar3 != (int *)0x0)) {
      *(undefined4 *)(piVar3[0x3a] + 0xc) = 0;
      (**(code **)(*piVar3 + 0x44))(&local_a8);
      FUN_0021c380(0x3f800000);
    }
  }
  return;
}
