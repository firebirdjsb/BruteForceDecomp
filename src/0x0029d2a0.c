/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1BE87BFBEEA660943DF752151B7C1AC299417D35179E4659A87AF4149EE1936
 * Entry: 0x0029d2a0, Ghidra index: 9456, label: FUN_0029d2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0029d2a0(undefined4 param_1,float param_2,float param_3,int param_4,undefined4 *param_5,
                undefined4 param_6,float param_7)

{
  float *pfVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  int local_18;
  undefined4 local_c;
  double dStack_8;
  
  local_18 = 0;
  fVar6 = *(float *)(*(int *)(in_ECX + 0xc) + -8 + *(int *)(in_ECX + 0x10) * 8);
  local_c = 0;
  pfVar3 = (float *)FUN_0029d210(param_2);
  if (pfVar3 == (float *)0x0) {
    return 0;
  }
  bVar2 = *pfVar3 == param_2;
  if (param_7._0_1_ == '\0') {
    if (bVar2) {
      do {
        if ((float *)(*(int *)(in_ECX + 0xc) + -8 + *(int *)(in_ECX + 0x10) * 8) <= pfVar3) break;
        iVar4 = (uint)(param_2 <= param_3) * 2 + -1;
        pfVar1 = pfVar3 + iVar4 * 2;
        pfVar3 = pfVar3 + iVar4 * 2;
      } while (*pfVar1 == param_2);
    }
  }
  else {
    for (; (bVar2 && (pfVar3 < (float *)(*(int *)(in_ECX + 0xc) + -8 + *(int *)(in_ECX + 0x10) * 8))
           ); pfVar3 = pfVar3 + iVar4 * 2) {
      param_7 = pfVar3[1];
      (**(code **)*param_5)(param_5,param_1,1,&param_7,&local_c);
      local_18 = local_18 + 1;
      iVar4 = (uint)(param_2 <= param_3) * 2 + -1;
      bVar2 = pfVar3[iVar4 * 2] == param_2;
    }
  }
  if ((param_2 != param_3) && (*pfVar3 < param_3 != (*pfVar3 == param_3))) {
    do {
      if ((float *)(*(int *)(in_ECX + 0xc) + -8 + *(int *)(in_ECX + 0x10) * 8) <= pfVar3) break;
      param_7 = pfVar3[1];
      (**(code **)*param_5)(param_5,param_1,1,&param_7,&local_c);
      local_18 = local_18 + 1;
      iVar4 = (uint)(param_2 <= param_3) * 2 + -1;
      pfVar1 = pfVar3 + iVar4 * 2;
      pfVar3 = pfVar3 + iVar4 * 2;
    } while (*pfVar1 < param_3 != (*pfVar1 == param_3));
  }
  if ((param_2 < 0.0) || (fVar6 < param_3)) {
    if (param_4 == -0x10dacd22) {
      if (fVar6 <= 0.0) {
        fVar5 = (float10)0.0;
      }
      else {
        fVar5 = (float10)FUN_00306c66();
      }
      uVar7 = 0xef2532de;
      fVar6 = 0.0;
    }
    else {
      if (param_4 != 0xea20ad9) {
        return local_18;
      }
      if (fVar6 <= 0.0) {
        fVar5 = (float10)0.0;
      }
      else {
        dStack_8 = (double)fVar6;
        fVar5 = (float10)FUN_00306c66();
        fVar5 = (float10)dStack_8 - fVar5;
      }
      uVar7 = 0xea20ad9;
    }
    iVar4 = FUN_0029d2a0(param_1,fVar6,(float)fVar5,uVar7,param_5,param_6,1);
    local_18 = local_18 + iVar4;
  }
  return local_18;
}
