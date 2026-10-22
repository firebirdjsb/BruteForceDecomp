/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8016269303419F5CE45156AB548BA943201A2B6D81946F59E118567C9DA34CA
 * Entry: 0x00385d64, Ghidra index: 13683, label: FUN_00385d64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fe6;
bool FUN_00385d64(ushort param_1)

{
  bool bVar1;
  
  bVar1 = param_1 <= DAT_004a8fe6;
  if (bVar1) {
    DAT_004a8fe6 = DAT_004a8fe6 - param_1;
  }
  return bVar1;
}
