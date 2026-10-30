/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F0D4453372A1B4E5F54209D1CA198B28D4FDF32EBD4DE09D3B667501340A7E
 * Entry: 0x002333b0, Ghidra index: 7782, label: FUN_002333b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002333b0_matrix_operation.h"
void FUN_002333b0(float *param_1)
{
  /* ABI_UNVERIFIED: guest EDX is the nine-F32 output address.
   * Original entry callers still need a guest register/memory adapter. */
  float *in_EDX;
  bf_002333b0_matrix_operation(in_EDX,param_1);
}
