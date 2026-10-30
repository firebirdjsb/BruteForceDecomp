/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3FC359A7EFF9EC1B92DBA98E3D065D5A121ED21CA546E28A67F2F04D5532909
 * Entry: 0x002976e0, Ghidra index: 9349, label: FUN_002976e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002976e0(void)

{
  if ((*(int *)(DAT_00469888 + 0x14) < 1) || (*(int *)(DAT_00469888 + 0x10) == -1)) {
    FUN_00295240();
  }
  FUN_00289d80();
  if ((*(int *)(DAT_00469888 + 0x14) < 2) || (*(int *)(DAT_00469888 + 0x10) == -2)) {
    FUN_00295240();
  }
  FUN_00289d80();
  FUN_00289710();
  FUN_00289d80();
  return;
}
