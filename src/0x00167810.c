/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A355C21DD95F699908655B1C2CC48D6E80681FA1829A4E3121DA255884E2D5D6
 * Entry: 0x00167810, Ghidra index: 4729, label: FUN_00167810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167810(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  
  fVar1 = in_EDX[2] * in_EDX[2] + *in_EDX * *in_EDX;
  if (1.1920929e-07 < fVar1) {
    auVar2 = rsqrtss(in_XMM0,fVar1);
    param_3 = auVar2._0_4_ * param_3;
    *in_ECX = param_3 * *in_EDX;
    if (in_EDX[1] < 0.0) {
      param_2 = -param_2;
    }
    in_ECX[1] = param_2;
    in_ECX[2] = param_3 * in_EDX[2];
    return;
  }
  *in_ECX = 0.0;
  if (in_EDX[1] < 0.0) {
    param_2 = -param_2;
  }
  in_ECX[1] = param_2;
  in_ECX[2] = 0.0;
  return;
}
