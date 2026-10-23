/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C07E19027952666EA0197509B5C98C4C0B626CFA84F87AC2A783530B329A47C
 * Entry: 0x00233bc0, Ghidra index: 7791, label: FUN_00233bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
float10 FUN_00233bc0(void)

{
  DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
  return (float10)(float)(DAT_0046cfdc >> 9 | 0x3f800000) - (float10)1.0;
}
