/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC34B187D593661BA32119ABFF72D3FC66CD80FD72EC68FAF01546456ACE299A
 * Entry: 0x0003fff0, Ghidra index: 480, label: FUN_0003fff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern uint32_t FUN_000120f0(int32_t in_EAX);

char FUN_0003fff0(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float *local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  float fStack_40;
  undefined8 uStack_3c;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 uStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar4 = (int *)FUN_000120f0();
  local_68 = &local_34;
  iVar6 = 0;
  do {
    pfVar5 = (float *)(**(code **)(piVar4[0x6d] + 0x28))();
    fStack_6c = pfVar5[6];
    fStack_70 = pfVar5[3];
    local_34 = *pfVar5;
    fStack_64 = *param_2;
    fStack_58 = fStack_64 * *local_68;
    fStack_60 = fStack_64 * (float)*(undefined8 *)(local_68 + 1);
    fStack_5c = fStack_64 * (float)((ulonglong)*(undefined8 *)(local_68 + 1) >> 0x20);
    uStack_3c = CONCAT44(fStack_5c,fStack_60);
    uStack_74 = param_3;
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    fStack_54 = fStack_60;
    fStack_50 = fStack_5c;
    fStack_40 = fStack_58;
    fStack_30 = fStack_70;
    fStack_2c = fStack_6c;
    cVar3 = FUN_00018c40(param_1,&uStack_10,&fStack_58,&uStack_74,0x41c80000,0,0);
    if (cVar3 == '\0') {
      pfVar5 = (float *)(**(code **)(piVar4[0x6d] + 0x28))();
      fStack_40 = *pfVar5;
      uStack_3c = CONCAT44(pfVar5[6],pfVar5[3]);
      fStack_2c = *(float *)(param_1 + 0x364);
      fStack_4c = fStack_2c * fStack_40;
      fStack_30 = fStack_2c * pfVar5[3];
      fStack_2c = fStack_2c * pfVar5[6];
      uStack_48 = CONCAT44(fStack_2c,fStack_30);
      fStack_60 = *param_2;
      fStack_28 = fStack_60 * fStack_4c;
      fStack_5c = fStack_60 * fStack_30;
      fStack_60 = fStack_60 * fStack_2c;
      uStack_24 = CONCAT44(fStack_60,fStack_5c);
      local_34 = fStack_4c;
      fStack_1c = fStack_28;
      fStack_18 = fStack_5c;
      fStack_14 = fStack_60;
      iVar6 = (**(code **)(*piVar4 + 0x40))();
      fVar1 = *(float *)(iVar6 + 0x2c);
      fVar2 = *(float *)(iVar6 + 0x28);
      *(float *)(param_1 + 0x7c0) = fStack_1c + *(float *)(iVar6 + 0x24);
      *(float *)(param_1 + 0x7c4) = fStack_18 + fVar2;
      *(float *)(param_1 + 0x7c8) = fStack_14 + fVar1;
      return '\0';
    }
    iVar6 = iVar6 + 1;
    *param_2 = *param_2 * -1.0;
  } while (iVar6 < 2);
  return cVar3;
}
