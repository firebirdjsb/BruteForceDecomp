/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33E8AD4AF6B4C4B414D08E7013A6C0D21C127172D586B77D8DC6B3EF2E90FB70
 * Entry: 0x000ebf30, Ghidra index: 2915, label: FUN_000ebf30
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
extern uint32_t PTR_FUN_0039e908;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebf30(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  *in_EAX = &PTR_FUN_0039e908;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  in_EAX[0xe] = 0x40000000;
  return;
}
