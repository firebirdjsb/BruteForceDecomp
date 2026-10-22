/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 160D735F34CBDBC3E18D7DAF822F7B4BC3531BBBA403BFE26FE6BF33FB58FC80
 * Entry: 0x0022a5c0, Ghidra index: 7678, label: FUN_0022a5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022a5c0(float param_1)

{
  int in_ECX;
  
  param_1 = param_1 + *(float *)(in_ECX + 0x394);
  if (3.1415927 < param_1) {
    *(float *)(in_ECX + 0x394) = param_1 - 6.2831855;
    return;
  }
  if (param_1 < -3.1415927) {
    param_1 = param_1 + 6.2831855;
  }
  *(float *)(in_ECX + 0x394) = param_1;
  return;
}
