/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 066BBCEBF762E9C9788E7A88F586EB2B3C8DBB77C1754DC075B7E94556F6B098
 * Entry: 0x000eb910, Ghidra index: 2901, label: FUN_000eb910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039ebb0;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eb910(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  in_EAX[8] = 0x40800000;
  in_EAX[0xe] = 0x40800000;
  *in_EAX = &PTR_FUN_0039ebb0;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  return;
}
