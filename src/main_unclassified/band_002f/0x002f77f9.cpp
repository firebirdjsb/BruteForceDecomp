/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77C0F10A971D18C3F31E2276F6E8824A2082D741CE32B2E3B946893F44584844
 * Entry: 0x002f77f9, Ghidra index: 10925, label: LocalAlloc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a90d4;
void XAPILIB__LocalAlloc(uint param_1,undefined4 param_2)

{
  FUN_002f6e31(DAT_004a90d4,param_1 >> 3 & 8,param_2);
  return;
}
