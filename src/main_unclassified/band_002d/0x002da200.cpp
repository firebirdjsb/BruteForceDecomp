/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80713E320DE45CF967D60C82F08F99D925DEAC0A1949A8D270E94E7F595A5D4E
 * Entry: 0x002da200, Ghidra index: 10264, label: FUN_002da200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da200(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  
  iVar4 = *(int *)(unaff_ESI + 4);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      fVar2 = 0.0;
      pfVar1 = (float *)(*(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 8) * iVar5 * 4);
      if (0 < iVar4) {
        pfVar3 = pfVar1;
        do {
          iVar4 = iVar4 + -1;
          fVar2 = *(float *)((*(int *)(unaff_ESI + 0x10) - (int)pfVar1) + (int)pfVar3) * *pfVar3 +
                  fVar2;
          pfVar3 = pfVar3 + 1;
        } while (iVar4 != 0);
      }
      *(float *)(*(int *)(unaff_ESI + 0x14) + iVar5 * 4) = fVar2;
      iVar4 = *(int *)(unaff_ESI + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}
