/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEA2683E6E913FB8E089EA0726C6B535C6CADB4D33C395C4BAC409293EAFCBA7
 * Entry: 0x000330b0, Ghidra index: 333, label: FUN_000330b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_000330b0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int in_EAX;
  float *unaff_EDI;
  float in_XMM1_Da;
  float fVar17;
  undefined1 auVar11 [16];
  float fVar10;
  float fVar18;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_6;
  
  local_6 = 0;
  if ((((unaff_EDI != (float *)0x0) && (param_2 != (float *)0x0)) && (-1 < in_EAX)) &&
     (cVar9 = FUN_000233a0(), cVar9 != '\0')) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x14 + in_EAX * 0x18);
    if (((iVar2 != 0) && (cVar9 = FUN_000233a0(), cVar9 != '\0')) &&
       (iVar1 = *(int *)(iVar1 + in_EAX * 0x18 + 0x2c), iVar1 != 0)) {
      fVar3 = param_2[2] - unaff_EDI[2];
      fVar4 = *param_2 - *unaff_EDI;
      fVar5 = *(float *)(iVar2 + 0x1c) - unaff_EDI[2];
      fVar6 = *(float *)(iVar2 + 0x14) - *unaff_EDI;
      fVar7 = *(float *)(iVar1 + 0x1c) - unaff_EDI[2];
      fVar8 = *(float *)(iVar1 + 0x14) - *unaff_EDI;
      in_XMM1_Da = in_XMM1_Da + fVar4 * fVar4;
      fVar17 = fVar3 * fVar3 + 0.0;
      auVar16._4_4_ = in_XMM1_Da;
      auVar16._0_4_ = fVar17;
      auVar16._8_4_ = in_XMM1_Da;
      auVar16._12_4_ = in_XMM1_Da;
      auVar11._4_12_ = auVar16._4_12_;
      auVar11._0_4_ = fVar17 + fVar4 * fVar4;
      if (2e-05 <= auVar11._0_4_) {
        auVar16 = rsqrtss(auVar11,auVar11);
        fVar17 = auVar16._0_4_;
        fVar10 = fVar17 + fVar6 * fVar6;
        fVar18 = fVar5 * fVar5 + 0.0;
        auVar12._4_4_ = fVar10;
        auVar12._0_4_ = fVar18;
        auVar12._8_4_ = fVar10;
        auVar12._12_4_ = fVar10;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = fVar18 + fVar6 * fVar6;
        if (2e-05 <= auVar13._0_4_) {
          auVar16 = rsqrtss(auVar13,auVar13);
          fVar10 = auVar16._0_4_;
          fVar18 = fVar10 + fVar8 * fVar8;
          fVar19 = fVar7 * fVar7 + 0.0;
          auVar14._4_4_ = fVar18;
          auVar14._0_4_ = fVar19;
          auVar14._8_4_ = fVar18;
          auVar14._12_4_ = fVar18;
          auVar15._4_12_ = auVar14._4_12_;
          auVar15._0_4_ = fVar19 + fVar8 * fVar8;
          if (2e-05 <= auVar15._0_4_) {
            auVar16 = rsqrtss(auVar15,auVar15);
            fVar18 = auVar16._0_4_;
            if (fVar10 * 0.0 * fVar17 * 0.0 +
                fVar6 * fVar10 * fVar4 * fVar17 + fVar5 * fVar10 * fVar3 * fVar17 <
                fVar18 * 0.0 * fVar17 * 0.0 +
                fVar8 * fVar18 * fVar4 * fVar17 + fVar7 * fVar18 * fVar3 * fVar17) {
              local_6 = 1;
            }
          }
        }
      }
    }
  }
  return local_6;
}
