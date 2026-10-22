/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62091D8F2A0ED8B45E6AECD165482E47BB91FA9FB741393A441EF0D4D360F019
 * Entry: 0x0015a7e0, Ghidra index: 4517, label: FUN_0015a7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c858;
extern uint32_t DAT_0040c85c;
extern uint32_t DAT_0040c864;
extern uint32_t DAT_0040c868;
extern uint32_t DAT_0046cfd8;
extern uint32_t _DAT_0040c860;
extern uint32_t _DAT_0040c86c;
extern uint32_t _DAT_0040c870;
extern uint32_t _DAT_004a5b70;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0015a7e0(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *in_ECX;
  int unaff_EBX;
  float fVar10;
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float *pfStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_48 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_4;
  
  if ((param_1 != (int *)0x0) && (param_1 != (int *)0xffffffff)) {
    piVar2 = (int *)param_1[0x16];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
    }
    if (param_1[4] != 0) {
      FUN_00234f90(param_1[4],param_1 + 5);
    }
    param_1[0x11] = param_1[0x11] & 0xfffffeff;
    if (param_1[0x13] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1[0x14] - param_1[0x13] >> 2;
    }
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      FUN_0015a7e0(*(undefined4 *)(param_1[0x13] + iVar7 * 4));
    }
    fStack_6c = *(float *)(*param_1 + 0x20);
    fStack_78 = 0.0;
    iVar7 = *param_1;
    iVar3 = *(int *)(iVar7 + 0x24);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) &&
       (cVar6 = (**(code **)(*in_ECX + 0xac))(auStack_48,&fStack_78), cVar6 != '\0')) {
      pfVar4 = *(float **)(*(int *)(*(int *)(iVar7 + 0x24) + 4) + 8);
      fStack_54 = pfVar4[2];
      fStack_5c = *pfVar4;
      fStack_78 = pfVar4[1];
      fStack_58 = fStack_78;
      FUN_000621c0();
      fStack_54 = fStack_18;
      fStack_60 = fStack_18 - *(float *)(unaff_EBX + 0xf0);
      fStack_58 = fStack_1c;
      fStack_5c = fStack_20;
      fStack_64 = fStack_1c - *(float *)(unaff_EBX + 0xec);
      fStack_68 = fStack_20 - *(float *)(unaff_EBX + 0xe8);
      if (fStack_64 < 0.0) {
        fStack_64 = 0.0;
      }
      fVar5 = fStack_64 * fStack_64 + fStack_68 * fStack_68 + fStack_60 * fStack_60;
      auVar11 = rsqrtss(in_XMM0,fVar5);
      fVar10 = auVar11._0_4_;
      fStack_78 = 0.0;
      fVar5 = fVar10 * fVar5;
      if (fStack_74 < fVar5) {
        fStack_78 = fVar5 - fStack_74;
      }
      pfStack_70 = &fStack_68;
      fStack_6c = fVar10 * fStack_78;
      fStack_14 = fStack_6c * fStack_68;
      fStack_10 = fStack_6c * fStack_64;
      fStack_c = fStack_6c * fStack_60;
      if (fStack_78 < _DAT_0040c870) {
        if (((*(int *)(iStack_4 + 0x10) == 0) ||
            (iVar7 = *(int *)(*(int *)(iStack_4 + 0x10) + 100), iVar7 == 0)) || (iVar7 == -1)) {
          if (iStack_4 == *(int *)(*(int *)(iStack_4 + 0x5c) + 0x6c)) {
            pbVar1 = (byte *)(*(int *)(iStack_4 + 0x5c) + 0x71);
            *pbVar1 = *pbVar1 & 0xfd;
          }
        }
        else {
          FUN_00235e40();
        }
        fStack_74 = _DAT_0040c86c * fStack_74;
        uVar8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        uVar9 = uVar8 * 0x19660d + 0x3c6ef35f;
        DAT_0046cfd8 = uVar9 * 0x19660d + 0x3c6ef35f;
        fStack_30 = ((float)(uVar8 >> 9 | 0x40000000) - 3.0) * fStack_74 + fStack_54;
        fStack_34 = ((float)(uVar9 >> 9 | 0x40000000) - 3.0) * fStack_74 + fStack_58;
        fStack_38 = ((float)(DAT_0046cfd8 >> 9 | 0x40000000) - 3.0) * fStack_74 + fStack_20;
        fStack_74 = fVar10 * fVar10 * fStack_80 * fStack_80 *
                    (_DAT_004a5b70 * *(float *)(unaff_EBX + 0x100) + _DAT_0040c860);
        fStack_78 = fStack_74;
        if (fStack_74 <= DAT_0040c864) {
          fStack_78 = DAT_0040c864;
        }
        if (DAT_0040c868 <= fStack_78) {
          fStack_78 = DAT_0040c868;
        }
        fStack_44 = fVar10 * fStack_68;
        fStack_40 = fVar10 * fStack_64;
        fStack_3c = fVar10 * fStack_60;
        fStack_2c = fStack_78 * fStack_44;
        fStack_6c = fStack_78 * fStack_40;
        pfStack_70 = (float *)(fStack_78 * fStack_3c);
        fStack_28 = fStack_6c;
        fStack_24 = (float)pfStack_70;
        fStack_20 = fStack_44;
        fStack_1c = fStack_40;
        fStack_18 = fStack_3c;
        fStack_14 = fStack_2c;
        fStack_10 = fStack_6c;
        fStack_c = (float)pfStack_70;
        FUN_000d1d10(0,iStack_4,unaff_EBX,DAT_0040c858,DAT_0040c85c,&fStack_2c,&fStack_38,
                     *(undefined4 *)(unaff_EBX + 8));
        FUN_0015a6d0(unaff_EBX,&fStack_5c);
      }
    }
  }
  return;
}
