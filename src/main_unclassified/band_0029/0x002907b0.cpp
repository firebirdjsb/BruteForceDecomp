/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95305422DBD355639EA6A3379F21B49679B350E8431B413371BFEF9AD13B6DA2
 * Entry: 0x002907b0, Ghidra index: 9228, label: FUN_002907b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */
extern float *FUN_00233b10(float *param_1,float *param_2,float *param_3,float param_4);
void FUN_002907b0(undefined4 param_1,float param_2)

{
  float fVar1;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = 1.0 - param_2;
  *in_EAX = param_2 * *in_ECX + fVar1 * *in_EDX;
  in_EAX[1] = param_2 * in_ECX[1] + fVar1 * in_EDX[1];
  in_EAX[2] = param_2 * in_ECX[2] + fVar1 * in_EDX[2];
  FUN_00233b10(in_EAX + 3,in_EDX + 3,in_ECX + 3,param_2);
  return;
}
