/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CA106BA51F2FEF5158D41C83FFFB642B234099DABB89AF9123712304CD1364C
 * Entry: 0x0026a900, Ghidra index: 8752, label: FUN_0026a900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0026a900(undefined4 param_1,float param_2,float param_3)

{
  param_2 = ABS(param_2);
  param_3 = ABS(param_3);
  if (param_3 < param_2) {
    return (float10)SQRT((param_3 / param_2) * (param_3 / param_2) + 1.0) * (float10)param_2;
  }
  if (param_3 == 0.0) {
    return (float10)0.0;
  }
  return (float10)SQRT((param_2 / param_3) * (param_2 / param_3) + 1.0) * (float10)param_3;
}
