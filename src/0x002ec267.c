/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E6EB90BD75CEBC48E02E36884FF4EDF1EACF867E4DA52C154C623B448A2F8A2
 * Entry: 0x002ec267, Ghidra index: 10655, label: _siglookup
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7178;
/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

uint _siglookup(void)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = 0x3b70f8;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_003b7178 * 0xc + 0x3b70f8U);
  if ((DAT_003b7178 * 0xc + 0x3b70f8U <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}
