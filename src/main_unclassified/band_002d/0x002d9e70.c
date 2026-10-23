/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EC0AE0658BBF8315E5B890ECEEFF15CF2A07218F4E17F5833373BF986CC1843
 * Entry: 0x002d9e70, Ghidra index: 10261, label: FUN_002d9e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9e70(float *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  float fVar13;
  undefined1 in_XMM0 [16];
  
  fVar8 = param_1[1];
  pfVar5 = (float *)param_1[3];
  iVar12 = 0;
  if (0 < (int)fVar8) {
    do {
      pfVar10 = pfVar5 + (int)param_1[2];
      FUN_002d9dd0();
      if (*param_1 <= ABS(*pfVar5)) {
        in_XMM0 = rcpss(in_XMM0,*pfVar5);
        fVar13 = in_XMM0._0_4_;
        iVar9 = iVar12 + 1;
        if (iVar9 < (int)param_1[1]) {
          do {
            if (*param_1 < ABS(*pfVar10)) {
              fVar3 = *pfVar10 * -fVar13;
              pfVar4 = (float *)((uint)pfVar5 & 0xfffffff0);
              iVar6 = (((int)pfVar5 - (int)((uint)pfVar5 & 0xfffffff0) >> 2) - iVar12) + (int)fVar8;
              pauVar11 = (undefined1 (*) [16])((uint)pfVar10 & 0xfffffff0);
              do {
                in_XMM0._0_4_ = fVar3 * *pfVar4 + *(float *)*pauVar11;
                in_XMM0._4_4_ = fVar3 * pfVar4[1] + *(float *)(*pauVar11 + 4);
                in_XMM0._8_4_ = fVar3 * pfVar4[2] + *(float *)(*pauVar11 + 8);
                in_XMM0._12_4_ = fVar3 * pfVar4[3] + *(float *)(*pauVar11 + 0xc);
                pfVar4 = pfVar4 + 4;
                *pauVar11 = in_XMM0;
                iVar7 = iVar6 + -4;
                bVar2 = 3 < iVar6;
                iVar6 = iVar7;
                pauVar11 = pauVar11 + 1;
              } while (iVar7 != 0 && bVar2);
              fVar1 = param_1[4];
              *(float *)((int)fVar1 + iVar9 * 4) =
                   fVar3 * *(float *)((int)fVar1 + iVar12 * 4) + *(float *)((int)fVar1 + iVar9 * 4);
            }
            pfVar10 = pfVar10 + (int)param_1[2];
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_1[1]);
        }
      }
      pfVar5 = pfVar5 + (int)param_1[2] + 1;
      fVar8 = param_1[1];
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)fVar8);
  }
  return;
}
