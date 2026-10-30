/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9479CE4D3F1161BFA30B062CBE9FC0A0D9FE87AFCF592313E4FAD7433F60A428
 * Entry: 0x003066c0, Ghidra index: 11099, label: FUN_003066c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00311870; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00311870(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004a701c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003066c0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  short in_DX;
  ushort *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *unaff_EBX;
  if ((_DAT_004a701c & 1) == 0) {
    _DAT_004a701c = _DAT_004a701c | 1;
    FUN_002ff630();
    _atexit(FUN_00311870);
  }
  puVar3 = (undefined4 *)FUN_002ff960();
  uVar2 = *unaff_EBX;
  puVar5 = *(undefined4 **)(unaff_EBX + 2);
  puVar6 = puVar3;
  for (uVar4 = (uint)uVar2 * param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = (uint)uVar2 * param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*(ushort **)(unaff_EBX + 2) != (ushort *)0x0) &&
     (*(ushort **)(unaff_EBX + 2) != unaff_EBX + 4)) {
    FUN_002ff8c0();
    FUN_002ff750();
    *unaff_EBX = uVar1 + in_DX;
    *(undefined4 **)(unaff_EBX + 2) = puVar3;
    return;
  }
  *unaff_EBX = uVar1 + in_DX;
  *(undefined4 **)(unaff_EBX + 2) = puVar3;
  return;
}
