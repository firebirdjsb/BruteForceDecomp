/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 218204A600080FB7006DA28E1B78AD9DD506687B39FC9BC026D9254B69DDC54C
 * Entry: 0x0017eb90, Ghidra index: 5112, label: FUN_0017eb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017eb90(undefined4 param_1,int *param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  float fVar3;
  undefined4 local_4c [7];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 != (int *)0x0) {
    puVar2 = local_4c;
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_30 = 0x168;
    local_2c = 0x168;
    local_10 = 0;
    local_1c = 0;
    local_24 = 0;
    local_20 = 0;
    local_4c[0] = 0x4c;
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    local_4 = 0x3f800000;
    local_28 = 0x3f800000;
    FUN_0017f460(param_1);
    FUN_0017f4d0(param_1);
    if (0.0 < *(float *)(unaff_EBX + 0x30)) {
      local_18 = *(float *)(unaff_EBX + 0x30);
    }
    if (*(char *)(unaff_EBX + 0x3c) == '\0') {
      fVar3 = *(float *)(unaff_EBX + 0x30) * 8.0;
    }
    else {
      fVar3 = *(float *)(unaff_EBX + 0x38);
    }
    FUN_0017f540(param_1,fVar3);
    (**(code **)(*param_2 + 0x30))(local_4c);
  }
  return;
}
