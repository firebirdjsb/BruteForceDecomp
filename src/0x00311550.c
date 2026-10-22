/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 260DA01AF6B77DE560769DD06FDB98E3441C69D4BF7080A583C78CC1CA8ED7A1
 * Entry: 0x00311550, Ghidra index: 11869, label: FUN_00311550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfbc;
void FUN_00311550(void)

{
  if (DAT_0046cfbc != (int *)0x0) {
    (**(code **)(*DAT_0046cfbc + 8))(DAT_0046cfbc);
    DAT_0046cfbc = (int *)0x0;
  }
  return;
}
