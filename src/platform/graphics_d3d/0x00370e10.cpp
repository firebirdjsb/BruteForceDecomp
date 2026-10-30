/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C032181F7B88352120F449AB12B68941B5211F005218032B2B26C810467E956
 * Entry: 0x00370e10, Ghidra index: 13374, label: FUN_00370e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb88;
void FUN_00370e10(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int in_EDX;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (uintptr_t)0x00181b68U;
  puVar3 = in_EAX + 1;
  puVar4 = (undefined4 *)(&DAT_0037bb88 + (uint)(*(int *)(in_EDX + 0x36c) != 0) * 0x80);
  do {
    *in_EAX = puVar2;
    puVar2 = puVar2 + 0x40;
    in_EAX = in_EAX + 7;
    puVar5 = puVar4;
    puVar6 = puVar3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 7;
    puVar4 = puVar4 + 0x20;
  } while (puVar2 < (undefined1 *)0x181be9);
  return;
}
