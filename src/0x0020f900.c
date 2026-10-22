/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8885299245C04A9EB467404BFE10F5D12D416729F5B4E5B7F52FC849C2269CF
 * Entry: 0x0020f900, Ghidra index: 7412, label: FUN_0020f900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0020f900(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  
  iVar16 = (param_1[0x2a] + 1) * (param_1[0x2a] + 1);
  FUN_0020efb0(param_1);
  iVar13 = (**(code **)(*param_1 + 0x40))();
  fVar6 = *(float *)(iVar13 + 0x28);
  fVar7 = *(float *)(iVar13 + 0x2c);
  fVar8 = *(float *)(iVar13 + 0x24);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x40))();
    FUN_0006ec90();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  else if (param_3 == 1) {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    iVar13 = (**(code **)(*param_2 + 0x10))();
    fVar9 = *(float *)(iVar13 + 0x1c);
    fVar10 = *(float *)(iVar13 + 0x10);
    fVar11 = *(float *)(iVar13 + 4);
    pfVar14 = (float *)(**(code **)(*param_2 + 0x10))();
    fVar3 = pfVar14[6];
    fVar1 = *pfVar14;
    fVar4 = pfVar14[3];
    if (0 < iVar16) {
      iVar13 = 0;
      do {
        fVar2 = *(float *)(param_1[0x20] + 8 + iVar13);
        fVar5 = *(float *)(param_1[0x20] + 4 + iVar13);
        iVar15 = param_1[0x20];
        *(float *)(iVar15 + iVar13) = fVar8 + fVar5 * fVar11 + fVar2 * fVar1;
        iVar15 = iVar15 + iVar13;
        *(float *)(iVar15 + 4) = fVar2 * fVar4 + fVar5 * fVar10 + fVar6;
        iVar13 = iVar13 + 0x18;
        iVar16 = iVar16 + -1;
        *(float *)(iVar15 + 8) = fVar2 * fVar3 + fVar5 * fVar9 + fVar7;
      } while (iVar16 != 0);
      return;
    }
  }
  else if (param_3 == 2) {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    (**(code **)(*param_1 + 0x40))();
    pfVar14 = (float *)FUN_00066160();
    fVar9 = pfVar14[2];
    fVar10 = pfVar14[1];
    uVar12 = *(undefined8 *)(pfVar14 + 1);
    fVar11 = *pfVar14;
    pfVar14 = (float *)(**(code **)(*param_2 + 0xc))();
    fVar4 = fVar10 * (fVar8 - *pfVar14) - (fVar6 - pfVar14[1]) * fVar11;
    fVar3 = (fVar7 - pfVar14[2]) * fVar11 - fVar9 * (fVar8 - *pfVar14);
    fVar9 = (fVar6 - pfVar14[1]) * fVar9 - (fVar7 - pfVar14[2]) * fVar10;
    fVar10 = 1.0 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar9 * fVar9);
    if (0 < iVar16) {
      iVar13 = 0;
      do {
        fVar1 = *(float *)(param_1[0x20] + 8 + iVar13);
        fVar2 = *(float *)(param_1[0x20] + 4 + iVar13);
        iVar15 = param_1[0x20];
        *(float *)(iVar15 + iVar13) = fVar2 * fVar9 * fVar10 + fVar8 + fVar1 * fVar11;
        iVar15 = iVar15 + iVar13;
        *(float *)(iVar15 + 4) = fVar1 * (float)uVar12 + fVar2 * fVar3 * fVar10 + fVar6;
        iVar13 = iVar13 + 0x18;
        iVar16 = iVar16 + -1;
        *(float *)(iVar15 + 8) =
             fVar1 * (float)((ulonglong)uVar12 >> 0x20) + fVar2 * fVar4 * fVar10 + fVar7;
      } while (iVar16 != 0);
      return;
    }
  }
  return;
}
