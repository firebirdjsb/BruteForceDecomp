/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B3723CDA6244A883F37FAE547035821CEA15DA4668139758C5AB21ABA1E3A99
 * Entry: 0x001195c0, Ghidra index: 3606, label: FUN_001195c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0046d314;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001195c0(float param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  int *unaff_retaddr;
  undefined4 uVar13;
  float local_a4;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [4];
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_4;
  
  if ((*(byte *)((int)param_1 + 0x70) & 1) != 0) {
    return;
  }
  local_8c = SQRT(*(float *)((int)param_1 + 0x5f0) * *(float *)((int)param_1 + 0x5f0) +
                  *(float *)((int)param_1 + 0x5ec) * *(float *)((int)param_1 + 0x5ec) +
                  *(float *)((int)param_1 + 0x5e8) * *(float *)((int)param_1 + 0x5e8));
  if ((*(int *)((int)param_1 + 0x7a8) != 0) && (0.55 <= local_8c)) {
    local_8c = 0.55;
  }
  fVar10 = (float10)(**(code **)(**(int **)((int)param_1 + 0x5a4) + 0x38))(local_8c);
  if ((float)fVar10 <= fStack_90) {
    fStack_90 = (float)fVar10;
  }
  if (unaff_retaddr[0x7f] == 0) {
    (**(code **)(*unaff_retaddr + 0x15c))(0,0);
    return;
  }
  iStack_5c = unaff_retaddr[0x16f];
  iStack_58 = unaff_retaddr[0x170];
  iStack_54 = unaff_retaddr[0x171];
  iStack_50 = unaff_retaddr[0x172];
  iStack_3c = unaff_retaddr[0x177];
  iStack_4c = unaff_retaddr[0x173];
  iStack_48 = unaff_retaddr[0x174];
  iStack_44 = unaff_retaddr[0x175];
  iStack_40 = unaff_retaddr[0x176];
  fStack_84 = (float)unaff_retaddr[0x17c];
  if ((char)unaff_retaddr[0x17] != '\0') {
    unaff_retaddr[0x15d] = (int)((float)unaff_retaddr[0x15d] - param_1);
  }
  if (fStack_90 < 0.65) {
    if ((-60.0 < (float)unaff_retaddr[0x15d]) &&
       ((unaff_retaddr[0x15d] = (int)((float)unaff_retaddr[0x15d] - param_1), fStack_90 < 0.1 ||
        (unaff_retaddr[0x7e] == 6)))) {
      fVar1 = (float)unaff_retaddr[0x15d] - param_1 * 1.5;
      goto LAB_001197df;
    }
  }
  else {
    unaff_retaddr[0x15d] = (int)(param_1 * 1.5 + (float)unaff_retaddr[0x15d]);
    if (unaff_retaddr[0x7e] == 8) {
      fVar1 = param_1 * 1.5 + (float)unaff_retaddr[0x15d];
LAB_001197df:
      unaff_retaddr[0x15d] = (int)fVar1;
    }
  }
  fVar1 = 0.0;
  if (0.0 <= (float)unaff_retaddr[0x15e] - param_1) {
    fVar1 = (float)unaff_retaddr[0x15e] - param_1;
  }
  unaff_retaddr[0x15e] = (int)fVar1;
  piVar3 = (int *)unaff_retaddr[0x7f];
  bVar9 = *(byte *)((int)piVar3 + 0x251) >> 5 & 1;
  if (unaff_retaddr[0x85] != 0) {
    bVar9 = bVar9 | *(byte *)(unaff_retaddr[0x85] + 0x3d) >> 1 & 1;
  }
  if ((fStack_90 < 0.1) || (bVar9 != 0)) {
    if (((piVar3 == (int *)0x0) ||
        (((iVar8 = *piVar3, iVar8 != 0x13 && (iVar8 != 0)) && (iVar8 != 0x2b)))) &&
       ((unaff_retaddr[0x7e] != 6 && (bVar9 == 0)))) {
      (**(code **)(*unaff_retaddr + 0x15c))(0,0);
      FUN_00126320();
    }
    *(undefined1 *)(unaff_retaddr + 0x200) = 1;
    if ((*(byte *)(unaff_retaddr + 0x1df) & 4) == 0) {
      *(byte *)(unaff_retaddr + 0x1df) = *(byte *)(unaff_retaddr + 0x1df) | 4;
      FUN_0011e950(0,0x44098000);
    }
    unaff_retaddr[0x128] = unaff_retaddr[0x10d];
    return;
  }
  *(byte *)(unaff_retaddr + 0x1df) = *(byte *)(unaff_retaddr + 0x1df) & 0xfb;
  fStack_94 = (float)unaff_retaddr[0x17c];
  auVar12 = rsqrtss(ZEXT416((uint)fVar1),
                    fStack_94 * fStack_94 +
                    (float)unaff_retaddr[0x17b] * (float)unaff_retaddr[0x17b] +
                    (float)unaff_retaddr[0x17a] * (float)unaff_retaddr[0x17a]);
  fStack_94 = auVar12._0_4_ * fStack_94;
  cVar6 = FUN_000d4440();
  if (cVar6 == '\0') {
    fVar1 = 0.4;
  }
  else {
    fVar1 = 0.25;
  }
  if ((fVar1 <= ABS(-fStack_94)) || (unaff_retaddr[0x7e] == 8)) {
    if ((0.0 <= -fStack_94) || (unaff_retaddr[0x7e] == 8)) goto LAB_00119a32;
    bVar5 = false;
  }
  else {
    pfVar7 = (float *)FUN_0001fdd0();
    fStack_6c = -pfVar7[2];
    fStack_70 = -pfVar7[1];
    fVar1 = *pfVar7;
    (**(code **)(unaff_retaddr[0x6d] + 0x28))();
    FUN_0001f9c0();
    fStack_94 = -fStack_78;
    fVar4 = fStack_6c * fStack_78 + fStack_70 * fStack_7c + fStack_80 * -fVar1;
    fVar1 = -fStack_7c * fStack_70 + fStack_94 * fStack_6c + -fStack_80 * -fVar1;
    if (fVar1 < fVar4 == (fVar1 == fVar4)) {
      bVar5 = false;
    }
    else {
LAB_00119a32:
      bVar5 = true;
    }
  }
  FUN_0001f9c0();
  if (bVar5) {
    if ((unaff_retaddr[0x7c] == 4) && ((*(byte *)((int)unaff_retaddr + 0x262) & 1) != 0)) {
      unaff_retaddr[0x7c] = 0;
    }
    fVar10 = (float10)fpatan((float10)fStack_80,(float10)fStack_78);
    fVar10 = (float10)FUN_0001fae0((float)fVar10);
    unaff_retaddr[0x128] = (int)(float)fVar10;
    *(undefined1 *)(unaff_retaddr + 0x200) = 1;
  }
  else {
    if (unaff_retaddr[0x7e] == 8) {
LAB_00119b0b:
      if (unaff_retaddr[0x7c] == 4) {
LAB_00119b14:
        if ((*(byte *)((int)unaff_retaddr + 0x262) & 1) != 0) {
          unaff_retaddr[0x7c] = 0;
        }
      }
      fVar10 = (float10)fpatan((float10)fStack_80,(float10)fStack_78);
      fVar10 = (float10)FUN_0001fae0((float)fVar10);
      unaff_retaddr[0x128] = (int)(float)fVar10;
    }
    else {
      if (unaff_retaddr[0x7c] == 4) goto LAB_00119b14;
      cVar6 = FUN_00126a90();
      if ((cVar6 != '\0') ||
         (((int *)unaff_retaddr[0x80] != (int *)0x0 && (*(int *)unaff_retaddr[0x80] == 8))))
      goto LAB_00119b0b;
      fStack_60 = -fStack_78;
      fVar10 = (float10)fpatan(-(float10)fStack_80,(float10)fStack_60);
      fVar10 = (float10)FUN_0001fae0((float)fVar10);
      unaff_retaddr[0x128] = (int)(float)fVar10;
      fStack_84 = -fStack_84;
    }
    *(undefined1 *)(unaff_retaddr + 0x200) = 0;
  }
  cVar6 = FUN_00126ba0();
  if (cVar6 != '\0') {
    FUN_00126320();
  }
  (**(code **)(unaff_retaddr[0x6d] + 0x30))(auStack_68);
  FUN_0001d0c0();
  pfVar7 = (float *)FUN_0001fdd0();
  fVar1 = -pfVar7[2];
  fVar4 = -*pfVar7;
  auVar12 = rsqrtss(auVar12,fVar4 * fVar4 + fVar1 * fVar1);
  fVar11 = auVar12._0_4_;
  FUN_0012b2a0();
  FUN_0001f9c0();
  piVar3 = piStack_4;
  auVar12 = rsqrtss(auVar12,fStack_70 * fStack_70 + fStack_78 * fStack_78);
  fStack_90 = auVar12._0_4_ * fStack_78;
  local_a4 = 400.0;
  fStack_88 = auVar12._0_4_ * fStack_70;
  if (((piStack_4[0x7c] != 0) && (local_a4 = 5.0, piStack_4[0x7c] == 3)) &&
     (0.0 < (float)piStack_4[0x1f7])) {
    local_a4 = 400.0;
    FUN_0001f9c0();
    fStack_90 = fStack_6c;
    fStack_88 = fStack_64;
    pfVar7 = (float *)FUN_0001fdd0();
    fVar10 = (float10)fpatan((float10)*pfVar7,(float10)pfVar7[2]);
    fVar10 = (float10)FUN_0001fae0((float)fVar10);
    piVar3[0x128] = (int)(float)fVar10;
  }
  fVar10 = (float10)FUN_0001fb30((float)piStack_4[0x128] - (float)piStack_4[0x10d]);
  fVar2 = (float)ABS(fVar10);
  if (bVar5) {
    if (ABS(fStack_84) < -fStack_7c) {
      uVar13 = 3;
      goto LAB_00119e2d;
    }
    if (_DAT_0046d314 <= fVar2) {
      uVar13 = 3;
      goto LAB_00119e2d;
    }
    iVar8 = *piStack_4;
    if (0.0 <= fStack_84) {
      uVar13 = 7;
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    if (ABS(fStack_84) < -fStack_7c) {
      uVar13 = 0xc;
    }
    else {
      if (_DAT_0046d314 <= fVar2) goto LAB_00119e35;
      if (fStack_84 <= 0.0) {
        uVar13 = 0xe;
      }
      else {
        uVar13 = 0xd;
      }
    }
LAB_00119e2d:
    iVar8 = *piStack_4;
  }
  (**(code **)(iVar8 + 0x15c))(uVar13,(int)(fStack_94 * 100.0));
LAB_00119e35:
  if ((0.0 <= (float)piStack_4[0x128]) && (fVar2 <= 0.01)) {
    return;
  }
  if (fVar11 * fVar4 * fStack_88 - fVar1 * fVar11 * fStack_90 <= 0.0) {
    fVar10 = (float10)FUN_0005a6e0(0);
    fVar10 = fVar10 * (float10)57.295776;
  }
  else {
    fVar10 = (float10)FUN_0005a6e0(0);
    fVar10 = fVar10 * (float10)-57.295776;
  }
  if ((90.0 < ABS((float)fVar10)) || (piStack_4[0x7e] == 8)) {
    local_a4 = local_a4 * 1.8;
  }
  FUN_0011e950((float)fVar10,local_a4);
  return;
}
