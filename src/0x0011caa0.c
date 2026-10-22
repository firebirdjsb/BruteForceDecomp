/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85220FEB27D00C5836BF1C5E76882063FF647097C9C76B4B76F3835F745120CF
 * Entry: 0x0011caa0, Ghidra index: 3622, label: FUN_0011caa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbf4;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0011caa0(undefined1 (*param_1) [16])

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int *piVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint uVar20;
  undefined1 (*in_ECX) [16];
  int *piVar21;
  float10 fVar22;
  undefined1 in_XMM0 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 (*pauStack_ec) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e4) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*local_cc) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c4) [16];
  undefined1 (*pauStack_c0) [16];
  float *local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 (*pauStack_ac) [16];
  undefined8 uStack_a8;
  char cStack_9e;
  undefined1 local_9d;
  undefined1 (*pauStack_9c) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_94) [16];
  undefined1 (*pauStack_90) [16];
  int iStack_8c;
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_84) [16];
  undefined1 (*pauStack_80) [16];
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [16];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  local_bc = *(float **)((int)in_ECX[0x50] + 0xc);
  local_9d = 1;
  if (local_bc != (float *)*(int **)in_ECX[0x51]) {
    local_cc = (undefined1 (*) [16])(local_bc + 1);
    do {
      puVar18 = (undefined4 *)*local_bc;
      if (puVar18[4] == 0) {
        iVar16 = *(int *)(*(int *)((int)*in_ECX + 8) + 0xa44);
        piVar21 = *(int **)(iVar16 + 0x2c);
        if (piVar21 != *(int **)(iVar16 + 0x30)) {
LAB_0011caf5:
          if ((undefined4 *)*piVar21 != puVar18) goto code_r0x0011caf9;
          piVar4 = *(int **)(iVar16 + 0x30);
          piVar14 = piVar21 + 1;
          if (piVar14 != piVar4) {
            iVar17 = (int)piVar21 - (int)piVar14;
            do {
              *(int *)(iVar17 + (int)piVar14) = *piVar14;
              piVar14 = piVar14 + 1;
            } while (piVar14 != piVar4);
          }
          *(int *)(iVar16 + 0x30) = *(int *)(iVar16 + 0x30) + -4;
        }
LAB_0011cb24:
        pauVar5 = *(undefined1 (**) [16])in_ECX[0x51];
        if (local_cc != pauVar5) {
          pauVar15 = local_cc;
          do {
            *(int *)(((int)local_bc - (int)local_cc) + (int)pauVar15) = *(int *)*pauVar15;
            pauVar15 = (undefined1 (*) [16])((int)*pauVar15 + 4);
          } while (pauVar15 != pauVar5);
        }
        *(int *)in_ECX[0x51] = *(int *)in_ECX[0x51] + -4;
        pauStack_e4 = (undefined1 (*) [16])0x1;
        pauStack_e8 = (undefined1 (*) [16])0x11cb57;
        (**(code **)*puVar18)();
      }
      else {
        local_bc = local_bc + 1;
        local_cc = (undefined1 (*) [16])((int)*local_cc + 4);
      }
    } while (local_bc != (float *)*(int **)in_ECX[0x51]);
  }
  local_bc = (float *)(*(int *)((int)in_ECX[6] + 0xc) + 0x38);
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cb99;
  cVar13 = FUN_00157c40();
  if (cVar13 == '\0') {
    local_9d = 0;
    goto LAB_0011df3f;
  }
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cbb9;
  FUN_0014f860();
  pauStack_e8 = (undefined1 (*) [16])0x11cbcc;
  iVar16 = (**(code **)(**(int **)(*(int *)((int)*in_ECX + 8) + 0xbec) + 0xc))();
  if (iVar16 != 0) {
    iVar16 = *(int *)(*(int *)((int)*in_ECX + 0xc) + 0x120);
    pauStack_e8 = (undefined1 (*) [16])0x11cbec;
    iVar17 = (**(code **)(**(int **)(*(int *)((int)*in_ECX + 8) + 0xbec) + 0xc))();
    fVar25 = 0.0;
    pauStack_e4 = *(undefined1 (**) [16])(iVar17 + 0x2c);
    if (pauStack_e4 != (undefined1 (*) [16])0xfffffffc) {
      fVar25 = *(float *)((int)pauStack_e4 + 0x18);
    }
    if (pauStack_e4 != (undefined1 (*) [16])0xfffffffc) {
      *(float *)((int)pauStack_e4 + 0x18) = fVar25 + (float)param_1;
    }
    if (iVar16 != 0) {
      pauStack_e8 = (undefined1 (*) [16])0x11cc19;
      iVar16 = FUN_0008e590();
      if (iVar16 != 0) {
        *(float *)(iVar16 + 0x14) = *(float *)(iVar16 + 0x14) + (float)param_1;
      }
    }
  }
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cc33;
  FUN_0011c100();
  iVar16 = *(int *)((int)in_ECX[0x5b] + 8);
  if (iVar16 == 0) {
    if ((char)*(int *)((int)in_ECX[0x82] + 8) != '\0') {
      fVar25 = *(float *)((int)in_ECX[0x82] + 4);
      goto LAB_0011cc5f;
    }
LAB_0011cc6c:
    *(int *)((int)in_ECX[0x81] + 0xc) = 0;
  }
  else {
    if (*(char *)(iVar16 + 0x54) == '\0') goto LAB_0011cc6c;
    fVar25 = *(float *)(iVar16 + 0x50);
LAB_0011cc5f:
    if (fVar25 <= 0.0) goto LAB_0011cc6c;
  }
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cc85;
  FUN_00210560();
  pauStack_e4 = param_1;
  pauStack_ec = (undefined1 (*) [16])0x11cc93;
  FUN_0011be80();
  pauStack_e4 = param_1;
  pauStack_ec = (undefined1 (*) [16])0x11cca1;
  cVar13 = FUN_0011bd00();
  if (cVar13 == '\0') {
    local_9d = 0;
    goto LAB_0011df3f;
  }
  if ((*(int *)in_ECX[7] & 1) == 0) {
    if (0.0 < *(float *)in_ECX[0x43]) {
      pauStack_e4 = (undefined1 (*) [16])0x11cce1;
      cVar13 = FUN_00112800();
      if (cVar13 == '\0') {
        *(int *)in_ECX[0x43] = 0;
      }
      else {
        *(float *)in_ECX[0x43] = *(float *)in_ECX[0x43] - (float)param_1;
        if ((*(int *)((int)in_ECX[0x1f] + 8) == 8) && (0.1 < *(float *)in_ECX[0x5f])) {
          *(float *)in_ECX[0x43] = *(float *)in_ECX[0x43] - ((float)param_1 + (float)param_1);
        }
        pauStack_d0 = *(undefined1 (**) [16])in_ECX[0x43];
        local_cc = (undefined1 (*) [16])0x0;
        pauStack_c4 = (undefined1 (*) [16])0x0;
        if (0.0 <= (float)pauStack_d0) {
          pauStack_c4 = pauStack_d0;
        }
        in_XMM0 = ZEXT416(pauStack_c4);
        *(undefined1 (**) [16])in_ECX[0x43] = pauStack_c4;
      }
    }
  }
  else {
    *(int *)in_ECX[0x43] = 0;
  }
  if ((*(byte *)((int)in_ECX[0x7d] + 8) & 3) != 0) {
    pauStack_e4 = param_1;
    pauStack_e8 = (undefined1 (*) [16])0x11cd84;
    FUN_0023cf30();
    goto LAB_0011df3f;
  }
  pauStack_e4 = (undefined1 (*) [16])0x11cd91;
  cVar13 = (**(code **)(*(int *)*in_ECX + 0xd4))();
  if (cVar13 == '\0') {
    in_ECX[7][0] = (byte)*(int *)in_ECX[7] | 8;
  }
  if ((*(float *)in_ECX[0x58] != 0.0) &&
     (*(float *)in_ECX[0x58] = *(float *)in_ECX[0x58] - (float)param_1,
     *(float *)in_ECX[0x58] < 0.0 != (*(float *)in_ECX[0x58] == 0.0))) {
    pauStack_e4 = (undefined1 (*) [16])0x11cddf;
    FUN_00116ea0();
    *(int *)in_ECX[0x58] = 0;
  }
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cdfc;
  FUN_0023cf30();
  if ((short)*(int *)((int)in_ECX[0x10] + 4) < 1) {
    local_cc = (undefined1 (*) [16])0x0;
    *(float *)((int)in_ECX[0x41] + 8) = *(float *)((int)in_ECX[0x41] + 8) - (float)param_1;
    pauStack_d0 = *(undefined1 (**) [16])((int)in_ECX[0x41] + 8);
    pauStack_c4 = (undefined1 (*) [16])0x0;
    if (0.0 <= (float)pauStack_d0) {
      pauStack_c4 = pauStack_d0;
    }
    in_XMM0 = ZEXT416(pauStack_c4);
    *(undefined1 (**) [16])((int)in_ECX[0x41] + 8) = pauStack_c4;
  }
  else {
    *(int *)((int)in_ECX[0x41] + 8) = 0x41000000;
  }
  iVar16 = *(int *)((int)in_ECX[0x41] + 0xc);
  if (iVar16 != 0) {
    pauStack_d0 = (undefined1 (*) [16])CONCAT31(pauStack_d0._1_3_,iVar16 != 1);
    pauStack_e4 = pauStack_d0;
    pauStack_ec = (undefined1 (*) [16])0x11ce7d;
    FUN_00119020();
    *(int *)((int)in_ECX[0x41] + 0xc) = 0;
    if (((*(int *)in_ECX[0x20] != 0) && ((char)*(int *)((int)in_ECX[0x20] + 4) != '\0')) &&
       ((*(int *)in_ECX[0x26] & 0x800) != 0)) {
      in_ECX[0x26][0] = (byte)*(int *)in_ECX[0x26] | 1;
      *(bool *)((int)in_ECX[0x20] + 6) = iVar16 != 1;
      *(byte *)((int)in_ECX[0x74] + 8) = *(byte *)((int)in_ECX[0x74] + 8) | 8;
      pbVar1 = (byte *)((int)in_ECX[0x26] + 1);
      *pbVar1 = *pbVar1 & 0xf7;
    }
  }
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cee0;
  FUN_0011a840();
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11ceed;
  FUN_00123740();
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11cefa;
  FUN_00119560();
  pauStack_e4 = param_1;
  pauStack_ec = (undefined1 (*) [16])0x11cf08;
  FUN_0011aa20();
  pauStack_e4 = param_1;
  pauStack_ec = (undefined1 (*) [16])0x11cf16;
  pauStack_e8 = in_ECX;
  FUN_00125210();
  *(float *)in_ECX[0x74] = *(float *)in_ECX[0x74] - (float)param_1;
  if (*(float *)in_ECX[0x74] < 0.0 != (*(float *)in_ECX[0x74] == 0.0)) {
    pauStack_e8 = (undefined1 (*) [16])0x11cf46;
    FUN_0011c540();
    *(int *)in_ECX[0x74] = 0x3e088889;
  }
  pauStack_e4 = (undefined1 (*) [16])0x11cf66;
  iVar16 = FUN_0006ef00();
  if (iVar16 != 0) {
    if (*(int *)((int)in_ECX[0x7a] + 8) == 0) {
      pauStack_e4 = (undefined1 (*) [16])0x3f800000;
      pauStack_e8 = (undefined1 (*) [16])0x11cfca;
      FUN_000c5db0();
      pauStack_e4 = (undefined1 (*) [16])0x3f800000;
    }
    else {
      pauStack_e4 = (undefined1 (*) [16])
                    (*(float *)((int)in_ECX[0x7c] + 8) + *(float *)((int)in_ECX[0x7c] + 8));
      pauStack_e8 = (undefined1 (*) [16])0x11cf92;
      pauStack_d0 = pauStack_e4;
      FUN_000c5db0();
      if ((float)pauStack_d0 != 0.0) goto LAB_0011cfde;
      pauStack_e4 = (undefined1 (*) [16])0x11cfb8;
      fVar22 = (float10)(**(code **)(**(int **)((int)in_ECX[0x5a] + 4) + 0x58))();
      pauStack_e4 = (undefined1 (*) [16])(float)fVar22;
    }
    pauStack_e8 = (undefined1 (*) [16])0x11cfda;
    FUN_000c5d20();
  }
