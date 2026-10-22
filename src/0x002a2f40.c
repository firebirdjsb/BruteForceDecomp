/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86040B55FFD7A4E70DD9E59A8C7009369D8E3826D0B92D96BB35C4E4471A6451
 * Entry: 0x002a2f40, Ghidra index: 9533, label: FUN_002a2f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046aff8;
extern uint32_t PTR_FUN_003906d8;
extern uint32_t PTR_FUN_003906e8;
extern uint32_t PTR_FUN_0039a828;
void FUN_002a2f40(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00060d40();
  unaff_ESI[0x2e] = &PTR_FUN_0039a828;
  *unaff_ESI = &PTR_FUN_003906e8;
  unaff_ESI[0x2e] = &PTR_FUN_003906d8;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x31] = &DAT_0046aff8;
  return;
}
