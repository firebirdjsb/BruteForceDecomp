/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0748A7D8BC67C47AE0981033B38C5D189F74E867A523A88EB3149D3309C6A24
 * Entry: 0x0022bac0, Ghidra index: 7690, label: FUN_0022bac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t DAT_0046d064;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0022bac0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 uStack_40;
  
  pbVar2 = (byte *)FUN_002250b0(*(undefined4 *)(*(int *)(param_3 + 8) + 0x1fc));
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x1b0) == 0) {
    fVar6 = (float10)FUN_0022c940();
    *(float *)(pbVar2 + 0x20) = (float)fVar6;
    iVar3 = param_3;
    if (*(int *)(pbVar2 + 0x48) != param_3) goto LAB_0022bb96;
  }
  else {
    fVar6 = (float10)FUN_0022c940();
    *(float *)(pbVar2 + 0x20) = (float)fVar6;
    iVar3 = *(int *)(*(int *)(param_3 + 0x1b0) + 8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(param_3 + 0x1b0) + 0x10);
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0xb0), *(int *)(*(int *)(iVar3 + 0xc) + 4) != 3)
         ) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1d4);
    }
    if (*(int *)(pbVar2 + 0x48) != iVar3) {
LAB_0022bb96:
      FUN_0008f6a0(iVar3);
    }
  }
  iVar3 = *(int *)(param_3 + 0x1b0);
  if (iVar3 == 0) {
    if (*(int *)(param_3 + 0x184) == 0) goto LAB_0022bc16;
    iVar3 = *(int *)(*(int *)(param_3 + 0x184) + 0x1c);
  }
  else if (*(int *)(iVar3 + 8) == 0) {
    if ((*(int *)(iVar3 + 0x10) == 0) ||
       (iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0xb0), *(int *)(*(int *)(iVar3 + 0xc) + 4) != 3))
    {
      iVar3 = 0;
    }
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 8) + 0xbec) + 0xc))(iVar3);
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0x1d4);
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 8) + 0xbec) + 0xc))(iVar3);
  }
  if (*(int *)(pbVar2 + 0x6c) != iVar3) {
    FUN_0008f6a0(iVar3);
  }
LAB_0022bc16:
  fVar6 = (float10)FUN_002324c0();
  fVar6 = fVar6 / (float10)*(float *)(param_1 + 0x210);
  *pbVar2 = *pbVar2 & 0xfe;
  *(float *)(pbVar2 + 0x28) = (float)fVar6;
  *(float *)(pbVar2 + 0x30) = (float)fVar6;
  *(int *)(pbVar2 + 0x54) = param_1;
  FUN_00232200(param_2);
  *(undefined4 *)(pbVar2 + 4) = uStack_f0;
  *(undefined4 *)(pbVar2 + 8) = uStack_ec;
  *(undefined4 *)(pbVar2 + 0xc) = uStack_e8;
  *(undefined4 *)(pbVar2 + 0x70) = uStack_f0;
  *(undefined4 *)(pbVar2 + 0x74) = uStack_ec;
  *(undefined4 *)(pbVar2 + 0x78) = uStack_e8;
  *(float *)(pbVar2 + 0x10) = fStack_d8;
  *(float *)(pbVar2 + 0x14) = fStack_d4;
  *(float *)(pbVar2 + 0x18) = fStack_d0;
  *(undefined4 *)(pbVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x284) != DAT_0046d064) {
    uStack_9c = uStack_f0;
    uStack_98 = uStack_ec;
    uStack_94 = uStack_e8;
    FUN_0022f840();
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    uStack_b8 = uStack_88;
    uStack_b4 = uStack_84;
    uStack_a0 = uStack_70;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a8 = uStack_78;
    uStack_a4 = uStack_74;
    iVar3 = FUN_000def50(0x3f800000);
    if (*(int *)(pbVar2 + 0x50) != iVar3) {
      FUN_0008f6a0(iVar3);
    }
  }
  piVar4 = (int *)FUN_00076310();
  if (*piVar4 != DAT_0046d064) {
    iVar3 = FUN_0017c170(DAT_00469984);
    *(int *)(pbVar2 + 100) = iVar3;
    if (iVar3 != 0) {
      FUN_0003f010();
      uStack_68 = *(undefined4 *)(pbVar2 + 8);
      uStack_64 = *(undefined4 *)(pbVar2 + 0xc);
      uStack_6c = *(undefined4 *)(pbVar2 + 4);
      fStack_c4 = *(float *)(pbVar2 + 0x1c);
      uStack_60 = 1;
      fStack_e4 = fStack_c4 * *(float *)(pbVar2 + 0x10);
      fStack_48 = fStack_c4 * (float)*(undefined8 *)(pbVar2 + 0x14);
      fStack_c4 = fStack_c4 * (float)((ulonglong)*(undefined8 *)(pbVar2 + 0x14) >> 0x20);
      uStack_e0 = CONCAT44(fStack_c4,fStack_48);
      uStack_40 = 1;
      fStack_4c = fStack_e4;
      fStack_44 = fStack_c4;
      cVar1 = FUN_0017c110(&uStack_6c,1);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(pbVar2 + 100),1);
        pbVar2[100] = 0;
        pbVar2[0x65] = 0;
        pbVar2[0x66] = 0;
        pbVar2[0x67] = 0;
      }
    }
  }
  pbVar2[1] = *(byte *)(param_1 + 0x23c);
  pbVar2[2] = *(byte *)(param_1 + 0x240);
  *pbVar2 = *pbVar2 ^ (*(char *)(param_1 + 0x244) << 5 ^ *pbVar2) & 0x20;
  pbVar2[0x40] = 0xff;
  pbVar2[0x41] = 0xff;
  pbVar2[0x42] = 0xff;
  pbVar2[0x43] = 0xff;
  if (*(int *)(param_1 + 0x218) == 3) {
    fStack_c4 = *(float *)(param_1 + 0x210);
    fStack_e4 = fStack_c4 * fStack_d8;
    fStack_c8 = fStack_c4 * fStack_d4;
    fStack_c4 = fStack_c4 * fStack_d0;
    uStack_e0 = CONCAT44(fStack_c4,fStack_c8);
    fStack_cc = fStack_e4;
    uVar5 = (**(code **)(*(int *)(param_1 + 0x1d4) + 0xc))(pbVar2,&uStack_f0,&fStack_cc);
    *(undefined4 *)(pbVar2 + 0x34) = uVar5;
    return 1;
  }
  pbVar2[0x34] = 0;
  pbVar2[0x35] = 0;
  pbVar2[0x36] = 0;
  pbVar2[0x37] = 0;
  return 1;
}
