/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB42C27CDA697D75193640DA3751963528198247638A06C9A9E47D7DEBD6525F
 * Entry: 0x0028f400, Ghidra index: 9217, label: FUN_0028f400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_0028f400(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float local_28;
  
  if (ABS(*param_1) < 1.0) {
    fVar2 = (float10)FUN_00306c80();
    fVar3 = (float10)fsin(fVar2);
    if ((float10)1e-05 <= fVar3) {
      fVar1 = (float)(fVar2 / fVar3);
      local_28 = fVar1 * param_1[2];
      fVar4 = fVar1 * param_1[3];
      param_2[1] = fVar1 * param_1[1];
      goto LAB_0028f4f5;
    }
  }
  fVar4 = param_1[3];
  local_28 = param_1[2];
  param_2[1] = param_1[1];
LAB_0028f4f5:
  param_2[3] = fVar4;
  param_2[2] = local_28;
  *param_2 = 0;
  return param_2;
}
