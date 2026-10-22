/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5018362994BEA4B55E39EE22146951BE9CDAEC9C41F8DEC4C8E41BDAE5D9FE8A
 * Entry: 0x0014fd50, Ghidra index: 4401, label: FUN_0014fd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0014fd50(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char local_35;
  float local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [6];
  
  local_35 = '\0';
  if ((*(byte *)((int)param_1 + 0x3d) & 4) == 0) {
    fVar1 = 0.0;
    iVar3 = 0x228;
    do {
      if ((*(int *)(iVar3 + param_2) != 0) &&
         (fVar2 = *(float *)(*(int *)(iVar3 + param_2) + 0x38), fVar1 <= fVar2)) {
        fVar1 = fVar2;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x234);
    local_18[0] = *(int *)(param_2 + 0x7b0);
    local_18[1] = *(undefined4 *)(param_2 + 0x7b4);
    local_18[2] = *(undefined4 *)(param_2 + 0x7b8);
    if ((*(int *)(param_2 + 0x1f8) == 6) || (*(int *)(param_2 + 0x1f8) == 7)) {
      local_24 = 1;
      local_20 = 4;
      local_1c = 5;
    }
    else {
      local_24 = 0;
      local_20 = 2;
      local_1c = 3;
    }
    FUN_0014fac0(param_1,param_2,local_18 + 3,&local_24,local_18);
    iVar3 = 0;
    do {
      if (local_18[iVar3 + 3] == 0) {
        if (*(int *)(param_2 + 0x228 + iVar3 * 4) != 0) {
          FUN_0023d3e0();
          *(undefined4 *)(param_2 + 0x228 + iVar3 * 4) = 0;
        }
        *(undefined4 *)(param_2 + 0x234 + iVar3 * 4) = 0;
      }
      else {
        local_35 = FUN_0014ff60(fVar1,local_18[iVar3],iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    if (local_35 != '\0') {
      *(undefined4 **)(param_2 + 0x214) = param_1;
      *(undefined4 *)(param_2 + 0x210) = *param_1;
    }
    return local_35;
  }
  local_34 = 0.0;
  if (*(int *)(param_2 + 0x248) != 0) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x248) + 0x38);
    local_34 = 0.0;
    if (0.0 <= fVar1) {
      local_34 = fVar1;
    }
  }
  if (param_1[*(int *)(param_2 + 0x5b0) * 6 + -4] == 0) {
    *(undefined4 *)(param_2 + 0x248) = 0;
    return '\0';
  }
  FUN_0014ff60(local_34,0x3f800000,0xffffffff);
  return '\0';
}
