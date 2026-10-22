/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEFFC4038D65C4FE46B3528F5C0EE583C3AE023FF02C9A42D9F5178844E1CFE0
 * Entry: 0x000bd860, Ghidra index: 2310, label: FUN_000bd860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f7f0;
extern uint32_t PTR_LAB_0039f7dc;
void FUN_000bd860(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000c4f60();
  *unaff_ESI = &PTR_FUN_0039f7f0;
  unaff_ESI[0xb] = &PTR_LAB_0039f7dc;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x31] = 0;
  *(undefined1 *)(unaff_ESI + 0x34) = 0;
  unaff_ESI[0x38] = 0;
  *(byte *)((int)unaff_ESI + 0x13) = *(byte *)((int)unaff_ESI + 0x13) | 1;
  return;
}
