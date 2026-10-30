/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8176DDF7667696D1267886E6D34F52F5177A65C40C65B0DA2B67F4D0571EDF8C
 * Entry: 0x001e7cd0, Ghidra index: 6825, label: FUN_001e7cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001e7cd0(float param_1,float param_2)

{
  if (param_1 < -param_2) {
    return (float10)param_1 + (float10)param_2;
  }
  if ((float10)param_2 < (float10)param_1) {
    return (float10)param_1 - (float10)param_2;
  }
  return (float10)0.0;
}
