/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 555DF8AFFE46E28B28CB51437FA7A06E6F0F421527470CA84A9FB8A31D3D5E2E
 * Entry: 0x002dd8d0, Ghidra index: 10324, label: FUN_002dd8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002dd8d0(undefined4 *param_1,float param_2,float param_3,int param_4,int param_5,float *param_6,
            undefined4 *param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_6 == (float *)0x0) {
    fVar5 = (float10)(**(code **)*param_1)
                               (*(undefined4 *)(param_4 + 0x14),*(undefined4 *)(param_5 + 0x14));
    local_20 = (float)fVar5;
  }
  else {
    local_20 = *param_6;
  }
  if (local_20 <= param_2) {
    fStack_14 = 1.0 / (float)param_1[1];
    iVar4 = 0;
    fVar5 = (float10)local_20;
    fVar2 = (float)(double)CONCAT44(param_11,param_10);
    dVar1 = (double)CONCAT44(param_9,param_8) - (double)fVar2;
    uStack_8 = param_8;
    uStack_4 = param_9;
    while( true ) {
      if (0.0 <= dVar1) {
        return 0;
      }
      fVar5 = (fVar5 - (float10)param_3) * (float10)fStack_14;
      fStack_18 = (float)(double)CONCAT44(uStack_4,uStack_8);
      if (((float10)(double)CONCAT44(uStack_4,uStack_8) - (float10)fVar2) + fVar5 <= (float10)0.0) {
        if (fVar5 < (float10)0.0) {
          fVar5 = (float10)0.0;
        }
      }
      else {
        fVar5 = ((float10)fVar2 - (float10)fStack_18) + (float10)0.003;
      }
      iStack_1c = (int)(fVar5 * (float10)200.0);
      if (iStack_1c < 1) {
        iStack_1c = 1;
      }
      iVar4 = iVar4 + iStack_1c;
      dVar1 = (double)((float)iStack_1c * 0.005 + fStack_18);
      uStack_10._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar3 = uStack_10._4_4_;
      uStack_10 = dVar1;
      if (*(int *)(param_4 + 0x14 + iVar4 * 4) == 0) {
        *(int *)(param_4 + 0x14 + iVar4 * 4) = iVar4 * 0x40 + 0x68 + param_4;
        FUN_002b3500(dVar1);
      }
      fStack_18 = *(float *)(param_4 + 0x14 + iVar4 * 4);
      if (*(int *)(param_5 + 0x14 + iVar4 * 4) == 0) {
        *(int *)(param_5 + 0x14 + iVar4 * 4) = iVar4 * 0x40 + 0x68 + param_5;
        FUN_002b3500((undefined4)uStack_10,uVar3);
      }
      fVar5 = (float10)(**(code **)*param_1)(fStack_18,*(undefined4 *)(param_5 + 0x14 + iVar4 * 4));
      if ((float10)param_2 < fVar5) break;
      if (fVar5 < (float10)local_20 != (fVar5 == (float10)local_20)) {
        *param_7 = uStack_8;
        param_7[1] = uStack_4;
        return 1;
      }
      fVar2 = (float)(double)CONCAT44(param_11,param_10);
      dVar1 = uStack_10 - (double)fVar2;
      uStack_8 = (undefined4)uStack_10;
      uStack_4 = uVar3;
    }
    if (0.0 < uStack_10 - (double)CONCAT44(param_11,param_10)) {
      return 0;
    }
    fStack_14 = (float)fVar5;
    uVar3 = FUN_002dd650(param_1,param_2,iVar4,param_4,param_5,&fStack_14,param_7,
                         (undefined4)uStack_10,uVar3,param_10,param_11);
    return uVar3;
  }
  uVar3 = FUN_002dd650(param_1,param_2,0,param_4,param_5,&local_20,param_7,param_8,param_9,param_10,
                       param_11);
  return uVar3;
}
