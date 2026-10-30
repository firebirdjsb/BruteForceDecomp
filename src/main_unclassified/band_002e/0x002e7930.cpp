/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 235E4E6D8AEE7109B8D7BB10CDE75DD2A924E43BAF5055CFC8626FE9BCDCBBA7
 * Entry: 0x002e7930, Ghidra index: 10522, label: FUN_002e7930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003868c8;
void FUN_002e7930(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_003868c8;
  FUN_002e7880();
  return;
}
