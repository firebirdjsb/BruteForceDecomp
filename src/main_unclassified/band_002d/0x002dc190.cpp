/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35ADF281893FD5900EA22E910209D0D45705E10F37BFD3DC89E16E7A5DEF1386
 * Entry: 0x002dc190, Ghidra index: 10298, label: FUN_002dc190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc190(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar2 = unaff_ESI[in_EAX + 0x1a];
  fVar1 = unaff_ESI[(in_EAX + 0xb) * 4 + 1] * *(float *)((int)fVar2 + 0x38);
  fVar3 = (unaff_ESI + (in_EAX + 0xb) * 4)[2] * *(float *)((int)fVar2 + 0x3c);
  *in_EDX = unaff_ESI[(in_EAX + 0xb) * 4] * *(float *)((int)fVar2 + 0x34);
  in_EDX[1] = fVar1;
  in_EDX[2] = fVar3;
  if (param_1 < 0.0) {
    *in_EDX = -*in_EDX;
    in_EDX[1] = -fVar1;
    in_EDX[2] = -fVar3;
  }
  param_1 = *(float *)((int)fVar2 + 0x40) * param_1;
  fVar2 = unaff_ESI[1];
  fVar1 = unaff_ESI[2];
  *unaff_EDI = param_1 * *unaff_ESI;
  unaff_EDI[1] = param_1 * fVar2;
  unaff_EDI[2] = param_1 * fVar1;
  return;
}
