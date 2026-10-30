/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 223F8B42A9AB33D07619D1CD18CD25475460C1E3EF31106CBF372C2D21F5A7FA
 * Entry: 0x002c2750, Ghidra index: 10040, label: FUN_002c2750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c2750(void)

{
  float fVar1;
  float *in_EAX;
  float10 fVar2;
  
  fVar1 = in_EAX[0x1a];
  fVar2 = (float10)0.0;
  if (fVar1 != 0.0) {
    fVar2 = (float10)*(float *)((int)fVar1 + 0xac) * (float10)*in_EAX +
            (float10)*(float *)((int)fVar1 + 0xb0) * (float10)in_EAX[1] +
            (float10)*(float *)((int)fVar1 + 0xb4) * (float10)in_EAX[2] +
            (float10)in_EAX[0x2c] * (float10)*(float *)((int)fVar1 + 0x9c) +
            (float10)in_EAX[0x2d] * (float10)*(float *)((int)fVar1 + 0xa0) +
            (float10)in_EAX[0x2e] * (float10)*(float *)((int)fVar1 + 0xa4);
  }
  fVar1 = in_EAX[0x1b];
  if (fVar1 != 0.0) {
    fVar2 = fVar2 - ((float10)in_EAX[0x30] * (float10)*(float *)((int)fVar1 + 0x9c) +
                     (float10)in_EAX[0x31] * (float10)*(float *)((int)fVar1 + 0xa0) +
                     (float10)in_EAX[0x32] * (float10)*(float *)((int)fVar1 + 0xa4) +
                    (float10)*in_EAX * (float10)*(float *)((int)fVar1 + 0xac) +
                    (float10)*(float *)((int)fVar1 + 0xb0) * (float10)in_EAX[1] +
                    (float10)*(float *)((int)fVar1 + 0xb4) * (float10)in_EAX[2]);
  }
  return fVar2;
}
