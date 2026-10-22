/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F6171714306C24457E2230B71C60DA0CBBEAFB971A987ACF744971960DD8DD6
 * Entry: 0x002be430, Ghidra index: 9972, label: FUN_002be430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be430(void)

{
  float fVar1;
  double *in_EAX;
  int in_EDX;
  int extraout_EDX;
  
  fVar1 = (float)((float10)*in_EAX - (float10)*(double *)(in_EDX + 0x70));
  FUN_002b4100();
  *(float *)(extraout_EDX + 300) =
       *(float *)(extraout_EDX + 0xbc) + *(float *)(extraout_EDX + 0xcc) * fVar1;
  *(ulonglong *)(extraout_EDX + 0x130) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(extraout_EDX + 0xc0) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(extraout_EDX + 0xd0) >> 0x20) * fVar1,
                (float)*(undefined8 *)(extraout_EDX + 0xc0) +
                (float)*(undefined8 *)(extraout_EDX + 0xd0) * fVar1);
  return;
}
