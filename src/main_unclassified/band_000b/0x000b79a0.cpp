/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BA947466290AA8532D690BA59FC44C08A2AE9C4E51D0851E1A465D803826AFC
 * Entry: 0x000b79a0, Ghidra index: 2208, label: FUN_000b79a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b6cc0(void);

extern uint32_t PTR_FUN_0039fd2c;
void FUN_000b79a0(void)

{
  undefined4 *in_EAX;
  
  FUN_000b6cc0();
  *(undefined2 *)(in_EAX + 1) = 0;
  *(undefined2 *)((int)in_EAX + 6) = 0;
  *in_EAX = &PTR_FUN_0039fd2c;
  return;
}
