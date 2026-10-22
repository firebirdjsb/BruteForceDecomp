/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CEFE82F6AF9CC10026BE925BB664A4792A62FC62775736ECAFF424E198A8892
 * Entry: 0x002f24b7, Ghidra index: 10797, label: FUN_002f24b7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003b72e0;
void FUN_002f24b7(undefined4 param_1)

{
  FUN_002ec3f5();
  FUN_002ec3c9(param_1);
  (*(code *)PTR_FUN_003b72e0)(0xff);
  return;
}
