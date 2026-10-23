/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34552A7FB59F43843C9684022D86E2C71062C58BE13233794AE0F797504DD416
 * Entry: 0x00073a80, Ghidra index: 1307, label: FUN_00073a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00073a80(float *param_1,float param_2)

{
  float fVar1;
  
  if (param_1[3] < param_2 == (param_1[3] == param_2)) {
    param_1[3] = param_1[3] - param_2;
    param_1[2] = 0.0;
    return;
  }
  param_1[3] = 0.0;
  if (param_1[1] != 0.0) {
    *param_1 = *param_1 - param_2 * param_1[1];
    fVar1 = *param_1;
    if (*param_1 <= 0.0) {
      fVar1 = 0.0;
    }
    *param_1 = fVar1;
    param_1[2] = 0.0;
    return;
  }
  *param_1 = 0.0;
  param_1[2] = 0.0;
  return;
}
