/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B7F34592C8C6CF3AEEB58A74B1ADFC573E7475F6C02371B816AC51ED0680B90
 * Entry: 0x002b64b0, Ghidra index: 9823, label: FUN_002b64b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b64b0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar5 = 1.0 - param_1;
  fVar1 = in_ECX[2];
  fVar2 = in_EAX[2];
  fVar3 = in_ECX[1];
  fVar4 = in_EAX[1];
  *in_EDX = param_1 * *in_EAX + fVar5 * *in_ECX;
  in_EDX[1] = param_1 * fVar4 + fVar5 * fVar3;
  in_EDX[2] = param_1 * fVar2 + fVar5 * fVar1;
  return;
}
