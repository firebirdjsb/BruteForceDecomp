/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5464041E8ADDEBE6A6C143D5237E47E678589F75EF85EDF90AFE1EFA6873B145
 * Entry: 0x00231b10, Ghidra index: 7757, label: FUN_00231b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00231b10(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  undefined1 auStack_bc [36];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_80 [36];
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((*(int *)(param_1[2] + 0xc70) < 3) && (*(float *)(param_1[2] + 0xc58) <= 0.4)) &&
     (((param_1[0x6c] == 0 || (iVar2 = FUN_0014ab50(), iVar2 == 0)) ||
      ((piVar3 = (int *)FUN_0014d310(), param_1 != piVar3 &&
       (cVar1 = FUN_00126c60(2,1), cVar1 != '\0')))))) {
    if ((*(byte *)(param_1 + 0x89) & 0x10) != 0) {
      iVar2 = param_1[0x80];
      uVar4 = (**(code **)(*param_1 + 0x40))();
      iVar2 = FUN_002338c0(auStack_bc,uVar4,param_1 + iVar2 * 0xc + 0xbd);
      FUN_0003d6c0(auStack_80,iVar2,iVar2 + 0x24);
      if ((*(int *)(param_1[0x8a] + 0x160) != DAT_0046d064) && (*(int *)(param_1[2] + 0xa58) != 0))
      {
        FUN_0003d6c0(auStack_bc,auStack_80,auStack_5c);
        pfVar5 = (float *)FUN_0001fdd0();
        fStack_ec = *pfVar5 * 0.05;
        fStack_d8 = (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20) * 0.05;
        fStack_98 = fStack_98 - fStack_ec;
        fStack_94 = fStack_94 - (float)*(undefined8 *)(pfVar5 + 1) * 0.05;
        fStack_90 = fStack_90 - fStack_d8;
        FUN_0001fa20(auStack_bc,0x3fc90fdb);
        fVar6 = (float10)FUN_00233b90();
        FUN_00073d80(auStack_bc,
                     (float)((fVar6 * (float10)30.0 - (float10)15.0) * (float10)0.017453292));
        pfVar5 = (float *)FUN_0001fdd0();
        uStack_e8._4_4_ = -pfVar5[2];
        uStack_e8._0_4_ = -pfVar5[1];
        fStack_ec = -*pfVar5;
        fVar6 = (float10)FUN_00233b90();
        fStack_f0 = (float)(fVar6 * (float10)1.0 + (float10)2.0);
        fStack_f8 = fStack_f0 * fStack_ec;
        fStack_f4 = fStack_f0 * (float)uStack_e8;
        fStack_f0 = fStack_f0 * uStack_e8._4_4_;
        fStack_d4 = fStack_f8;
        fStack_d0 = fStack_f4;
        fStack_cc = fStack_f0;
        pfVar5 = (float *)FUN_0001fc40();
        fVar6 = (float10)FUN_00233b90();
        fVar8 = (float)(fVar6 * (float10)0.5);
        fStack_ec = fVar8 * *pfVar5;
        fVar7 = fVar8 * (float)*(undefined8 *)(pfVar5 + 1);
        fVar8 = fVar8 * (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        uStack_e8 = CONCAT44(fVar8,fVar7);
        _fStack_d0 = CONCAT44(fVar8,fVar7);
        fStack_d4 = fStack_ec;
        pfVar5 = (float *)FUN_0001fd10();
        fVar6 = (float10)FUN_00233b90();
        fStack_d8 = (float)(fVar6 * (float10)0.5);
        fStack_c8 = fStack_d8 * *pfVar5;
        fStack_dc = fStack_d8 * (float)*(undefined8 *)(pfVar5 + 1);
        fStack_d8 = fStack_d8 * (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
        uStack_c4 = CONCAT44(fStack_d8,fStack_dc);
        fStack_d8 = fStack_cc + fStack_d8;
        fStack_dc = fStack_d0 + fStack_dc;
        fStack_f8 = fStack_f8 + fStack_d4 + fStack_c8;
        fStack_f4 = fStack_dc + fStack_f4;
        fStack_f0 = fStack_d8 + fStack_f0;
        if (*(float *)(param_1[2] + 0xc58) <= 0.2) {
          uStack_40 = 5;
          uStack_3c = 5;
          uStack_38 = 7;
          uStack_34 = 7;
          uStack_30 = 7;
          uStack_2c = 0xb;
          uStack_28 = 0xb;
          uStack_24 = 0xb;
          uStack_20 = 0xd;
          uStack_1c = 0xd;
          uStack_18 = 0xd;
          uStack_14 = 0x11;
          uStack_10 = 0x11;
          uStack_c = 0x11;
          uStack_50 = 1;
          uStack_4c = 1;
          uStack_48 = 2;
          uStack_44 = 3;
          uStack_8 = 0x13;
          uStack_4 = 0x13;
        }
        FUN_002291d0(auStack_bc,&fStack_f8);
      }
    }
    FUN_0022f580();
  }
  return;
}
