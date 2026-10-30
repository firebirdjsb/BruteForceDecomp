/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14856B2359FAF3356524E3784A68558C39FAC4142C8C1D6F1C67AC641AB4267A
 * Entry: 0x0006ffc0, Ghidra index: 1265, label: FUN_0006ffc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00306b90(void);

void FUN_0006ffc0(float *param_1)

{
  float fVar1;
  float *in_EAX;
  int in_ECX;
  float *unaff_ESI;
  float10 fVar2;
  float local_c;
  float local_4;
  
  local_4 = in_EAX[2];
  local_c = *in_EAX;
  if (0.05 < ABS(in_EAX[1])) {
    fVar1 = 1.0 / SQRT(local_c * local_c + local_4 * local_4 + 0.0);
    local_c = local_c * fVar1;
    local_4 = fVar1 * local_4;
  }
  if ((0.99 < *(float *)(in_ECX + 4)) || (*(float *)(in_ECX + 4) < -0.99)) {
    if (*(float *)(in_ECX + 4) <= 0.0) {
      *unaff_ESI = -1.5707964;
    }
    else {
      *unaff_ESI = 1.5707964;
    }
  }
  else {
    fVar2 = (float10)FUN_00306b90();
    *unaff_ESI = (float)fVar2;
  }
  fVar2 = (float10)fpatan(-(float10)local_4,(float10)local_c);
  *param_1 = (float)fVar2;
  return;
}
