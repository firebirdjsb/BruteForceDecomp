/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9845F4400F31673C8FFC0EC92B60D421983004F32EEE8BC70A60F9061E3EB58B
 * Entry: 0x002337a0, Ghidra index: 7786, label: FUN_002337a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002337a0_ordered_matrix_operation.h"
undefined8 * FUN_002337a0(undefined8 *param_1,float *param_2,float *param_3)
{
  // Bounded native operation only; original guest ABI remains unverified.
  bf_002337a0_ordered_matrix_operation(param_1, param_2, param_3);
  return param_1;
}
