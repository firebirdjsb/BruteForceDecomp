/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04CDD32531C954779EC137BA2066AF207DF075C0FF987087616312C94BFA9068
 * Entry: 0x000213e0, Ghidra index: 186, label: FUN_000213e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000213e0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  
  bVar7 = false;
  if (*(int *)(param_1 + 0x6f4) == 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 2;
    *param_3 = 1;
    return 0;
  }
  (**(code **)(**(int **)(param_3 + 0x2c) + 0x54))();
  iVar9 = *(int *)(param_3 + 0x2c);
  cVar8 = FUN_00126b40();
  pfVar10 = extraout_EDX;
  if (cVar8 == '\0') {
    cVar8 = FUN_00126a40();
    pfVar10 = extraout_EDX_00;
    if ((cVar8 != '\0') || (*(int *)(iVar9 + 0x1f8) == 8)) goto LAB_0002144c;
  }
  else {
LAB_0002144c:
    if (0.010000001 < pfVar10[2] * pfVar10[2] + pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10) {
      fVar1 = pfVar10[2];
      fVar2 = pfVar10[1];
      fVar3 = *pfVar10;
      auVar13 = rsqrtss(in_XMM0,fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar11 = auVar13._0_4_;
      fVar4 = -*(float *)(param_3 + 0x28);
      fVar5 = -*(float *)(param_3 + 0x24);
      fVar6 = -*(float *)(param_3 + 0x20);
      auVar13 = rsqrtss(auVar13,fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar12 = auVar13._0_4_;
      if (fVar12 * fVar6 * fVar11 * fVar3 +
          fVar5 * fVar12 * fVar2 * fVar11 + fVar4 * fVar12 * fVar1 * fVar11 <= 0.2) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
  }
  if (*(float *)(param_3 + 4) <= *(float *)(param_1 + 0x71c) * 1.1) {
    if ((param_3[1] == '\0') ||
       ((((*(byte *)(param_1 + 0x710) & 1) != 0 &&
         (*(float *)(param_1 + 0x70c) < 0.0 == (*(float *)(param_1 + 0x70c) == 0.0))) && (!bVar7))))
    {
      if ((param_3[2] == '\0') || (!bVar7)) {
LAB_00021652:
        FUN_0004e8f0();
        param_2[2] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xfa | 2;
        *(undefined4 *)(param_1 + 0x394) = 0;
        *(undefined4 *)(param_1 + 0x38c) = 0;
        (**(code **)(*(int *)(param_1 + 0x40) + 0x20))(param_2);
        return 1;
      }
      iVar9 = FUN_00020ad0();
      if (iVar9 < 3) goto LAB_00021652;
    }
    *(undefined4 *)(param_1 + 0x730) = 4;
    *(undefined4 *)(param_1 + 0x6ac) = 9;
  }
  else {
    FUN_0004e8f0();
    *(undefined4 *)(param_1 + 0x6ac) = 6;
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))();
  *param_3 = 1;
  return 1;
}