LAB_0011cfde:
  *(float *)((int)in_ECX[0x59] + 4) = (float)param_1 + *(float *)((int)in_ECX[0x59] + 4);
  *(float *)((int)in_ECX[0x59] + 8) = (float)param_1 + *(float *)((int)in_ECX[0x59] + 8);
  if (*(int *)((int)in_ECX[100] + 0xc) == 0) {
    if ((char)*(int *)in_ECX[0x67] != '\0') {
      if (*(int *)((int)in_ECX[0x27] + 4) == -1) {
        pauStack_e4 = (undefined1 (*) [16])0x11d057;
        FUN_0011f720();
      }
      pauStack_e4 = *(undefined1 (**) [16])((int)in_ECX[0x66] + 0xc);
      pauStack_e8 = *(undefined1 (**) [16])((int)in_ECX[0x66] + 8);
      pauStack_ec = *(undefined1 (**) [16])((int)in_ECX[0x66] + 4);
      pauStack_d0 = pauStack_e8;
      local_cc = pauStack_e4;
      goto LAB_0011d086;
    }
  }
  else {
    if (((*(byte *)((int)in_ECX[0x7d] + 8) & 0x10) != 0) && (*(int *)((int)in_ECX[0x27] + 4) == -1))
    {
      pauStack_e4 = (undefined1 (*) [16])0x11d02a;
      FUN_0011f720();
    }
    FUN_0011fd90(in_ECX,&pauStack_ec);
LAB_0011d086:
    FUN_0011f6e0();
  }
  if (*(int *)((int)in_ECX[0x68] + 4) != 0) {
    if (((*(byte *)((int)in_ECX[0x7d] + 8) & 0x10) != 0) && (*(int *)((int)in_ECX[0x26] + 8) == -1))
    {
      pauStack_e8 = (undefined1 (*) [16])0x11d0b5;
      pauStack_e4 = in_ECX;
      FUN_0011f840();
    }
    FUN_0011fff0();
    FUN_0011e9d0(in_ECX);
  }
  if ((*(byte *)((int)in_ECX[0x7d] + 8) & 0x10) == 0) {
    cStack_9e = *(int *)((int)in_ECX[99] + 8) != 0;
    pauStack_94 = (undefined1 (*) [16])0x0;
    pauStack_9c = (undefined1 (*) [16])0x0;
    if (*(float *)((int)in_ECX[0x7c] + 8) != 0.0) {
      piVar21 = *(int **)((int)in_ECX[0x5e] + 4);
      cStack_9e = '\0';
      if (piVar21 != (int *)0x0) {
        pauStack_e4 = (undefined1 (*) [16])0x11d134;
        cVar13 = FUN_00112800();
        if (cVar13 != '\0') {
          pauStack_e4 = (undefined1 (*) [16])0x11d145;
          pauStack_d0 = (undefined1 (*) [16])(**(code **)(piVar21[0x12] + 0xc))();
          pauStack_e4 = (undefined1 (*) [16])0x11d156;
          pfVar19 = (float *)FUN_00122f50();
          local_cc = (undefined1 (*) [16])(pfVar19[2] - *(float *)(*pauStack_d0 + 8));
          uStack_a8._0_4_ = (undefined1 (*) [16])(pfVar19[1] - *(float *)(*pauStack_d0 + 4));
          pauStack_ac = (undefined1 (*) [16])(*pfVar19 - *(float *)*pauStack_d0);
          pauStack_d0 = (undefined1 (*) [16])
                        ((float)(undefined1 (*) [16])uStack_a8 *
                         (float)(undefined1 (*) [16])uStack_a8 +
                        (float)local_cc * (float)local_cc + (float)pauStack_ac * (float)pauStack_ac)
          ;
          auVar23._4_12_ = in_XMM0._4_12_;
          auVar23._0_4_ = (undefined1 (*) [16])SQRT((float)pauStack_d0);
          pauStack_e4 = (undefined1 (*) [16])&pauStack_90;
          pauStack_e8 = (undefined1 (*) [16])0x11d1c9;
          pauStack_c4 = auVar23._0_4_;
          uStack_a8._4_4_ = local_cc;
          iVar16 = FUN_0006ef00();
          pauStack_e8 = *(undefined1 (**) [16])(iVar16 + 0xf0);
          pauStack_ec = (undefined1 (*) [16])0x11d1d5;
          FUN_000ab390();
          local_cc = (undefined1 (*) [16])(float)(int)pauStack_90;
          pauStack_e4 = (undefined1 (*) [16])(float)iStack_8c;
          if (((float)local_cc != *(float *)(piVar21[0x14] + 0x30)) ||
             (pauVar5 = pauStack_ac, *(float *)(piVar21[0x14] + 0x34) != (float)pauStack_e4)) {
            pauStack_ec = (undefined1 (*) [16])&fStack_b8;
            pauStack_e8 = local_cc;
            pauStack_d0 = pauStack_e4;
            FUN_0006dfc0(piVar21);
            pauStack_d0 = (undefined1 (*) [16])
                          (fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
            auVar23 = rsqrtss(auVar23,pauStack_d0);
            local_cc = auVar23._0_4_;
            fStack_b8 = (float)local_cc * fStack_b8;
            fStack_b4 = fStack_b4 * (float)local_cc;
            fStack_b0 = fStack_b0 * (float)local_cc;
            pauStack_e4 = (undefined1 (*) [16])0x11d277;
            (**(code **)(*piVar21 + 0x130))();
            pauStack_e4 = (undefined1 (*) [16])0x11d286;
            FUN_00061f50();
            pauStack_e4 = (undefined1 (*) [16])0x11d293;
            FUN_0001d0c0();
            pauStack_e4 = (undefined1 (*) [16])0x11d29d;
            (**(code **)(*piVar21 + 0x130))();
            pauStack_e4 = (undefined1 (*) [16])0x11d2ac;
            FUN_00061f50();
            local_cc = pauStack_80;
            pauStack_d0 = pauStack_84;
            pauStack_ac = pauStack_88;
            pauStack_e4 = (undefined1 (*) [16])0x11d2e3;
            FUN_00061f50();
            local_cc = pauStack_80;
            pauStack_d0 = pauStack_84;
            pauStack_ac = pauStack_88;
            pauStack_e4 = (undefined1 (*) [16])0x11d313;
            (**(code **)(*piVar21 + 0x130))();
            pauStack_e4 = (undefined1 (*) [16])0x11d322;
            FUN_0001f9c0();
            uStack_a8._0_4_ = pauStack_84;
            uStack_a8._4_4_ = pauStack_80;
            pauVar5 = pauStack_88;
          }
          pauStack_94 = uStack_a8._4_4_;
          cStack_9e = '\x01';
          pauStack_d0 = (undefined1 (*) [16])0x0;
          auVar23 = rcpss(ZEXT416(pauStack_c4),ZEXT416(pauStack_c4));
          fVar25 = auVar23._0_4_;
          auVar24._0_4_ = (undefined1 (*) [16])(fVar25 * 0.0);
          auVar24._4_4_ = fVar25 * 0.0;
          auVar24._8_4_ = (float)(undefined1 (*) [16])uStack_a8 * fVar25;
          auVar24._12_4_ = (float)pauStack_c4 * fVar25;
          uStack_a8 = auVar24._8_8_;
          pauVar15 = (undefined1 (*) [16])((float)pauStack_c4 * (float)pauStack_c4);
          auVar23 = rsqrtss(auVar24,pauVar15);
          local_cc = auVar23._0_4_;
          fStack_b8 = (float)local_cc * 0.0;
          fStack_b0 = (float)pauStack_c4 * (float)local_cc;
          fVar25 = fStack_b8 * auVar24._12_4_ - fStack_b0 * auVar24._8_4_;
          pauStack_c4 = pauVar15;
          fStack_b4 = fStack_b8;
          pauStack_ac = auVar24._0_4_;
          pauStack_9c = pauVar5;
          if (fVar25 <= 0.0) {
            if (fVar25 < 0.0) {
              pauStack_e4 = (undefined1 (*) [16])0x0;
              pauStack_e8 = (undefined1 (*) [16])0x11d434;
              fVar22 = (float10)FUN_0005a6e0();
              goto LAB_0011d434;
            }
          }
          else {
            pauStack_e4 = (undefined1 (*) [16])0x0;
            pauStack_e8 = (undefined1 (*) [16])0x11d414;
            fVar22 = (float10)FUN_0005a6e0();
            fVar22 = -fVar22;
LAB_0011d434:
            pauStack_d0 = (undefined1 (*) [16])(float)fVar22;
          }
          pauStack_e4 = (undefined1 (*) [16])0x11d448;
          FUN_00122f50();
          pauStack_e4 = (undefined1 (*) [16])0x11d451;
          (**(code **)(*piVar21 + 0x40))();
          pauStack_e4 = (undefined1 (*) [16])0x11d45e;
          FUN_000a0c60();
          pauStack_c4 = (undefined1 (*) [16])(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8);
          in_XMM0 = rsqrtss(auVar23,pauStack_c4);
          local_cc = in_XMM0._0_4_;
          fStack_b8 = fStack_b8 * (float)local_cc;
          fStack_b4 = (float)local_cc * 0.0;
          fStack_b0 = fStack_b0 * (float)local_cc;
          if (0.025 < ABS(fStack_b8)) {
            pauStack_e4 = (undefined1 (*) [16])0x0;
            pauStack_ec = (undefined1 (*) [16])0x11d4c9;
            FUN_0011e7c0();
            pauStack_e4 = (undefined1 (*) [16])0x11d4db;
            FUN_0001d0c0();
            local_cc = &auStack_50;
            pauStack_e4 = (undefined1 (*) [16])0x11d500;
            puVar18 = (undefined4 *)FUN_002334b0();
            uVar6 = puVar18[1];
            uVar7 = puVar18[2];
            uVar8 = puVar18[3];
            uVar2 = puVar18[8];
            uVar9 = puVar18[4];
            uVar10 = puVar18[5];
            uVar11 = puVar18[6];
            uVar12 = puVar18[7];
            *(undefined4 *)*local_cc = *puVar18;
            *(undefined4 *)(*local_cc + 4) = uVar6;
            *(undefined4 *)(*local_cc + 8) = uVar7;
            *(undefined4 *)(*local_cc + 0xc) = uVar8;
            *(undefined4 *)local_cc[2] = uVar2;
            *(undefined4 *)local_cc[1] = uVar9;
            *(undefined4 *)(local_cc[1] + 4) = uVar10;
            *(undefined4 *)(local_cc[1] + 8) = uVar11;
            *(undefined4 *)(local_cc[1] + 0xc) = uVar12;
            local_cc = (undefined1 (*) [16])((int)in_ECX[0x5b] + 0xc);
            pauStack_c4 = &auStack_50;
            *local_cc = auStack_50;
            *(int *)((int)in_ECX[0x5d] + 0xc) = iStack_30;
            *(int *)((int)in_ECX[0x5c] + 0xc) = iStack_40;
            *(int *)in_ECX[0x5d] = iStack_3c;
            *(int *)((int)in_ECX[0x5d] + 4) = iStack_38;
            *(int *)((int)in_ECX[0x5d] + 8) = iStack_34;
            in_XMM0 = auStack_50;
          }
          pauStack_e4 = pauStack_d0;
          pauStack_ec = (undefined1 (*) [16])0x11d56c;
          pauStack_e8 = in_ECX;
          FUN_0011e7c0();
        }
      }
    }
    if (*(int *)((int)in_ECX[99] + 8) != 0) {
      pauStack_e4 = (undefined1 (*) [16])0x11d587;
      pfVar19 = (float *)FUN_00120ad0();
      pauStack_d0 = (undefined1 (*) [16])(pfVar19[2] - local_bc[2]);
      pauStack_9c = (undefined1 (*) [16])(*pfVar19 - *local_bc);
      pauStack_94 = pauStack_d0;
    }
    if (cStack_9e == '\0') {
      bVar3 = (byte)*(int *)in_ECX[0x81];
      if ((bVar3 & 4) == 0) {
        if ((*(int *)((int)in_ECX[100] + 0xc) == 0) && ((char)*(int *)in_ECX[0x67] == '\0')) {
          pauStack_e4 = (undefined1 (*) [16])&pauStack_9c;
          pauStack_e8 = (undefined1 (*) [16])0x11d74e;
          (**(code **)(*(int *)((int)in_ECX[0x1b] + 4) + 0x2c))();
          pauStack_9c = (undefined1 (*) [16])((float)pauStack_9c * 256.0);
          pauStack_98 = (undefined1 (*) [16])((float)pauStack_98 * 256.0);
          pauStack_94 = (undefined1 (*) [16])((float)pauStack_94 * 256.0);
          pauStack_ec = (undefined1 (*) [16])((float)pauStack_9c + *local_bc);
          pauStack_e8 = (undefined1 (*) [16])((float)pauStack_98 + local_bc[1]);
          pauStack_e4 = (undefined1 (*) [16])((float)pauStack_94 + local_bc[2]);
          pauStack_d0 = pauStack_e8;
          local_cc = pauStack_e4;
          FUN_0011f6e0();
        }
      }
      else {
        in_ECX[0x81][0] = bVar3 & 0xfb;
      }
    }
    else {
      if (((*(int *)((int)in_ECX[100] + 0xc) == 0) && ((char)*(int *)in_ECX[0x67] == '\0')) &&
         (*(int *)((int)in_ECX[99] + 8) != 0)) {
        FUN_0015a480(*(int *)((int)in_ECX[99] + 8));
        FUN_0011f6e0();
      }
      local_cc = (undefined1 (*) [16])
                 ((float)pauStack_94 * (float)pauStack_94 + (float)pauStack_9c * (float)pauStack_9c)
      ;
      auVar23 = rsqrtss(in_XMM0,local_cc);
      pauStack_d0 = auVar23._0_4_;
      fStack_b8 = (float)pauStack_9c * (float)pauStack_d0;
      pauStack_e4 = (undefined1 (*) [16])&pauStack_ac;
      fStack_b4 = (float)pauStack_d0 * 0.0;
      fStack_b0 = (float)pauStack_94 * (float)pauStack_d0;
      pauStack_e8 = (undefined1 (*) [16])0x11d64f;
      (**(code **)(*(int *)((int)in_ECX[0x1b] + 4) + 0x30))();
      pauStack_d0 = *(undefined1 (**) [16])(*(int *)((int)*in_ECX + 0xc) + 0x2d0);
      pauStack_e4 = (undefined1 (*) [16])0x0;
      if (fStack_b0 * (float)pauStack_ac - (float)uStack_a8._4_4_ * fStack_b8 <= 0.0) {
        pauStack_e8 = (undefined1 (*) [16])0x11d6c6;
        fVar22 = (float10)FUN_0005a6e0();
        fVar22 = (fVar22 / (float10)(float)param_1) * (float10)0.5;
        if ((float10)(float)pauStack_d0 < fVar22) {
          fVar22 = (float10)(float)pauStack_d0;
        }
      }
      else {
        pauStack_e8 = (undefined1 (*) [16])0x11d68e;
        fVar22 = (float10)FUN_0005a6e0();
        fVar22 = (-fVar22 / (float10)(float)param_1) * (float10)0.5;
        pauStack_d0 = (undefined1 (*) [16])-(float)pauStack_d0;
        if (fVar22 < (float10)(float)pauStack_d0) {
          fVar22 = (float10)(float)pauStack_d0;
        }
      }
      if (ABS(fVar22) < (float10)0.05) {
        fVar22 = (float10)0.0;
      }
      *(float *)((int)in_ECX[0x5f] + 8) = (float)fVar22;
    }
    if (*(int *)((int)in_ECX[0x60] + 4) != 0) {
      *(int *)in_ECX[0x5f] = 0;
      *(int *)((int)in_ECX[0x5e] + 0xc) = 0;
      *(int *)((int)in_ECX[0x5e] + 8) = 0;
    }
    pauStack_e4 = param_1;
    pauStack_ec = (undefined1 (*) [16])0x11d7e9;
    FUN_00120290();
    pauStack_e4 = param_1;
    pauStack_ec = (undefined1 (*) [16])0x11d7f7;
    FUN_00119fa0();
    pauStack_e4 = (undefined1 (*) [16])(*(float *)in_ECX[0x4a] - *(float *)((int)in_ECX[0x43] + 4));
    pauStack_e8 = (undefined1 (*) [16])0x11d810;
    fVar22 = (float10)FUN_0001fb30();
    local_cc = (undefined1 (*) [16])(float)fVar22;
    pauStack_d0 = (undefined1 (*) [16])(float)ABS(fVar22);
    if ((float10)1.1920929e-07 < ABS(fVar22)) {
      fStack_7c = 1.0;
      pauStack_c8 = (undefined1 (*) [16])((float)pauStack_d0 * 0.63661975);
      pauStack_c0 = (undefined1 (*) [16])(*(float *)((int)in_ECX[0x7e] + 0xc) * 0.4);
      pauStack_c4 = pauStack_c8;
      if ((float)pauStack_c8 <= (float)pauStack_c0) {
        pauStack_c4 = pauStack_c0;
      }
      if (1.0 <= (float)pauStack_c4) {
        pauStack_c4 = (undefined1 (*) [16])0x3f800000;
      }
      pauVar5 = pauStack_c4;
      if ((float)local_cc < 0.0) {
        pauVar5 = (undefined1 (*) [16])-(float)pauStack_c4;
      }
      pauVar5 = (undefined1 (*) [16])
                ((float)pauVar5 * *(float *)((int)in_ECX[0x5f] + 0xc) * (float)param_1);
      if ((float)pauStack_d0 < ABS((float)pauVar5)) {
        pauVar5 = local_cc;
      }
      *(float *)((int)in_ECX[0x43] + 4) = (float)pauVar5 + *(float *)((int)in_ECX[0x43] + 4);
      pauStack_e8 = (undefined1 (*) [16])auStack_74;
      pauStack_e4 = (undefined1 (*) [16])(*(float *)((int)in_ECX[0x43] + 4) - 3.1415927);
      pauStack_ec = (undefined1 (*) [16])0x11d8d5;
      FUN_00039380();
      pauStack_e4 = (undefined1 (*) [16])auStack_74;
      pauStack_e8 = (undefined1 (*) [16])0x11d8e3;
      (**(code **)(*(int *)*in_ECX + 0x3c))();
    }
    pauStack_e4 = param_1;
    pauStack_ec = (undefined1 (*) [16])0x11d8f1;
    FUN_001195c0();
    pauStack_e4 = param_1;
    pauStack_e8 = (undefined1 (*) [16])0x11d8fe;
    FUN_0011a440();
    if (*(undefined1 (**) [16])((int)in_ECX[0x21] + 4) != (undefined1 (*) [16])0x0) {
      pauStack_ec = (undefined1 (*) [16])0x11d913;
      pauStack_e8 = *(undefined1 (**) [16])((int)in_ECX[0x21] + 4);
      FUN_0014fbb0();
    }
  }
  else {
    pauStack_e4 = (undefined1 (*) [16])0x11d0e1;
    FUN_0011e000();
  }
  pauStack_e4 = (undefined1 (*) [16])0x11d91c;
  fVar22 = (float10)FUN_001552a0();
  pauStack_e4 = (undefined1 (*) [16])(float)fVar22;
  pauStack_e8 = (undefined1 (*) [16])0x11d925;
  fVar22 = (float10)FUN_0001fae0();
  *(float *)((int)in_ECX[0x43] + 4) = (float)fVar22;
  pauStack_e8 = (undefined1 (*) [16])0x11d93c;
  FUN_0011c810();
  if ((*(byte *)((int)in_ECX[0x7d] + 8) & 0x10) != 0) {
    *(int *)in_ECX[0x4a] = *(int *)((int)in_ECX[0x43] + 4);
  }
  if ((float)param_1 <= 0.0) {
    *(int *)((int)in_ECX[0x47] + 8) = 0;
    *(int *)((int)in_ECX[0x47] + 4) = 0;
    *(int *)in_ECX[0x47] = 0;
    *(int *)((int)in_ECX[0x48] + 8) = 0;
  }
  else {
    pauStack_e4 = (undefined1 (*) [16])0x11d97c;
    (**(code **)(*(int *)((int)in_ECX[0x1b] + 4) + 0x28))();
    pauStack_e4 = (undefined1 (*) [16])0x11d987;
    pfVar19 = (float *)FUN_0001fdd0();
    pauStack_c8 = (undefined1 (*) [16])-pfVar19[2];
    pauStack_98 = (undefined1 (*) [16])0x0;
    pauStack_9c = (undefined1 (*) [16])-*pfVar19;
    pauStack_e4 = (undefined1 (*) [16])0x11d9b1;
    pauStack_94 = pauStack_c8;
    FUN_0001fd40();
    pauStack_e4 = (undefined1 (*) [16])0x0;
    pauStack_e8 = (undefined1 (*) [16])0x11d9c7;
    fVar22 = (float10)FUN_0005a6e0();
    *(float *)((int)in_ECX[0x48] + 8) = (float)(fVar22 / (float10)(float)param_1);
    if (0.0 < (float)pauStack_9c * *(float *)((int)in_ECX[0x48] + 4) -
              (float)pauStack_94 * *(float *)((int)in_ECX[0x47] + 0xc)) {
      *(float *)((int)in_ECX[0x48] + 8) = -*(float *)((int)in_ECX[0x48] + 8);
    }
  }
  if ((*(byte *)((int)in_ECX[0x7d] + 8) & 8) == 0) {
    pauStack_e4 = param_1;
    pauStack_ec = (undefined1 (*) [16])0x11da3f;
    pauStack_e8 = in_ECX;
    FUN_0012cd10();
    piVar21 = *(int **)((int)in_ECX[0x44] + 8);
    if ((piVar21 != (int *)0x0) && (*(int *)(piVar21[3] + 4) == 0x1a)) {
      pauStack_e4 = param_1;
      pauStack_e8 = (undefined1 (*) [16])0x11da69;
      FUN_00156290();
      pauStack_e4 = (undefined1 (*) [16])0x11da70;
      iVar16 = (**(code **)(*piVar21 + 0x40))();
      pauStack_e4 = (undefined1 (*) [16])0x11da79;
      pfVar19 = (float *)FUN_0010ff50();
      pauStack_80 = (undefined1 (*) [16])(*(float *)(iVar16 + 0x2c) - pfVar19[2]);
      fVar25 = *(float *)(iVar16 + 0x24) - *pfVar19;
      pauStack_c8 = pauStack_80;
      if (0.0 < (float)pauStack_80 * (float)pauStack_80 + fVar25 * fVar25) {
        pauStack_c0 = (undefined1 (*) [16])local_bc[2];
        pauStack_c8 = (undefined1 (*) [16])local_bc[1];
        pauStack_9c = (undefined1 (*) [16])(*local_bc + fVar25);
        pauStack_e4 = (undefined1 (*) [16])&pauStack_9c;
        pauStack_94 = (undefined1 (*) [16])((float)pauStack_c0 + (float)pauStack_80);
        pauStack_e8 = (undefined1 (*) [16])0x11daeb;
        pauStack_98 = pauStack_c8;
        (**(code **)(*(int *)*in_ECX + 0x48))();
      }
    }
    *(float *)((int)in_ECX[0x74] + 4) = (float)param_1 + *(float *)((int)in_ECX[0x74] + 4);
    iVar16 = 2 - (uint)((*(byte *)((int)in_ECX[0x43] + 0xc) & 1) != 0);
    if ((iVar16 != *(int *)((int)in_ECX[4] + 4)) && (0.8 < *(float *)((int)in_ECX[0x74] + 4))) {
      *(int *)((int)in_ECX[4] + 4) = iVar16;
      *(int *)((int)in_ECX[0x74] + 4) = 0;
      if (*(int *)((int)in_ECX[0x2e] + 8) != 0) {
        pauStack_e4 = (undefined1 (*) [16])0x11db58;
        iVar16 = FUN_0014d330();
        if (iVar16 != 0) {
          *(int *)(iVar16 + 0x44) = *(int *)((int)in_ECX[4] + 4);
        }
        pauStack_e4 = (undefined1 (*) [16])0x11db75;
        iVar16 = FUN_0014d3b0();
        if (iVar16 != 0) {
          *(int *)(iVar16 + 0x44) = *(int *)((int)in_ECX[4] + 4);
        }
      }
    }
  }
  else {
    iVar16 = *(int *)(*(int *)((int)in_ECX[6] + 0xc) + 0x10);
    if (((iVar16 != 0) && (iVar16 = *(int *)(iVar16 + 100), iVar16 != 0)) && (iVar16 != -1)) {
      *(int *)((int)in_ECX[4] + 4) = *(int *)(*(int *)(iVar16 + 0x5c) + 0x44);
    }
  }
  pauStack_e4 = (undefined1 (*) [16])0x11dbb7;
  iVar16 = (**(code **)(*(int *)((int)in_ECX[0x1b] + 4) + 0x28))();
  pauStack_c0 = (undefined1 (*) [16])-*(float *)(iVar16 + 0x20);
  pauStack_c8 = (undefined1 (*) [16])-*(float *)(iVar16 + 0x14);
  *(float *)((int)in_ECX[0x47] + 0xc) = -*(float *)(iVar16 + 8);
  *(undefined1 (**) [16])in_ECX[0x48] = pauStack_c8;
  *(undefined1 (**) [16])((int)in_ECX[0x48] + 4) = pauStack_c0;
  *(int *)in_ECX[0x48] = 0;
  pauStack_e4 = (undefined1 (*) [16])0x11dc43;
  pauStack_84 = pauStack_c8;
  pauStack_80 = pauStack_c0;
  FUN_0001fd40();
  pauStack_e4 = (undefined1 (*) [16])0x11dc4c;
  FUN_001241b0();
  pauStack_e4 = param_1;
  pauStack_e8 = (undefined1 (*) [16])0x11dc5f;
  FUN_0014cd10();
  pauStack_e4 = param_1;
  pauStack_ec = (undefined1 (*) [16])0x11dc6d;
  FUN_0011afa0();
  if ((*(int *)((int)in_ECX[0x5b] + 8) != 0) && ((*(int *)in_ECX[7] & 1) == 0)) {
    pauStack_e4 = (undefined1 (*) [16])0x0;
    pauStack_e8 = param_1;
    pauStack_ec = (undefined1 (*) [16])0x11dc8c;
    FUN_001437d0();
  }
  iVar16 = 0x6cc;
  do {
    if (0.0 < *(float *)((int)*in_ECX + iVar16)) {
      *(float *)((int)*in_ECX + iVar16) = *(float *)((int)*in_ECX + iVar16) - (float)param_1;
    }
    iVar16 = iVar16 + 4;
  } while (iVar16 < 0x6e4);
  pauVar5 = (undefined1 (*) [16])local_bc[2];
  pauStack_c8 = (undefined1 (*) [16])local_bc[1];
  pauStack_e8 = (undefined1 (*) [16])*local_bc;
  pauStack_c0 = pauVar5;
  pauStack_9c = pauStack_e8;
  pauStack_98 = pauStack_c8;
  if (DAT_0040cbf4 != '\0') {
    iVar16 = *(int *)(*(int *)((int)*in_ECX + 8) + 0xa40);
    pauStack_ec = (undefined1 (*) [16])&pauStack_c8;
    pauStack_e4 = pauVar5;
    cVar13 = FUN_001f4740(iVar16,&pauStack_c0);
    if (cVar13 != '\0') {
      pauStack_e8 = pauStack_9c;
      pauStack_ec = (undefined1 (*) [16])&pauStack_90;
      pauStack_e4 = pauVar5;
      cVar13 = FUN_001f3fb0((int)((int)*pauStack_c0 + **(int **)(iVar16 + 0x20) * (int)pauStack_c8)
                            * 0x40 + *(int *)(iVar16 + 0x18));
      if (cVar13 != '\0') {
        pauStack_c4 = (undefined1 (*) [16])0x3f800000;
        local_bc = (float *)0x3f800000;
        local_cc = (undefined1 (*) [16])0x3f800000;
        iVar16 = *(int *)(*(int *)(*(int *)(*(int *)((int)*in_ECX + 8) + 0xa40) + 0x20) + 0x10);
        if ((((iVar16 != 0) && (*(int *)(iVar16 + 0x18) != 0)) &&
            (pauStack_c8 = (undefined1 (*) [16])
                           ((*(int *)(iVar16 + 0x1c) - *(int *)(iVar16 + 0x18)) / 0x2c),
            pauStack_c8 != (undefined1 (*) [16])0x0)) &&
           (piVar21 = *(int **)(*(int *)(iVar16 + 0x18) + 4), piVar21 != (int *)0x0)) {
          pauStack_e4 = (undefined1 (*) [16])&pauStack_c4;
          pauStack_e8 = (undefined1 (*) [16])&pauStack_c8;
          pauStack_ec = (undefined1 (*) [16])&pauStack_c0;
          pauStack_c8 = (undefined1 (*) [16])0xa38d8e;
          pauStack_c0 = (undefined1 (*) [16])0xef3098f0;
          (**(code **)(*piVar21 + 0x6c))(piVar21);
          pauStack_d0 = (undefined1 (*) [16])0x7d5240f;
          (**(code **)(*piVar21 + 0x6c))(piVar21,&pauStack_d0,&stack0xffffff28,&local_cc);
          pauStack_e8 = (undefined1 (*) [16])0xa38d8e;
          (**(code **)(*piVar21 + 0x6c))(piVar21,&stack0xffffff20,&pauStack_e8,&pauStack_ec);
        }
        if (*(int *)(*(int *)((int)*in_ECX + 8) + 0xa40) == 0) {
          fVar22 = (float10)0.0;
        }
        else {
          pauStack_e4 = (undefined1 (*) [16])0x0;
          pauStack_ec = pauStack_9c;
          pauStack_e8 = pauVar5;
          fVar22 = (float10)FUN_001f4880();
        }
        fVar25 = 2.0;
        if (2.0 <= (float)((float10)(float)pauStack_98 - fVar22)) {
          fVar25 = (float)((float10)(float)pauStack_98 - fVar22);
        }
        pauStack_d0 = (undefined1 (*) [16])(fVar25 * 0.1);
        *(float *)((int)in_ECX[0x72] + 8) =
             (float)local_bc * fStack_78 + (float)pauStack_d0 + (float)local_cc;
        fStack_7c = *(float *)((int)in_ECX[0x72] + 8);
        if (*(float *)((int)in_ECX[0x72] + 8) <= 0.0) {
          fStack_7c = 0.0;
        }
        if (1.0 <= fStack_7c) {
          fStack_7c = 1.0;
        }
        *(float *)((int)in_ECX[0x72] + 8) = fStack_7c;
        fStack_78 = 0.0;
        fVar25 = (float)pauStack_d0 + (float)pauStack_c4 + (float)pauStack_90;
        pauStack_90 = (undefined1 (*) [16])0x3f800000;
        *(float *)((int)in_ECX[0x72] + 4) = fVar25;
        pauStack_c8 = *(undefined1 (**) [16])((int)in_ECX[0x72] + 4);
        pauStack_c0 = pauStack_c8;
        if ((float)pauStack_c8 <= 0.0) {
          pauStack_c0 = (undefined1 (*) [16])0x0;
        }
        if (1.0 <= (float)pauStack_c0) {
          pauStack_c0 = (undefined1 (*) [16])0x3f800000;
        }
        *(undefined1 (**) [16])((int)in_ECX[0x72] + 4) = pauStack_c0;
        goto LAB_0011df3f;
      }
    }
  }
  *(int *)((int)in_ECX[0x72] + 4) = 0x3f800000;
  *(int *)((int)in_ECX[0x72] + 8) = 0x3f800000;
LAB_0011df3f:
  pbVar1 = (byte *)((int)in_ECX[0x26] + 1);
  *pbVar1 = *pbVar1 & 0xfb;
  pauVar5 = *(undefined1 (**) [16])((int)in_ECX[6] + 0xc);
  pauStack_e4 = *(undefined1 (**) [16])(pauVar5[5] + 8);
  if (pauStack_e4 != (undefined1 (*) [16])0x0) {
    pauStack_e8 = (undefined1 (*) [16])0x11df5e;
    (**(code **)(*(int *)pauStack_e4 + 0x14))();
    pauStack_ec = *(undefined1 (**) [16])(pauVar5[5] + 8);
    pauStack_e8 = pauVar5;
    (**(code **)(*(int *)*pauStack_ec + 0x10))();
  }
  pauStack_e8 = *(undefined1 (**) [16])pauVar5[1];
  if (pauStack_e8 != (undefined1 (*) [16])0x0) {
    pauStack_e4 = (undefined1 (*) [16])(pauVar5[1] + 4);
    pauStack_ec = (undefined1 (*) [16])0x11df79;
    FUN_00234f90();
  }
  uVar20 = *(uint *)(pauVar5[4] + 4) & 0xfffffeff;
  *(uint *)(pauVar5[4] + 4) = uVar20;
  return CONCAT31((int3)(uVar20 >> 8),local_9d);
code_r0x0011caf9:
  piVar21 = piVar21 + 1;
  if (piVar21 == *(int **)(iVar16 + 0x30)) goto LAB_0011cb24;
  goto LAB_0011caf5;
}
