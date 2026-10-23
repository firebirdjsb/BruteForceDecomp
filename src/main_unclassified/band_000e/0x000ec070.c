/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4558A9A8ACE0683F8D825F88C7D176A622FB8D70DCDDCCA7A6B4BF86F3054DB
 * Entry: 0x000ec070, Ghidra index: 2918, label: FUN_000ec070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e658;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec070(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ebdc0();
  *(byte *)(unaff_ESI + 0x19) = *(byte *)(unaff_ESI + 0x19) & 0xb3 | 0x33;
  *unaff_ESI = &PTR_FUN_0039e658;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_LAB_0039ee54;
  return;
}
