/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD624EE0AAD7956D46EFEBCC3A20D4BD482FAB2952C934BE57BAFDEACBAE1E71
 * Entry: 0x002eba73, Ghidra index: 10635, label: FUN_002eba73
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b6c3c;
ushort FUN_002eba73(int param_1,ushort param_2)

{
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_003b6c3c + param_1 * 2) & param_2;
  }
  return 0;
}
