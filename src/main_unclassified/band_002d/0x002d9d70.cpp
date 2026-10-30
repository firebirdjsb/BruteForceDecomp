/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEF9F5EAE92CA23308E79DEED67CC6A32DAB74E0E01A9B0B583D5DBBD12B0DB6
 * Entry: 0x002d9d70, Ghidra index: 10259, label: FUN_002d9d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002d9d70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int in_EDX;
  int iVar6;
  int unaff_EDI;
  
  fVar3 = 0.0;
  iVar6 = *(int *)(in_EDX + 4);
  pfVar5 = (float *)(*(int *)(in_EDX + 0xc) + *(int *)(in_EDX + 8) * unaff_EDI * 4);
  if (0 < iVar6) {
    pfVar4 = *(float **)(in_EDX + 0x14);
    do {
      fVar1 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar2 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      iVar6 = iVar6 + -1;
      fVar3 = fVar1 * fVar2 + fVar3;
    } while (iVar6 != 0);
  }
  if (*(float *)(*(int *)(in_EDX + 0x10) + unaff_EDI * 4) <=
      ABS(*(float *)(*(int *)(in_EDX + 0x10) + unaff_EDI * 4) * 1e-05) + fVar3) {
    return 1;
  }
  return 0;
}
