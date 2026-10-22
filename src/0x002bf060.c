/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 294E61C0A5D96E8F0A22C088390B44F27B7C92CF77E43B60FE9F2E5FE766F0D2
 * Entry: 0x002bf060, Ghidra index: 9989, label: FUN_002bf060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e6f8;
extern uint32_t PTR_LAB_0038e70c;
extern uint32_t PTR_LAB_0038e720;
void FUN_002bf060(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_LAB_0038e720;
  puVar1 = in_ECX + 0x14;
  iVar2 = 2;
  do {
    puVar1 = puVar1 + -7;
    iVar2 = iVar2 + -1;
    *puVar1 = &PTR_FUN_0038e6f8;
  } while (iVar2 != 0);
  *in_ECX = &PTR_LAB_0038e70c;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
