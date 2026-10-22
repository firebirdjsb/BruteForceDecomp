/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0BF23DF82A9A18C5352223F353605A4005AE0B7842BC17C5E1DC13A27B9AF4B
 * Entry: 0x0004cd10, Ghidra index: 642, label: FUN_0004cd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_0004cd10(undefined4 param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float *in_EAX;
  float *in_ECX;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  
  fVar1 = (*in_EAX - *in_ECX) * (*in_EAX - *in_ECX) +
          (in_EAX[1] - in_ECX[1]) * (in_EAX[1] - in_ECX[1]) +
          (in_EAX[2] - in_ECX[2]) * (in_EAX[2] - in_ECX[2]);
  if (param_2 * param_2 < fVar1) {
    return '\0';
  }
  if (0.0001 < fVar1) {
    auVar3 = rsqrtss(in_XMM0,fVar1);
    cVar2 = FUN_000df6f0(param_1,auVar3._0_4_ * fVar1);
    return '\x01' - (cVar2 != '\0');
  }
  return '\x01';
}
