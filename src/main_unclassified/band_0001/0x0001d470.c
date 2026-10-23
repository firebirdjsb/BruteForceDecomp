/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D9A8EBA1FF910609ABDE98C000B99E3AE58251E5FFEDCEE9E1768D7710C511E
 * Entry: 0x0001d470, Ghidra index: 130, label: FUN_0001d470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
void FUN_0001d470(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[0x16] != 0) {
    FUN_0008f6e0();
  }
  unaff_ESI[7] = &PTR_FUN_003a4f64;
  if (unaff_ESI[0xf] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[10] != 0) {
    FUN_0008f6e0();
  }
  *unaff_ESI = &PTR_FUN_003a4f68;
  if (unaff_ESI[5] != 0) {
    FUN_0008f6e0();
    return;
  }
  return;
}
