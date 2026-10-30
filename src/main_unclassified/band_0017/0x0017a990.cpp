/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 825B61EB5562CFFA99DB31AF2006B2D1D862DA3EB3615AFEB42B0920028AC97D
 * Entry: 0x0017a990, Ghidra index: 5017, label: FUN_0017a990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a990(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  
  pfVar1 = *(float **)(unaff_ESI + 4);
  if (pfVar1 != (float *)0x0) {
    iVar6 = *(int *)(unaff_ESI + 8) - (int)pfVar1 >> 4;
    if (2 < iVar6) {
      if (iVar6 == 3) {
        pfVar1[2] = 1.0 / (pfVar1[8] - *pfVar1);
      }
      else {
        iVar5 = iVar6 + -4;
        if (0 < iVar5) {
          iVar3 = 0;
          do {
            iVar2 = *(int *)(unaff_ESI + 4);
            iVar5 = iVar5 + -1;
            *(float *)(iVar3 + 8 + iVar2) =
                 1.0 / (*(float *)(iVar3 + 0x30 + iVar2) - *(float *)(iVar3 + iVar2));
            iVar3 = iVar3 + 0x10;
          } while (iVar5 != 0);
        }
      }
      iVar6 = iVar6 + -1;
      if (0 < iVar6) {
        iVar5 = 0;
        do {
          pfVar1 = (float *)(*(int *)(unaff_ESI + 4) + 0x10 + iVar5);
          pfVar4 = (float *)(*(int *)(unaff_ESI + 4) + iVar5);
          iVar5 = iVar5 + 0x10;
          iVar6 = iVar6 + -1;
          pfVar4[3] = 1.0 / (*pfVar1 - *pfVar4);
        } while (iVar6 != 0);
      }
    }
  }
  return;
}
