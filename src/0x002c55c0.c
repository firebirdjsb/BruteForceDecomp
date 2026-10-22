/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6980E179FD0270D87E930E15DE38F6B5F0E72C981FACD5E3BFF36D9AE1A5AC66
 * Entry: 0x002c55c0, Ghidra index: 10065, label: FUN_002c55c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c55c0(void)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  int in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float fVar3;
  
  fVar3 = *in_EAX * *(float *)(in_ECX + 0x14);
  fVar1 = *(float *)(in_ECX + 0x18) * in_EAX[1];
  fVar2 = *(float *)(in_ECX + 0x1c) * in_EAX[2];
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *in_EDX = fVar3;
  if (fVar3 < 1e-10) {
    *in_EDX = 1.0;
    *unaff_ESI = 1.0;
    return;
  }
  *unaff_ESI = 1.0 / fVar3;
  return;
}
