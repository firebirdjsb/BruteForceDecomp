/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CD41F865335035308CEFC7120EBB94CCA74E4EEE1E8463E7A0281B950DA6523
 * Entry: 0x0031b901, Ghidra index: 12302, label: FUN_0031b901
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801510;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b901(int param_1)

{
  FUN_003118f0();
  _DAT_fe801510 = (param_1 != 0 ^ _DAT_fe801510) & 1 ^ _DAT_fe801510;
  FUN_00311923();
  return;
}
