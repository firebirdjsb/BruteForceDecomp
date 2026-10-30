/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9BF95B58C65661B73B51148C03CD54F652F6AD4750222F89571E15EBE727508
 * Entry: 0x00043210, Ghidra index: 522, label: FUN_00043210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00043210(void)

{
  char cVar1;
  int *in_EAX;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int extraout_ECX;
  char cStack_92;
  char cStack_91;
  float fStack_90;
  float fStack_8c;
  int *piStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  char cStack_78;
  undefined4 uStack_74;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  if (*(int *)(in_EAX[3] + 4) != 0x18) {
    return 0;
  }
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x24))();
  piVar3 = (int *)(**(code **)*puVar2)();
  piStack_88 = (int *)0x0;
  cStack_92 = '\0';
  cStack_91 = '\0';
  pfVar4 = (float *)(**(code **)(*in_EAX + 0x54))();
  if (6400.0 < pfVar4[2] * pfVar4[2] + pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4) {
    return 1;
  }
  cVar1 = FUN_00043190(&piStack_88,&fStack_8c,&cStack_92,&cStack_91);
  if (cVar1 == '\0') {
    return 1;
  }
  if (cStack_92 != '\0') {
    if ((cStack_91 != '\0') && (piStack_88 != (int *)0x0)) {
      iVar6 = piVar3[0x6d];
      uVar5 = (**(code **)(piStack_88[0x6d] + 0x9c))();
      cVar1 = (**(code **)(iVar6 + 0xc0))(uVar5);
      if (cVar1 == '\0') {
        return 1;
      }
    }
    iVar6 = (**(code **)(*in_EAX + 0x40))();
    iVar7 = (**(code **)(*piVar3 + 0x40))();
    fStack_8c = *(float *)(iVar7 + 0x2c) - *(float *)(iVar6 + 0x2c);
    fStack_90 = *(float *)(iVar7 + 0x28) - *(float *)(iVar6 + 0x28);
    fStack_84 = *(float *)(iVar7 + 0x24) - *(float *)(iVar6 + 0x24);
    fStack_80 = fStack_90;
    fStack_7c = fStack_8c;
    FUN_00042c60();
    FUN_00043000(in_ECX,in_EAX,4);
    if (cStack_78 != '\0') {
      FUN_00039880(4);
    }
    fStack_90 = 10.0;
    if ((piStack_88 != (int *)0x0) &&
       ((piStack_88 == piVar3 || (cVar1 = FUN_0004b990(), cVar1 != '\0')))) {
      fStack_90 = 7.0;
    }
    FUN_000388b0(in_ECX[0xd6]);
    cVar1 = FUN_0004be70(fStack_90);
    if (((cVar1 != '\0') && (extraout_ECX != 0)) && ((*(uint *)(extraout_ECX + 0x80) >> 3 & 1) != 0)
       ) {
      FUN_000121c0();
      uStack_74 = 8;
      FUN_00012250();
      fStack_8c = (float)in_ECX[0x104];
      pfVar4 = (float *)FUN_000161b0();
      if (*pfVar4 == fStack_8c) {
        FUN_00012320(8);
        FUN_00012000(uStack_38,auStack_40);
        FUN_00012440();
      }
      FUN_000121f0();
    }
    return 1;
  }
  return 1;
}
