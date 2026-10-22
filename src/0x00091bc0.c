/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3965BF0106C9B3BCE755ABBBB8E1A6E6C8E58B1D627546BEF40629EEDCCEEF22
 * Entry: 0x00091bc0, Ghidra index: 1791, label: FUN_00091bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00091bc0(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 1;
  local_c = 0x2c;
  if (*(int *)(in_EAX + 0x34) == 2) {
    iVar1 = *(int *)(in_EAX + 8);
    piVar2 = *(int **)(iVar1 + 0x10);
    local_c = 0x2c;
    if (piVar2 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar2 + 0x38))(piVar2,0);
    }
    FUN_00090800(iVar1 + 0xc,0);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    FUN_000a4d00();
    return local_5;
  }
  if ((*(int *)(in_EAX + 0x24) == 0) && (*(int *)(in_EAX + 0x34) == 0)) {
    local_10 = 1;
    local_c = 0x2c;
    FUN_0006a610(&local_10);
    local_10 = 0x302;
    FUN_0006a610(&local_10);
    local_10 = 0x303;
    FUN_0006a610(&local_10);
    local_5 = 0;
    FUN_000a4d00();
    return local_5;
  }
  iVar1 = *(int *)(in_EAX + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
  }
  FUN_00090800(iVar1,0);
  iVar1 = *(int *)(in_EAX + 8);
  piVar2 = *(int **)(iVar1 + 0x10);
  if (piVar2 == (int *)0x0) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,1);
  }
  FUN_00090800(iVar1 + 0xc,1);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (*(int *)(in_EAX + 0x24) == 2) {
    if (*(int *)(in_EAX + 0x34) == 0) {
      local_c = 0x2b;
      FUN_000a4d00();
      return local_5;
    }
    if (*(int *)(in_EAX + 0x34) == 1) {
      local_c = 0x2a;
      FUN_000a4d00();
      return local_5;
    }
    goto LAB_00091e4a;
  }
  local_10 = 1;
  if (*(int *)(in_EAX + 0x24) == 0) {
    FUN_0006a610(&local_10);
    local_c = 0x29;
LAB_00091dea:
    local_10 = 1;
    FUN_0006a610(&local_10);
    local_10 = 0x303;
  }
  else {
    FUN_0006a610(&local_10);
    local_10 = 1;
    if (*(int *)(in_EAX + 0x34) == 0) {
      local_c = 0x28;
      goto LAB_00091dea;
    }
    local_c = 0x27;
    FUN_0006a610(&local_10);
    local_10 = 1;
  }
  FUN_0006a610(&local_10);
LAB_00091e4a:
  FUN_000a4d00();
  return local_5;
}
