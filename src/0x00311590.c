/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5839BE1C91271FA41403CDDEEA1FB1893DBB7883267E95BCFB25CC702EBEF0C1
 * Entry: 0x00311590, Ghidra index: 11871, label: FUN_00311590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfc4;
void FUN_00311590(void)

{
  if (DAT_0046cfc4 != (int *)0x0) {
    (**(code **)(*DAT_0046cfc4 + 8))(DAT_0046cfc4);
    DAT_0046cfc4 = (int *)0x0;
  }
  return;
}
