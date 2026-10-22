/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCBC1BFE2674B6EFF52E11A898C84B30BD378BAE5D00DF3EF7AA12A3A5AE7E20
 * Entry: 0x0014fbb0, Ghidra index: 4400, label: FUN_0014fbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0014fbb0(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 local_31;
  float local_18 [3];
  int local_c [3];
  
  fVar7 = 0.0;
  local_31 = 0;
  bVar4 = false;
  iVar5 = 0x228;
  do {
    if (*(int *)(iVar5 + param_2) != 0) {
      fVar2 = *(float *)(*(int *)(iVar5 + param_2) + 0x38);
      if (fVar7 <= fVar2) {
        fVar7 = fVar2;
      }
      bVar4 = true;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x234);
  if (bVar4) {
    local_18[0] = *(float *)(param_2 + 0x7b0);
    local_18[1] = *(float *)(param_2 + 0x7b4);
    local_18[2] = *(float *)(param_2 + 0x7b8);
    FUN_0014fac0();
    iVar6 = 0;
    iVar5 = -(int)local_18 + 0x228;
    do {
      pfVar1 = local_18 + iVar6;
      iVar3 = *(int *)((int)pfVar1 + param_2 + iVar5);
      if (iVar3 == 0) {
        if ((local_c[iVar6] != 0) && (*pfVar1 != 0.0)) {
          local_31 = FUN_0014ff60();
        }
      }
      else if (*pfVar1 == 0.0) {
        FUN_0023d3e0();
        *(undefined4 *)((int)pfVar1 + param_2 + iVar5) = 0;
        *(undefined4 *)((int)pfVar1 + param_2 + -(int)local_18 + 0x234) = 0;
        local_31 = 1;
      }
      else {
        local_31 = 1;
        *(float *)(iVar3 + 0x2c) = *pfVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    return local_31;
  }
  return 0;
}
