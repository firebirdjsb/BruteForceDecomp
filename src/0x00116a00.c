/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F79E90A01D379083C67441CC0C65AD75AD1BA154AE766E065543F3372401DC9
 * Entry: 0x00116a00, Ghidra index: 3586, label: FUN_00116a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00116a00(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float local_14;
  int local_10;
  float local_8;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + 4);
  iVar2 = *(int *)(*(int *)(in_ECX + 500) + 0x20);
  uVar5 = *(uint *)(iVar2 + 0x70);
  local_14 = 0.0;
  if ((((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x18), iVar3 != 0)) && (*(int *)(iVar3 + 4) != 0))
     && (uVar5 < (uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0xc))) {
    local_14 = *(float *)(*(int *)(iVar3 + 4) + 8 + uVar5 * 0xc);
  }
  if ((uVar5 != 0) || (local_14 != 0.0)) {
    uVar5 = 0;
    if ((iVar1 != 0) && ((iVar3 = *(int *)(iVar1 + 0x18), iVar3 != 0 && (*(int *)(iVar3 + 4) != 0)))
       ) {
      uVar5 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0xc;
    }
    uVar6 = 0;
    if (0 < (int)uVar5) {
      local_10 = 0;
      do {
        local_8 = 0.0;
        if ((((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x18), iVar3 != 0)) &&
            (*(int *)(iVar3 + 4) != 0)) &&
           (uVar6 < (uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0xc))) {
          local_8 = *(float *)(*(int *)(iVar3 + 4) + 8 + local_10);
        }
        if (local_8 <= param_1) {
          if (uVar6 != 0xffffffff) goto LAB_00116b24;
          break;
        }
        uVar6 = uVar6 + 1;
        local_10 = local_10 + 0xc;
      } while ((int)uVar6 < (int)uVar5);
    }
    local_8 = 0.0;
    uVar6 = uVar5;
LAB_00116b24:
    if (*(int *)(iVar2 + 0x70) < (int)uVar6) {
      fVar4 = ABS(local_8 - local_14) * 0.2;
      fVar7 = 0.05;
      if (fVar4 <= 0.05) {
        fVar7 = fVar4;
      }
      if ((fVar7 + param_1 < local_14) || (param_1 == 0.0)) {
        *(uint *)(*(int *)(*(int *)(in_ECX + 500) + 0x20) + 0x70) = uVar6;
        return;
      }
    }
    else if ((int)uVar6 < *(int *)(iVar2 + 0x70)) {
      *(uint *)(iVar2 + 0x70) = uVar6;
    }
  }
  return;
}
