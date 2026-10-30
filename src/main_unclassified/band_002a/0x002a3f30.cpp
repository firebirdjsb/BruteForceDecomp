/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E84AE46FB56835F24D525240BCE72FA5FBD21AF1A041D6E62E90CB61E009067
 * Entry: 0x002a3f30, Ghidra index: 9539, label: FUN_002a3f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390860;
extern uint32_t PTR_LAB_00390870;
void FUN_002a3f30(void)

{
  undefined4 *in_EAX;
  
  FUN_002a2f40();
  *in_EAX = &PTR_LAB_00390870;
  in_EAX[0x2e] = &PTR_LAB_00390860;
  in_EAX[0x35] = 1;
  return;
}
