/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23418562B20FB3E2F2501B2124E47FC60CE0530238CACFEB7E5A78E7816BA533
 * Entry: 0x003057e0, Ghidra index: 11096, label: FUN_003057e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003057e0(void)

{
  float fVar1;
  byte *in_EAX;
  float *pfVar2;
  int *in_EDX;
  float *pfVar3;
  int iVar4;
  int unaff_EDI;
  
  if ((*in_EAX & 0xc) == 0) {
    iVar4 = *in_EDX + -1;
    pfVar2 = (float *)in_EDX[1];
    pfVar3 = (float *)in_EDX[2];
    do {
      fVar1 = *(float *)(unaff_EDI + (int)pfVar2[9] * 4);
      iVar4 = iVar4 + -1;
      *(float *)(in_EAX + 0x9c) = fVar1 * *pfVar3 + *(float *)(in_EAX + 0x9c);
      *(float *)(in_EAX + 0xa0) = fVar1 * pfVar3[1] + *(float *)(in_EAX + 0xa0);
      *(float *)(in_EAX + 0xa4) = fVar1 * pfVar3[2] + *(float *)(in_EAX + 0xa4);
      fVar1 = *(float *)(unaff_EDI + (int)pfVar2[9] * 4) * *(float *)(in_EAX + 0x40);
      *(float *)(in_EAX + 0xac) = fVar1 * *pfVar2 + *(float *)(in_EAX + 0xac);
      *(float *)(in_EAX + 0xb0) = fVar1 * pfVar2[1] + *(float *)(in_EAX + 0xb0);
      *(float *)(in_EAX + 0xb4) = fVar1 * pfVar2[2] + *(float *)(in_EAX + 0xb4);
      pfVar2 = pfVar2 + 0xc;
      pfVar3 = pfVar3 + 4;
    } while (-1 < iVar4);
  }
  return;
}
