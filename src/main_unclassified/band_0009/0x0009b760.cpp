/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37CB7F5201B44757595197C05B650E1D87E94E9E15ADF5CBC0DBE68AE772CEE9
 * Entry: 0x0009b760, Ghidra index: 1863, label: FUN_0009b760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_00062280(void);
extern void FUN_00090800(int param_1);
extern undefined4 FUN_0006a610(int *param_1);
extern undefined4 FUN_000e96b0(int param_1);
extern void FUN_000907d0(void);
extern void FUN_000907a0(int param_1,int param_2);
extern undefined4 FUN_000a4d00(void);

undefined4 FUN_0009b760(int param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined3 uVar11;
  undefined3 extraout_var;
  int iVar10;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_002385a0();
  iVar10 = param_1;
  iVar12 = *(int *)(param_1 + 8);
  piVar6 = *(int **)(iVar12 + 4);
  if (piVar6 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar6 + 0x38))(piVar6,1);
  }
  uVar9 = FUN_00090800(iVar12,1);
  uVar11 = (undefined3)((uint)uVar9 >> 8);
  if (*(char *)(iVar10 + 0x9c) != '\0') {
    local_8 = 0;
    FUN_0006a610(&local_8);
    local_8 = 1;
    FUN_0006a610(&local_8);
    uVar11 = extraout_var;
  }
  if ((param_2[0x85] & 1) != 0) {
    puVar13 = (undefined4 *)(iVar10 + 0xc);
    puVar14 = (undefined4 *)(param_1 + 0x50);
    for (iVar12 = 0x11; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    local_8 = 3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_2 + 0x90) * *(float *)(param_1 + 0x5c);
    FUN_0006a610(&local_8);
    local_8 = 3;
    FUN_0006a610(&local_8);
    pbVar7 = param_2;
    iVar12 = param_1;
    if (((*param_2 & 4) == 0) || ((*param_2 & 2) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 0xc0) = uVar8;
    iVar10 = FUN_000e96b0(*(undefined4 *)(param_2 + 0x80));
    if ((iVar10 == 0) || (*(char *)(iVar12 + 0xc0) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(iVar12 + 0xc1) = uVar8;
    if (*(char *)(iVar12 + 0xc0) == '\0') {
      if ((*(char *)(iVar12 + 0xc2) == '\0') || (*(float *)(iVar12 + 0x5c) < 1.0)) {
        param_1 = 0xf;
      }
      else {
        param_1 = 4;
        FUN_000907d0();
        FUN_000907a0(0xb,1);
        FUN_000907a0(0xc,1);
      }
    }
    else {
      iVar10 = *(int *)(*(int *)(*(int *)(pbVar7 + 0x80) + 0xb74) + 0x5c);
      uVar9 = *(undefined4 *)(iVar10 + 0xb4);
      param_1 = 1;
      uVar1 = *(undefined4 *)(iVar10 + 0xc0);
      uVar2 = *(undefined4 *)(iVar10 + 0xc4);
      uVar3 = *(undefined4 *)(iVar10 + 200);
      uVar4 = *(undefined4 *)(iVar10 + 0xcc);
      *(undefined4 *)(iVar12 + 0xa0) = *(undefined4 *)(pbVar7 + 0x2c);
      *(undefined4 *)(iVar12 + 0xa4) = *(undefined4 *)(pbVar7 + 0x24);
      uVar5 = *(undefined4 *)(pbVar7 + 0x28);
      *(undefined4 *)(iVar12 + 0xb4) = uVar2;
      *(undefined4 *)(iVar12 + 0xa8) = uVar5;
      *(undefined4 *)(iVar12 + 0xb8) = uVar3;
      *(undefined4 *)(iVar12 + 0xac) = uVar9;
      *(undefined4 *)(iVar12 + 0xb0) = uVar1;
      *(undefined4 *)(iVar12 + 0xbc) = uVar4;
      FUN_0006a610(&param_1);
      local_8 = 2;
      if ((*(char *)(iVar12 + 0xc2) == '\0') || (*(float *)(iVar12 + 0x5c) < 1.0)) {
        param_1 = 0x10;
      }
      else {
        param_1 = 5;
        FUN_000907d0();
        FUN_000907a0(0xb,1);
        FUN_000907a0(0xc,1);
        local_8 = 3;
      }
      local_c = 0x206;
      FUN_0006a610(&local_c);
      FUN_00062280();
      local_c = 3;
      FUN_0006a610(&local_c);
      local_c = 3;
      FUN_0006a610(&local_c);
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    uVar9 = FUN_000a4d00();
    uVar11 = (undefined3)((uint)uVar9 >> 8);
  }
  return CONCAT31(uVar11,1);
}
