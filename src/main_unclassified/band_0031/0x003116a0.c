/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE61266CACD5187E11F6D64601C2CD4697EB092B687CC5C3D025717F571A2032
 * Entry: 0x003116a0, Ghidra index: 11879, label: FUN_003116a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046b2e4;
void FUN_003116a0(void)

{
  if (DAT_0046b2e4 != (int *)0x0) {
    (**(code **)(*DAT_0046b2e4 + 8))(DAT_0046b2e4);
    DAT_0046b2e4 = (int *)0x0;
  }
  return;
}
