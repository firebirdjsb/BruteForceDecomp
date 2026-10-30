/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BEB35EDB16BD6C2AE6E664BFB93DEEBE8D4E528D834DFFFA2C810419AB8C40D
 * Entry: 0x000b9e60, Ghidra index: 2239, label: FUN_000b9e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b4df0(void);

extern uint32_t PTR_FUN_0039fab0;
void FUN_000b9e60(void)

{
  undefined4 *in_EAX;
  
  FUN_000b4df0();
  *in_EAX = &PTR_FUN_0039fab0;
  return;
}
