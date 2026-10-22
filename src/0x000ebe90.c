/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ADC04E1723C5EDD12DAAB7D6BC8A4AC53AF9D8F85E8869487B31F25E91C2ED0
 * Entry: 0x000ebe90, Ghidra index: 2913, label: FUN_000ebe90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e8b8;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebe90(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ebdc0();
  *unaff_ESI = &PTR_FUN_0039e8b8;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_LAB_0039ee54;
  return;
}
