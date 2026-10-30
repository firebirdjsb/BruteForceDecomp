/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBF5D88BB69DB9602F8EEB353117604C3BE16A8D6263B67F400AFD7D7BB16525
 * Entry: 0x00315aac, Ghidra index: 12113, label: FUN_00315aac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315aac(int param_1,int *param_2)

{
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  *(int **)(param_1 + 4) = param_2;
  *(int **)param_2[1] = param_2;
  return;
}
