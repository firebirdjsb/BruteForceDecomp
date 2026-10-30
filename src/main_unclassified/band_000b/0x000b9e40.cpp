/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CE5D39F39FC15A4A8D8B5BF9803A923C1165D85A057C60C5CA2550B08B0C0F2
 * Entry: 0x000b9e40, Ghidra index: 2238, label: FUN_000b9e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fb28;
void FUN_000b9e40(void)

{
  undefined4 *in_EAX;
  
  FUN_000b4df0();
  *in_EAX = &PTR_FUN_0039fb28;
  return;
}
