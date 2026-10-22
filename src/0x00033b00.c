/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33AD99064A1DD6C9AF61A4554CB5258CC3F42E58B721BB80EC6698A4875F4AC8
 * Entry: 0x00033b00, Ghidra index: 338, label: FUN_00033b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00033b00(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  float *pfVar6;
  int iVar7;
  float in_XMM1_Da;
  float fVar13;
  undefined1 auVar9 [16];
  float fVar8;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_EAX + 0x24c);
  if (iVar1 != 0) {
    if (1 < *(int *)(iVar1 + 0x34)) {
      if (*(int *)(iVar1 + 0x34) != 2) {
        return 0;
      }
      pfVar6 = (float *)(**(code **)(*(int *)(iVar1 + 8) + 4))();
      iVar7 = 0;
      if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
        iVar7 = **(int **)(iVar1 + 0x30);
      }
      fVar2 = *(float *)(*(int *)(iVar7 + 0xc) + 0x1c) - pfVar6[2];
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x30) + 4) + 0xc);
      fVar3 = *(float *)(*(int *)(iVar7 + 0xc) + 0x14) - *pfVar6;
      fVar4 = *(float *)(iVar1 + 0x1c) - pfVar6[2];
      fVar5 = *(float *)(iVar1 + 0x14) - *pfVar6;
      in_XMM1_Da = in_XMM1_Da + fVar3 * fVar3;
      fVar13 = fVar2 * fVar2 + 0.0;
      auVar12._4_4_ = in_XMM1_Da;
      auVar12._0_4_ = fVar13;
      auVar12._8_4_ = in_XMM1_Da;
      auVar12._12_4_ = in_XMM1_Da;
      auVar9._4_12_ = auVar12._4_12_;
      auVar9._0_4_ = fVar13 + fVar3 * fVar3;
      if (2e-05 <= auVar9._0_4_) {
        auVar12 = rsqrtss(auVar9,auVar9);
        fVar13 = auVar12._0_4_;
        fVar8 = fVar13 + fVar5 * fVar5;
        fVar14 = fVar4 * fVar4 + 0.0;
        auVar10._4_4_ = fVar8;
        auVar10._0_4_ = fVar14;
        auVar10._8_4_ = fVar8;
        auVar10._12_4_ = fVar8;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = fVar14 + fVar5 * fVar5;
        if ((2e-05 <= auVar11._0_4_) &&
           (auVar12 = rsqrtss(auVar11,auVar11),
           -0.5 <= fVar5 * auVar12._0_4_ * fVar3 * fVar13 + fVar4 * auVar12._0_4_ * fVar2 * fVar13))
        {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}
