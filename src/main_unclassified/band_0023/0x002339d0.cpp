/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F629722E1C092FF356AE5231F20680377341B951D88EF3069DCF6DD392B00126
 * Entry: 0x002339d0, Ghidra index: 7788, label: FUN_002339d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002339d0_quaternion_operation.h"
float * FUN_002339d0(float *param_1)
{
  /* Original guest ECX must be supplied by a future ABI adapter for
   * external original-entry callers. No guessed default is installed. */
  float *in_ECX;
  return bf_002339d0_quaternion_operation(param_1,in_ECX);
}
