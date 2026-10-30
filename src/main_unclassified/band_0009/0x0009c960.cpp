/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29F1EEA069EEFAE157E83CDBE20E32CEAFC23BFE41B4071AB868DEABB9A7D247
 * Entry: 0x0009c960, Ghidra index: 1868, label: FUN_0009c960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b01;
undefined4 FUN_0009c960(int param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined3 uVar12;
  undefined3 extraout_var;
  int iVar11;
  undefined3 extraout_var_00;
  undefined4 local_8;
  
  uVar10 = FUN_002385a0();
  iVar7 = param_1;
  uVar12 = (undefined3)((uint)uVar10 >> 8);
  if (DAT_00469b01 == '\0') {
    iVar11 = *(int *)(param_1 + 8);
    piVar6 = *(int **)(iVar11 + 4);
    if (piVar6 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar6 + 0x38))(piVar6,1);
    }
    uVar10 = FUN_00090800(iVar11,1);
    uVar12 = (undefined3)((uint)uVar10 >> 8);
    if (*(char *)(iVar7 + 0x59) != '\0') {
      param_1 = 0;
      FUN_0006a610(&param_1);
      param_1 = 1;
      FUN_0006a610(&param_1);
      uVar12 = extraout_var;
    }
    if ((param_2[0x85] & 1) != 0) {
      param_1 = 3;
      FUN_0006a610(&param_1);
      param_1 = 3;
      FUN_0006a610(&param_1);
      pbVar8 = param_2;
      param_1 = 0x14;
      if (*(char *)(iVar7 + 0x58) != '\0') {
        param_1 = 0x12;
      }
      if (((*param_2 & 4) == 0) || ((*param_2 & 2) == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      *(undefined1 *)(iVar7 + 0x7c) = uVar9;
      iVar11 = FUN_000e96b0(*(undefined4 *)(param_2 + 0x80));
      if ((iVar11 == 0) || (*(char *)(iVar7 + 0x7c) == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      *(undefined1 *)(iVar7 + 0x7d) = uVar9;
      if ((*(char *)(iVar7 + 0x58) == '\0') && (*(char *)(iVar7 + 0x7c) != '\0')) {
        iVar11 = *(int *)(*(int *)(*(int *)(pbVar8 + 0x80) + 0xb74) + 0x5c);
        uVar10 = *(undefined4 *)(iVar11 + 0xb4);
        param_1 = 1;
        uVar1 = *(undefined4 *)(iVar11 + 0xc0);
        uVar2 = *(undefined4 *)(iVar11 + 0xc4);
        uVar3 = *(undefined4 *)(iVar11 + 200);
        uVar4 = *(undefined4 *)(iVar11 + 0xcc);
        *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(pbVar8 + 0x2c);
        *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(pbVar8 + 0x24);
        uVar5 = *(undefined4 *)(pbVar8 + 0x28);
        *(undefined4 *)(iVar7 + 0x70) = uVar2;
        *(undefined4 *)(iVar7 + 100) = uVar5;
        *(undefined4 *)(iVar7 + 0x68) = uVar10;
        *(undefined4 *)(iVar7 + 0x6c) = uVar1;
        *(undefined4 *)(iVar7 + 0x74) = uVar3;
        *(undefined4 *)(iVar7 + 0x78) = uVar4;
        FUN_0006a610(&param_1);
        param_1 = 0x17;
        local_8 = 0x206;
        FUN_0006a610(&local_8);
        FUN_00062280();
        local_8 = 3;
        FUN_0006a610(&local_8);
        local_8 = 3;
        FUN_0006a610(&local_8);
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
      FUN_000a4d00();
      uVar12 = extraout_var_00;
    }
  }
  return CONCAT31(uVar12,1);
}
