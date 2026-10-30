/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E58346784F59D4CF2754FB9F8D4F20C58764EE4DBA47C8F3F67826844E500D1
 * Entry: 0x00233bf0, Ghidra index: 7792, label: FUN_00233bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
float10 FUN_00233bf0(void)

{
  DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
  return (float10)(float)(DAT_0046cfdc >> 9 | 0x40000000) - (float10)3.0;
}
