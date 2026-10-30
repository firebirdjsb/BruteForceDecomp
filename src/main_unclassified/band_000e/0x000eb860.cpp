/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A20E9E91D4CB54629815AE8055E798C46EBF7578D4B3F41AB70132607A47B94
 * Entry: 0x000eb860, Ghidra index: 2900, label: FUN_000eb860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing Ghidra constructor at 0x00059B60 has no explicit source
 * arguments and uses incoming guest ESI. Host symbol is syntax-only;
 * implicit registers and original Xbox calling ABI are UNVERIFIED. */
extern void FUN_00059b60(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039ef08;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eb860(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  *in_EAX = &PTR_FUN_0039ef08;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  in_EAX[8] = 0x40800000;
  return;
}
