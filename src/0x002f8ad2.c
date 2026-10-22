/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABEBC065ABE2B219019EF6D28497C5F082BEC6EA4FF6318AB52C672B05A02C12
 * Entry: 0x002f8ad2, Ghidra index: 10958, label: _rtinit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b5b00;
void XAPILIB___rtinit(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_003b5b00;
  do {
    pcVar1 = (code *)*puVar2;
    if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
      (*pcVar1)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)0x3b5b08);
  return;
}
