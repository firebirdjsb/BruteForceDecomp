/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4A25AFB01A522D5056EFDC4D4EAB4E123A9894282417699543DAC1D2EDFF0ED
 * Entry: 0x00380f9a, Ghidra index: 13545, label: FUN_00380f9a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00412800;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00380f9a(void)

{
  int in_ECX;
  
  if (*(byte *)(in_ECX + 3) != 0x80) {
    return (uint)*(byte *)(in_ECX + 3) * 0x20 + _DAT_00412800;
  }
  return 0;
}
