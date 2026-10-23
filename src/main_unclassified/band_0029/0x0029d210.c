/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5615CC4CE9B6A8D9C7B6D22E17DCFDA0AFF3FEAD2BD7322B0F1721EE90689DC0
 * Entry: 0x0029d210, Ghidra index: 9455, label: FUN_0029d210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0029d210(float param_1)

{
  float *pfVar1;
  float *pfVar2;
  char in_AL;
  float *pfVar3;
  int in_EDX;
  
  pfVar2 = *(float **)(in_EDX + 0xc);
  if (in_AL == '\0') {
    pfVar3 = pfVar2;
    if (*pfVar2 < param_1) {
      do {
        if (pfVar3 == pfVar2 + *(int *)(in_EDX + 0x10) * 2) break;
        pfVar1 = pfVar3 + 2;
        pfVar3 = pfVar3 + 2;
      } while (*pfVar1 < param_1);
    }
    if (pfVar3 == pfVar2 + *(int *)(in_EDX + 0x10) * 2) {
      return (float *)0x0;
    }
  }
  else {
    pfVar3 = pfVar2 + *(int *)(in_EDX + 0x10) * 2 + -2;
    if (param_1 < pfVar2[*(int *)(in_EDX + 0x10) * 2 + -2]) {
      do {
        if (pfVar3 == pfVar2 + -2) break;
        pfVar1 = pfVar3 + -2;
        pfVar3 = pfVar3 + -2;
      } while (param_1 < *pfVar1);
    }
    if (pfVar3 == pfVar2 + -2) {
      return (float *)0x0;
    }
  }
  return pfVar3;
}
