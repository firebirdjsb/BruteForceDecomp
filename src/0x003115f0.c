/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E168F11CA9767B6CB308E4A65BA1B75D696751AB5E0C906762CE389402DDAD78
 * Entry: 0x003115f0, Ghidra index: 11874, label: FUN_003115f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfd0;
void FUN_003115f0(void)

{
  if (DAT_0046cfd0 != (int *)0x0) {
    (**(code **)(*DAT_0046cfd0 + 8))(DAT_0046cfd0);
    DAT_0046cfd0 = (int *)0x0;
  }
  return;
}
