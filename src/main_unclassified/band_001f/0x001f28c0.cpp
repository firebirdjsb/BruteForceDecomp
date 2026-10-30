/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DC19C4A40F63D3F4587EDFB267BDCCCB14243E882F322C8B7CCA8C67ACB2ACF
 * Entry: 0x001f28c0, Ghidra index: 7007, label: FUN_001f28c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
void FUN_001f28c0(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(in_EAX + 0x30);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  cVar1 = (**(code **)(*DAT_00469b58 + 0x14))();
  if ((*(char *)(in_EAX + 4) == '\0') && (cVar1 == '\0')) {
    FUN_001e8cd0(param_1);
    return;
  }
  FUN_001e8cd0(param_1);
  return;
}
