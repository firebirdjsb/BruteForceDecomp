/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4519D52D886304C888CBCDC7E4C4F60795748AF0AD949798A42D7D7F001C1EA8
 * Entry: 0x002f8a7a, Ghidra index: 10957, label: _cinit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b5b0c;
extern uint32_t DAT_003b6864;
extern uint32_t PTR_FUN_003b6c58;
void XAPILIB___cinit(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (PTR_FUN_003b6c58 != (undefined *)0x0) {
    (*(code *)PTR_FUN_003b6c58)();
  }
  puVar2 = &DAT_003b6864;
  do {
    pcVar1 = (code *)*puVar2;
    if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
      (*pcVar1)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)0x3b6878);
  puVar2 = &DAT_003b5b0c;
  do {
    pcVar1 = (code *)*puVar2;
    if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
      (*pcVar1)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)0x3b6860);
  return;
}
