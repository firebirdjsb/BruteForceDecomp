/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5897040BE668154EA2E3C435098155BB2F0738FF57A70BFA63AC39F047CF75E1
 * Entry: 0x002338c0, Ghidra index: 7787, label: FUN_002338c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002338c0_sse_operation.h"
float * FUN_002338c0(float *param_1,float *param_2,float *param_3)
{
  /* Host SSE memory operation only. Original guest32 pointer transport,
   * stack/register ABI and game integration remain ABI_UNVERIFIED. */
  bf_002338c0_sse_operation(param_1,param_2,param_3);
  return param_1;
}
