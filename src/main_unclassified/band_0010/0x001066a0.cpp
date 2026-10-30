/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C906F0E146D6A08C4BD70C74E402215D6B894C4F5D3A4B0DB9AD0E07E321AD9
 * Entry: 0x001066a0, Ghidra index: 3357, label: FUN_001066a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001066a0(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  pfVar2 = param_1 + 7;
  iVar3 = 2;
  do {
    if ((pfVar2[-2] != 0.0) && (0.0 < *pfVar2)) {
      fVar1 = fVar1 + *pfVar2;
    }
    if ((pfVar2[2] != 0.0) && (0.0 < pfVar2[4])) {
      fVar1 = fVar1 + pfVar2[4];
    }
    if ((pfVar2[6] != 0.0) && (0.0 < pfVar2[8])) {
      fVar1 = fVar1 + pfVar2[8];
    }
    if ((pfVar2[10] != 0.0) && (0.0 < pfVar2[0xc])) {
      fVar1 = fVar1 + pfVar2[0xc];
    }
    if ((pfVar2[0xe] != 0.0) && (0.0 < pfVar2[0x10])) {
      fVar1 = fVar1 + pfVar2[0x10];
    }
    if ((pfVar2[0x12] != 0.0) && (0.0 < pfVar2[0x14])) {
      fVar1 = fVar1 + pfVar2[0x14];
    }
    pfVar2 = pfVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar4 = ((float)(int)param_1[4] * 0.1 + 1.0) * (*param_1 / ((float)(int)param_1[3] * 0.1 + 1.0));
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  return (float10)fVar4;
}
