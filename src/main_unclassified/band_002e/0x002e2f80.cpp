/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4566F704A93CECE43FBC0FA565B9268421721C21CEE707A3D85FD343E2E57A87
 * Entry: 0x002e2f80, Ghidra index: 10383, label: FUN_002e2f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00386618;
void FUN_002e2f80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00386618;
  FUN_002e3ff0(1);
  FUN_002e2bb0();
  return;
}
