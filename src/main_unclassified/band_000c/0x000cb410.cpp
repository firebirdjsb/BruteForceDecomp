/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C71222BD62D655866D6A5EFF5226D87FB76997888FD5A95957261BF1084298EF
 * Entry: 0x000cb410, Ghidra index: 2514, label: FUN_000cb410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_002ea51b(double param_1);

float10 FUN_000cb410(void)

{
  int in_EAX;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = *(float *)(in_EAX + 0x7c) * *(float *)(in_EAX + 0x78) * 0.5;
  fVar1 = (float10)FUN_002ea51b((double)(fVar3 + 0.5),fVar3);
  fVar2 = (float10)FUN_002ea51b((double)fVar3);
  if (fVar2 == (float10)(float)fVar1) {
    return (float10)1.0;
  }
  return (float10)0.0;
}
