/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1578763BE880CCAE9BF95DF2B284AE2D5BFC43099B16BA73B62AAD8B4E4CAF9
 * Entry: 0x0033f362, Ghidra index: 12644, label: FUN_0033f362
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f648;
extern uint32_t DAT_0040f64c;
extern uint32_t DAT_0040f650;
void FUN_0033f362(uint *param_1)

{
  bool bVar1;
  
  XAPILIB__GetSystemTimeAsFileTime(param_1);
  if ((*param_1 == DAT_0040f648) && (param_1[1] == DAT_0040f64c)) {
    DAT_0040f650 = DAT_0040f650 + 10;
    bVar1 = CARRY4(*param_1,DAT_0040f650);
    *param_1 = *param_1 + DAT_0040f650;
    param_1[1] = param_1[1] + (uint)bVar1;
  }
  else {
    DAT_0040f650 = 0;
    DAT_0040f648 = *param_1;
    DAT_0040f64c = param_1[1];
  }
  return;
}
