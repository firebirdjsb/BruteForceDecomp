/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F48294525A41E972B62682D916F1CD48603A701E337C12ABEC73F9E9195F281
 * Entry: 0x00168a10, Ghidra index: 4741, label: FUN_00168a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00168a10(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *unaff_EDI;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_EDI + 0x2c)) {
    do {
      *(undefined4 *)(*(int *)(unaff_EDI + 0x9c) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EDI + 0x2c));
  }
  *(undefined4 *)(*(int *)(unaff_EDI + 0x9c) + param_1 * 4) = 0x3f800000;
  iVar3 = *(int *)(unaff_EDI + 0x40);
  iVar11 = 0;
  if (0 < iVar3) {
    do {
      iVar12 = *(int *)(*(int *)(unaff_EDI + 0x34) + iVar11 * 4);
      iVar4 = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x6c) + iVar11 * 4) =
           *(undefined4 *)
            (*(int *)(unaff_EDI + 4) + ((param_1 << (*unaff_EDI & 0x1f)) + iVar12) * 4);
      if (3 < iVar3) {
        local_c = 3;
        do {
          iVar8 = iVar4 * 4;
          iVar7 = iVar4 << (unaff_EDI[0x58] & 0x1f);
          iVar4 = iVar4 + 4;
          *(undefined4 *)(*(int *)(unaff_EDI + 0x5c) + (iVar7 + iVar11) * 4) =
               *(undefined4 *)
                (*(int *)(unaff_EDI + 4) +
                ((*(int *)(*(int *)(unaff_EDI + 0x34) + iVar8) << (*unaff_EDI & 0x1f)) + iVar12) * 4
                );
          *(undefined4 *)
           (*(int *)(unaff_EDI + 0x5c) + ((local_c + -2 << (unaff_EDI[0x58] & 0x1f)) + iVar11) * 4)
               = *(undefined4 *)
                  (*(int *)(unaff_EDI + 4) +
                  ((*(int *)(*(int *)(unaff_EDI + 0x34) + -0xc + iVar4 * 4) << (*unaff_EDI & 0x1f))
                  + iVar12) * 4);
          *(undefined4 *)
           (*(int *)(unaff_EDI + 0x5c) + ((local_c + -1 << (unaff_EDI[0x58] & 0x1f)) + iVar11) * 4)
               = *(undefined4 *)
                  (*(int *)(unaff_EDI + 4) +
                  ((*(int *)(*(int *)(unaff_EDI + 0x34) + -8 + iVar4 * 4) << (*unaff_EDI & 0x1f)) +
                  iVar12) * 4);
          iVar8 = local_c << (unaff_EDI[0x58] & 0x1f);
          local_c = local_c + 4;
          *(undefined4 *)(*(int *)(unaff_EDI + 0x5c) + (iVar8 + iVar11) * 4) =
               *(undefined4 *)
                (*(int *)(unaff_EDI + 4) +
                ((*(int *)(*(int *)(unaff_EDI + 0x34) + -4 + iVar4 * 4) << (*unaff_EDI & 0x1f)) +
                iVar12) * 4);
        } while (local_c < iVar3);
      }
      for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
        *(undefined4 *)
         (*(int *)(unaff_EDI + 0x5c) + ((iVar4 << (unaff_EDI[0x58] & 0x1f)) + iVar11) * 4) =
             *(undefined4 *)
              (*(int *)(unaff_EDI + 4) +
              ((*(int *)(*(int *)(unaff_EDI + 0x34) + iVar4 * 4) << (*unaff_EDI & 0x1f)) + iVar12) *
              4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  if (iVar3 == 1) {
    *(float *)(*(int *)(unaff_EDI + 0x5c) + (0 << (unaff_EDI[0x58] & 0x1f)) * 4) =
         1.0 / *(float *)(*(int *)(unaff_EDI + 0x5c) + (0 << (unaff_EDI[0x58] & 0x1f)) * 4);
  }
  else {
    FUN_00167ed0(iVar3);
    cVar2 = FUN_00167fd0(unaff_EDI + 0x60,iVar3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  iVar11 = 0;
  if (0 < iVar3) {
    do {
      fVar1 = 0.0;
      iVar12 = 0;
      if (3 < iVar3) {
        iVar4 = *(int *)(unaff_EDI + 0x5c);
        local_8 = 3;
        pfVar5 = (float *)(*(int *)(unaff_EDI + 0x6c) + 8);
        do {
          bVar6 = (byte)*(undefined2 *)(unaff_EDI + 0x58);
          iVar9 = iVar12 << (bVar6 & 0x1f);
          iVar12 = iVar12 + 4;
          iVar7 = local_8 + -1;
          iVar8 = local_8 + -2;
          iVar10 = local_8 << (bVar6 & 0x1f);
          local_8 = local_8 + 4;
          fVar1 = (((fVar1 - *(float *)(iVar4 + (iVar9 + iVar11) * 4) * pfVar5[-2]) -
                   *(float *)(iVar4 + ((iVar8 << (bVar6 & 0x1f)) + iVar11) * 4) * pfVar5[-1]) -
                  *(float *)(iVar4 + ((iVar7 << (bVar6 & 0x1f)) + iVar11) * 4) * *pfVar5) -
                  *(float *)(iVar4 + (iVar10 + iVar11) * 4) * pfVar5[1];
          pfVar5 = pfVar5 + 4;
        } while (local_8 < iVar3);
      }
      if (iVar12 < iVar3) {
        pfVar5 = (float *)(*(int *)(unaff_EDI + 0x6c) + iVar12 * 4);
        do {
          iVar4 = iVar12 << ((byte)*(undefined2 *)(unaff_EDI + 0x58) & 0x1f);
          iVar12 = iVar12 + 1;
          fVar1 = fVar1 - *(float *)(*(int *)(unaff_EDI + 0x5c) + (iVar4 + iVar11) * 4) * *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (iVar12 < iVar3);
      }
      iVar12 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      *(float *)(*(int *)(unaff_EDI + 0x9c) + *(int *)(*(int *)(unaff_EDI + 0x34) + iVar12) * 4) =
           fVar1;
    } while (iVar11 < iVar3);
  }
  return 1;
}
