/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E14CC6DA0C0D617C65ECD5DB95EA99A9EC3BDA2B1DA3C899D91F6CEDFD06E53
 * Entry: 0x00306780, Ghidra index: 11100, label: FUN_00306780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004a701c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00306780(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort *unaff_EBX;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = *unaff_EBX << 1;
  if (*unaff_EBX == 0) {
    uVar4 = 2;
  }
  if ((_DAT_004a701c & 1) == 0) {
    _DAT_004a701c = _DAT_004a701c | 1;
    FUN_002ff630();
    _atexit(FUN_00311870);
  }
  puVar2 = (undefined4 *)FUN_002ff960();
  uVar1 = *unaff_EBX;
  puVar5 = *(undefined4 **)(unaff_EBX + 2);
  puVar6 = puVar2;
  for (uVar3 = (uint)uVar1 * param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = (uint)uVar1 * param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*(ushort **)(unaff_EBX + 2) != (ushort *)0x0) &&
     (*(ushort **)(unaff_EBX + 2) != unaff_EBX + 4)) {
    FUN_002ff8c0();
    FUN_002ff750();
    *unaff_EBX = uVar4;
    *(undefined4 **)(unaff_EBX + 2) = puVar2;
    return;
  }
  *unaff_EBX = uVar4;
  *(undefined4 **)(unaff_EBX + 2) = puVar2;
  return;
}
