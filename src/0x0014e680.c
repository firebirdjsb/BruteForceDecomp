/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 037EDA3C56714E909A04076F378EC567C8971AC22138F6BB4745F9046CF59324
 * Entry: 0x0014e680, Ghidra index: 4389, label: FUN_0014e680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aff0;
void FUN_0014e680(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039aff0;
  if (in_ECX[0x28] != 0) {
    FUN_000b8d70();
    in_ECX[0x28] = 0;
  }
  if (in_ECX[0x2a] != 0) {
    FUN_0008f6e0();
  }
  FUN_001553f0();
  return;
}
