/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40DBFDB38B04C3296ECBF609E352A400D6E01169B7A709019CC911D9201E6E43
 * Entry: 0x0029e6a0, Ghidra index: 9476, label: FUN_0029e6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0029e6a0(float param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0xc);
  pfVar3 = (float *)(iVar2 + iVar4 * 8);
  if (*(float *)(iVar2 + iVar4 * 8) <= param_1) {
    if (param_1 <= pfVar3[2]) {
      return pfVar3;
    }
    iVar4 = iVar4 + 1;
    *(int *)(in_ECX + 0x1c) = iVar4;
    fVar1 = *(float *)(iVar2 + 8 + iVar4 * 8);
    while (fVar1 < param_1) {
      iVar4 = iVar4 + 1;
      *(int *)(in_ECX + 0x1c) = iVar4;
      fVar1 = *(float *)(*(int *)(in_ECX + 0xc) + 8 + iVar4 * 8);
    }
  }
  else {
    iVar4 = iVar4 + -1;
    *(int *)(in_ECX + 0x1c) = iVar4;
    fVar1 = *(float *)(iVar2 + iVar4 * 8);
    while (param_1 < fVar1) {
      iVar4 = iVar4 + -1;
      *(int *)(in_ECX + 0x1c) = iVar4;
      fVar1 = *(float *)(*(int *)(in_ECX + 0xc) + iVar4 * 8);
    }
  }
  pfVar3 = (float *)(iVar2 + iVar4 * 8);
  fVar1 = *(float *)(iVar2 + 8 + iVar4 * 8) - *pfVar3;
  if (fVar1 != 0.0) {
    *(float *)(in_ECX + 0x18) = 1.0 / fVar1;
    return pfVar3;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return pfVar3;
}
