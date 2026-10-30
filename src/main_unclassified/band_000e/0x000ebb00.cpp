/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB3BABA5C90DADD9BD0C268D0C9F3F0B1A880D8D775663C303D0C3CBACA84035
 * Entry: 0x000ebb00, Ghidra index: 2904, label: FUN_000ebb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039e7f8;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebb00(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000eb9d0();
  *unaff_ESI = &PTR_FUN_0039e7f8;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_FUN_0039e7e8;
  return;
}
