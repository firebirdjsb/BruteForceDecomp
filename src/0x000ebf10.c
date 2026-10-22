/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96C8D3A9600B1D6187954AE9F4FA5996F929F85B6AA24C9FF9ACEE576AF3C31E
 * Entry: 0x000ebf10, Ghidra index: 2914, label: FUN_000ebf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e958;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebf10(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ebdc0();
  *unaff_ESI = &PTR_FUN_0039e958;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_LAB_0039ee54;
  return;
}
