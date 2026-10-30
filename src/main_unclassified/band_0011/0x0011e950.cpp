/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 875AD15A72C2B740AC3875A18D340F776134CF38D32586E11F3D9E5259B64408
 * Entry: 0x0011e950, Ghidra index: 3632, label: FUN_0011e950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011e950(float param_1,float param_2)

{
  float fVar1;
  int in_ECX;
  
  if (param_1 <= 180.0) {
    if (-180.0 <= param_1) goto LAB_0011e97e;
    param_1 = param_1 + 180.0;
  }
  else {
    param_1 = param_1 - 180.0;
  }
  param_1 = -param_1;
LAB_0011e97e:
  fVar1 = param_1 * 0.017453292 + *(float *)(in_ECX + 0x434);
  if (fVar1 <= 3.1415927) {
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  *(float *)(in_ECX + 0x4a0) = fVar1;
  *(float *)(in_ECX + 0x5fc) = param_2 * 0.017453292;
  return;
}
