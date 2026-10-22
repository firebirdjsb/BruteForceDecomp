/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50355D7CE1E137B096838E21DB2FADBD5830B37148B57D1EADA50EF4386C5F91
 * Entry: 0x002b66b0, Ghidra index: 9827, label: FUN_002b66b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b66b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = *in_ECX;
  fVar2 = in_EAX[1];
  fVar3 = in_ECX[1];
  fVar4 = *in_EAX;
  fVar5 = *in_EAX;
  fVar6 = in_ECX[2];
  fVar7 = *in_ECX;
  fVar8 = in_EAX[2];
  *in_EDX = in_ECX[1] * in_EAX[2] - in_ECX[2] * in_EAX[1];
  in_EDX[1] = fVar5 * fVar6 - fVar7 * fVar8;
  in_EDX[2] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}
