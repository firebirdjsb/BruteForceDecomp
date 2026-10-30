/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7676D47B32930C772947FAA93ADD05070B9D48F7CF4C1E2C85FD1F35D23184F
 * Entry: 0x00023900, Ghidra index: 234, label: FUN_00023900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
float10 FUN_00023900(float param_1,float param_2)

{
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  return ((float10)(float)(DAT_0046cfd8 >> 9 | 0x3f800000) - (float10)1.0) *
         ((float10)param_2 - (float10)param_1) + (float10)param_1;
}
