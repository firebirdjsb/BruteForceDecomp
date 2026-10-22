/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D71FB928AFA0F832277AC4EDB1EEA373E107734CB9BFE12981D1C022D25EE6EA
 * Entry: 0x002f8ea0, Ghidra index: 10968, label: FUN_002f8ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f8ea0(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_EAX;
  float *pfVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *unaff_EDI;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int local_8;
  
  *in_EAX = in_ECX;
  in_EAX[1] = 1;
  if (2 < in_ECX) {
    iVar10 = in_ECX >> 1;
    fVar13 = (float10)fpatan((float10)1.0,(float10)1);
    *unaff_EDI = 0x3f800000;
    fVar2 = (float)(fVar13 / (float10)iVar10);
    fVar13 = (float10)fcos((float10)iVar10 * (float10)fVar2);
    unaff_EDI[1] = (float)fVar13;
    if (3 < iVar10) {
      fVar11 = (float10)fcos((float10)fVar2 + (float10)fVar2);
      unaff_EDI[2] = (float)((float10)0.5 / fVar11);
      fVar11 = (float10)fcos((float10)fVar2 * (float10)6.0);
      unaff_EDI[3] = (float)((float10)0.5 / fVar11);
    }
    local_8 = 4;
    if (4 < iVar10) {
      pfVar6 = (float *)(unaff_EDI + 6);
      do {
        fVar11 = (float10)local_8;
        local_8 = local_8 + 4;
        fVar11 = fVar11 * (float10)fVar2;
        fVar12 = (float10)fcos(fVar11);
        pfVar6[-2] = (float)fVar12;
        fVar12 = (float10)fsin(fVar11);
        pfVar6[-1] = (float)fVar12;
        fVar12 = (float10)fcos(fVar11 * (float10)3.0);
        *pfVar6 = (float)fVar12;
        fVar11 = (float10)fsin(fVar11 * (float10)3.0);
        pfVar6[1] = (float)fVar11;
        pfVar6 = pfVar6 + 4;
      } while (local_8 < iVar10);
    }
    iVar1 = 0;
    while (iVar9 = iVar1, 2 < iVar10) {
      iVar1 = iVar9 + iVar10;
      iVar10 = iVar10 >> 1;
      unaff_EDI[iVar1 + 1] = (float)fVar13;
      unaff_EDI[iVar1] = 0x3f800000;
      if (3 < iVar10) {
        fVar2 = (float)unaff_EDI[iVar9 + 6];
        unaff_EDI[iVar1 + 2] = 0.5 / (float)unaff_EDI[iVar9 + 4];
        unaff_EDI[iVar1 + 3] = 0.5 / fVar2;
        if (4 < iVar10) {
          puVar8 = unaff_EDI + iVar9 + 10;
          iVar9 = (iVar10 - 5U >> 2) + 1;
          puVar7 = unaff_EDI + iVar1 + 4;
          do {
            uVar3 = puVar8[-1];
            uVar4 = *puVar8;
            uVar5 = puVar8[-2];
            puVar7[3] = puVar8[1];
            *puVar7 = uVar5;
            puVar8 = puVar8 + 8;
            iVar9 = iVar9 + -1;
            puVar7[1] = uVar3;
            puVar7[2] = uVar4;
            puVar7 = puVar7 + 4;
          } while (iVar9 != 0);
        }
      }
    }
  }
  return;
}
