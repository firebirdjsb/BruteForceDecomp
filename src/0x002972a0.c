/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92C341B46B44BE0942E024D2A69E90701FCA51622361F42BFEB87EA8B273BD2D
 * Entry: 0x002972a0, Ghidra index: 9342, label: FUN_002972a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002972a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00289e20();
  if ((iVar1 != -2) && (iVar1 != -1)) {
    FUN_00295240();
  }
  FUN_00289a40();
  if ((*(int *)(DAT_00469888 + 0x14) < 2) || (*(int *)(DAT_00469888 + 0x10) == -2)) {
    FUN_00295240();
  }
  FUN_00289d80();
  FUN_00289860();
  FUN_00289d80();
  return;
}
