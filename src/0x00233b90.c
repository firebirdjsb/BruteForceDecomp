/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F249DADA6A7863BC40FA8F41BB0AC531DEA4E8EF107A2E64CE6DB4AF110C18E7
 * Entry: 0x00233b90, Ghidra index: 7790, label: FUN_00233b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
float10 FUN_00233b90(void)

{
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  return (float10)(float)(DAT_0046cfd8 >> 9 | 0x3f800000) - (float10)1.0;
}
