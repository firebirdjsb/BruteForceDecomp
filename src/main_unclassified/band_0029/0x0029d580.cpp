/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2098A6DFA5587EE5CF516C2A4C26D07FDE985DA8976DB9978EB48B3B5F06F10A
 * Entry: 0x0029d580, Ghidra index: 9459, label: FUN_0029d580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_internal_array_bigger_than__int__004047c0[];
void FUN_0029d580(undefined1 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_00469888 + 0x24) < *(int *)(DAT_00469888 + 0x28) + 1) {
    puVar1 = (undefined4 *)(DAT_00469888 + 0x1c);
    *(int *)(DAT_00469888 + 0x24) = *(int *)(DAT_00469888 + 0x28) + 0x21;
    uVar3 = FUN_00294b10(1,s_internal_array_bigger_than__int__004047c0);
    *puVar1 = uVar3;
  }
  iVar2 = DAT_00469888;
  *(undefined1 *)(*(int *)(DAT_00469888 + 0x1c) + *(int *)(DAT_00469888 + 0x28)) = param_1;
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
  return;
}
