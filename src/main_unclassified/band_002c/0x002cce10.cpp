/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED0285B1BA238B678F91F12B9706C917F52B97EEE550CC28AC2834257B430A0A
 * Entry: 0x002cce10, Ghidra index: 10156, label: FUN_002cce10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_LAB_0038e588;
void FUN_002cce10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  
  *unaff_ESI = PTR_LAB_0038e588;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(0x38);
  *puVar1 = 0x65981234;
  puVar3 = (undefined4 *)((int)puVar1 + 0x17U & 0xfffffff0);
  puVar3[-1] = puVar1;
  unaff_ESI[1] = puVar3;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}
