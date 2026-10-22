/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 326D975522B5C3B00C94DCFD0FC760A573477BE753C7A0F926AF63A59AAC17F7
 * Entry: 0x0014f5c0, Ghidra index: 4396, label: FUN_0014f5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014f5c0(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_48;
  int local_44;
  undefined4 local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int local_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [4];
  int *piStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  iVar5 = 0;
  local_44 = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    local_48 = 0;
    local_40 = 0x7f7fffff;
    local_2c = param_2[2];
    iVar4 = (**(code **)(*param_2 + 0x40))();
    piStack_c = (int *)0x0;
    piStack_8 = (int *)0x0;
    uStack_4 = 0;
    FUN_001aa220();
    FUN_0004bf30((float *)(iVar4 + 0x24),param_3,0,&local_48,&local_40,param_4,auStack_10);
    FUN_00058d90();
    if (param_5 == 0) {
      local_44 = local_48;
      iVar4 = local_44;
    }
    else {
      fStack_3c = *(float *)(iVar4 + 0x24);
      fStack_34 = *(float *)(iVar4 + 0x2c) + 0.0;
      fStack_38 = *(float *)(iVar4 + 0x28) + -0.25;
      fStack_1c = fStack_3c;
      fStack_18 = fStack_38;
      fStack_14 = fStack_34;
      FUN_0004e150(piStack_c,piStack_8,(int)piStack_8 - (int)piStack_c >> 3);
      piVar2 = piStack_8;
      piVar6 = piStack_c;
      for (; (iVar4 = local_44, piVar6 != piVar2 && (iVar5 < param_5)); iVar5 = iVar5 + 1) {
        iVar4 = *piVar6;
        fStack_38 = *(float *)(iVar4 + 0x1c) - fStack_14;
        fStack_24 = *(float *)(iVar4 + 0x18) - fStack_18;
        fVar1 = *(float *)(iVar4 + 0x14) - fStack_3c;
        fStack_34 = fVar1 * fVar1 + fStack_24 * fStack_24 + fStack_38 * fStack_38;
        fStack_30 = SQRT(fStack_34);
        fStack_20 = fStack_38;
        cVar3 = FUN_0004ce30(&fStack_1c,(float *)(iVar4 + 0x14),fStack_30 + 0.1);
        if (cVar3 != '\0') break;
        piVar6 = piVar6 + 2;
      }
    }
    local_44 = iVar4;
    iVar4 = local_44;
    if (piStack_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_c);
    }
  }
  return iVar4;
}
