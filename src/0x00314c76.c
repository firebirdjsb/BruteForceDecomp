/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F4549C0BEC7A3DC6CC1E1BCD1796F1271D397160F7620A1898D617AA5B1EB2B
 * Entry: 0x00314c76, Ghidra index: 12086, label: FUN_00314c76
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00314c76(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}
