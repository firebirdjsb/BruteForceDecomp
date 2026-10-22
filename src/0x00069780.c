/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74D0C1AA72A8B60D8C053C68805D7B2451D74182B55A1C88C76FC525BD0DEDE1
 * Entry: 0x00069780, Ghidra index: 1165, label: FUN_00069780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069780(float param_1)

{
  int *in_EAX;
  int in_ECX;
  int *unaff_ESI;
  float10 fVar1;
  
  *(undefined1 *)(unaff_ESI + 0x3c) = 1;
  unaff_ESI[0x3d] = in_ECX;
  unaff_ESI[0x3e] = *in_EAX;
  unaff_ESI[0x3f] = in_EAX[1];
  unaff_ESI[0x40] = in_EAX[2];
  if (1.1920929e-07 < param_1) {
    unaff_ESI[0x41] = (int)(1.0 / param_1);
    fVar1 = (float10)(**(code **)(*unaff_ESI + 0x44))();
    unaff_ESI[0x42] = (int)(float)fVar1;
    return;
  }
  unaff_ESI[0x41] = 0x3f800000;
  fVar1 = (float10)(**(code **)(*unaff_ESI + 0x44))();
  unaff_ESI[0x42] = (int)(float)fVar1;
  return;
}
