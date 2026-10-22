/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEA6AA4C4E02BF2294618D86AAD31C5C996F520680A39754301C283BB7140D97
 * Entry: 0x0002d710, Ghidra index: 300, label: FUN_0002d710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_0002d944_caseD_2[];
extern uint32_t switchD_0002d944_caseD_3[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0002d710(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 auVar10 [16];
  undefined4 local_198;
  int local_18c;
  int local_180;
  float local_17c;
  int local_178;
  float local_174;
  int *local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 local_14c;
  float local_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_104;
  float fStack_f8;
  float fStack_ec;
  undefined1 auStack_a8 [92];
  undefined4 uStack_4c;
  
  local_14c = 1;
  local_170 = (int *)FUN_000120f0();
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  local_148 = (float)(in_ECX[0xfa] + in_ECX[0xfb]);
  uVar5 = (int)local_148 - 1;
  if ((uint)in_ECX[0xf9] <= uVar5) {
    uVar5 = uVar5 - in_ECX[0xf9];
  }
  piVar1 = *(int **)(*(int *)(in_ECX[0xf8] + uVar5 * 4) + 0x58);
  local_18c = 0;
  if (((piVar1 == (int *)0x0) || ((*(byte *)(piVar1 + 0x1c) & 1) != 0)) ||
     (local_18c = FUN_000388b0(in_ECX[0xc6]), local_18c == 0)) {
    if (in_ECX[0x12a] != 3) {
      return 0;
    }
    if (piVar1 == (int *)0x0) goto LAB_0002d873;
  }
  iVar6 = (**(code **)(*piVar1 + 0x40))();
  fStack_158 = *(float *)(iVar6 + 0x2c);
  fStack_15c = *(float *)(iVar6 + 0x28);
  fStack_160 = *(float *)(iVar6 + 0x24);
  if (((in_ECX[0x12a] != 3) && (in_ECX[0x12a] != 1)) && (cVar4 = FUN_00023d00(), cVar4 == '\0')) {
    cVar4 = FUN_00023ee0();
    if (cVar4 == '\0') {
      FUN_00012320(0x5d);
      FUN_0004dff0(in_ECX + -0x10);
      FUN_00012440();
      return 0;
    }
    in_ECX[0x12a] = 1;
    in_ECX[0xd5] = 0;
    in_ECX[0xd3] = 0;
    *(byte *)(in_ECX + 0xd4) = *(byte *)(in_ECX + 0xd4) & 0xfa | 2;
  }
  cVar4 = FUN_00024080(in_ECX + -0x10,&fStack_160,0x3f800000);
  if (cVar4 != '\0') {
    return 0;
  }
LAB_0002d873:
  local_178 = 0;
  local_180 = 0;
  local_17c = 0.0;
  local_174 = 0.0;
  if ((piVar1 != (int *)0x0) && (local_18c != 0)) {
    iVar6 = (**(code **)(*local_170 + 0x40))();
    fStack_164 = fStack_158 - *(float *)(iVar6 + 0x2c);
    fStack_168 = fStack_15c - *(float *)(iVar6 + 0x28);
    fStack_16c = fStack_160 - *(float *)(iVar6 + 0x24);
    local_174 = SQRT(fStack_16c * fStack_16c + fStack_168 * fStack_168 + fStack_164 * fStack_164);
  }
  iVar6 = in_ECX[0x12a];
  local_198 = 3;
  piVar2 = local_170;
  do {
    bVar3 = true;
    local_170 = piVar2;
    switch(iVar6) {
    case 1:
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      fVar9 = (float10)FUN_00023e40();
      fVar8 = (float10)FUN_00023da0();
      fStack_110 = local_174;
      fStack_124 = (float)((fVar8 + (float10)(float)(fVar9 * (float10)3.0)) * (float10)0.25);
      auVar10 = rcpss(ZEXT416((uint)local_174),ZEXT416((uint)local_174));
      fStack_118 = auVar10._0_4_;
      fStack_120 = fStack_118 * fStack_16c;
      fStack_11c = fStack_118 * fStack_168;
      fStack_118 = fStack_118 * fStack_164;
      fStack_134 = -fStack_118;
      fStack_138 = -fStack_11c;
      fStack_13c = -fStack_120;
      fStack_130 = fStack_124 * fStack_13c;
      fStack_12c = fStack_124 * fStack_138;
      fStack_128 = fStack_124 * fStack_134;
      local_148 = fStack_128 + fStack_158;
      fStack_154 = fStack_12c + fStack_15c;
      fStack_140 = fStack_130 + fStack_160;
      in_ECX[0x5d] = (int)fStack_140;
      in_ECX[0x5e] = (int)fStack_154;
      in_ECX[0x5f] = (int)local_148;
      fStack_114 = fStack_118;
      fStack_104 = fStack_118;
      fStack_f8 = local_148;
      fStack_ec = fStack_128;
      if (local_174 < fStack_124 == (local_174 == fStack_124)) {
        fVar9 = (float10)FUN_00023e40();
        if (fVar9 < (float10)local_174) {
          local_198 = 4;
        }
        if (((((*(byte *)(in_ECX + 0xd4) & 1) != 0) && ((*(byte *)(in_ECX + 0xd4) >> 1 & 1) != 0))
            || (cVar4 = FUN_00012620(), cVar4 != '\0')) &&
           (cVar4 = FUN_0002e800(in_ECX + -0x10,local_18c), cVar4 == '\0')) {
          *(uint *)(local_18c + 0x80) = *(uint *)(local_18c + 0x80) | 0x40;
          *(undefined4 *)(local_18c + 0x84) = 0x40000000;
        }
        iVar6 = FUN_0017c5a0();
        if (iVar6 == 0) {
          return 0;
        }
        cVar4 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
        local_178 = in_ECX[0x110];
        local_180 = in_ECX[0x10e];
        local_17c = (float)in_ECX[0x10f];
        local_148 = local_17c;
        if (cVar4 == '\0') {
          iVar6 = FUN_00055aa0();
          *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) | 2;
          in_ECX[0x5f] = 0;
          in_ECX[0x5e] = 0;
          in_ECX[0x5d] = 0;
        }
        goto LAB_0002e1ad;
      }
      FUN_0004e8f0();
      in_ECX[0x12a] = 2;
      in_ECX[0x5f] = 0;
      in_ECX[0x5e] = 0;
      in_ECX[0x5d] = 0;
      FUN_00140a60(*(undefined4 *)(piVar2[2] + 0xbe8),piVar2,0xf937e583,0);
      break;
    case 2:
      goto switchD_0002d944_caseD_2;
    case 3:
      goto switchD_0002d944_caseD_3;
    default:
      return 0;
    case 5:
      iVar6 = FUN_0002ce60();
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*in_ECX + 0x2e0))(param_1);
        if (iVar6 != 2) goto LAB_0002de36;
        in_ECX[0x12a] = 2;
      }
      else {
        iVar6 = FUN_0002ced0(in_ECX + -0x10,iVar6);
        in_ECX[0x12a] = iVar6;
      }
      break;
    case 6:
      iVar6 = FUN_0002ce60();
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*in_ECX + 0x2f0))(param_1);
        bVar7 = iVar6 == 2;
LAB_0002df41:
        if (!bVar7) goto LAB_0002de36;
        in_ECX[0x12a] = 2;
      }
      else {
        iVar6 = FUN_0002ced0(in_ECX + -0x10,iVar6);
        in_ECX[0x12a] = iVar6;
      }
      break;
    case 7:
      FUN_0003f0e0(1);
switchD_0002d944_caseD_2:
      local_178 = 0;
      local_17c = 0.0;
      local_180 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      if (in_ECX[0xfb] == 0) {
        FUN_00022dc0();
        uStack_4c = 1;
        FUN_00055d30(auStack_a8);
        FUN_0001d470();
      }
      fStack_154 = (float)(in_ECX[0xfa] + in_ECX[0xfb]);
      uVar5 = (int)fStack_154 - 1;
      if ((uint)in_ECX[0xf9] <= uVar5) {
        uVar5 = uVar5 - in_ECX[0xf9];
      }
      if ((*(uint *)(*(int *)(in_ECX[0xf8] + uVar5 * 4) + 0x88) >> 0xd & 1) != 0) goto LAB_0002de36;
      iVar6 = FUN_0002ce60();
      if (iVar6 == 0) {
        cVar4 = FUN_00023ee0();
        if ((cVar4 != '\0') && (fVar9 = (float10)FUN_00023e40(), fVar9 < (float10)local_174)) {
          in_ECX[0x12a] = 1;
          FUN_0003f0e0(0);
        }
        goto LAB_0002de36;
      }
LAB_0002da7a:
      iVar6 = FUN_0002ced0(in_ECX + -0x10,iVar6);
      in_ECX[0x12a] = iVar6;
      break;
    case 8:
      iVar6 = FUN_0002ce60();
      if (iVar6 == 0) {
        if ((in_ECX[0x23d] != 0) &&
           (fStack_154 = (float)((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18), fStack_154 != 0.0)) {
          cVar4 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,&local_180,0,0x40000000);
          bVar7 = cVar4 == '\0';
          goto LAB_0002df41;
        }
        goto LAB_0002de36;
      }
      iVar6 = FUN_0002ced0(in_ECX + -0x10,iVar6);
      in_ECX[0x12a] = iVar6;
      break;
    case 9:
      bVar3 = false;
      iVar6 = FUN_0002ce60();
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*in_ECX + 0x390))(param_1);
        if (iVar6 != 2) goto LAB_0002de36;
        if (((*(byte *)(in_ECX + 0xdc) & 1) == 0) || ((float)in_ECX[0xdb] <= 0.0)) {
          if (((*(byte *)(in_ECX + 0xd8) & 1) != 0) && (0.0 < (float)in_ECX[0xd7])) {
            in_ECX[0xd9] = 0;
            in_ECX[0xd7] = 0;
            *(byte *)(in_ECX + 0xd8) = *(byte *)(in_ECX + 0xd8) & 0xfa | 2;
            FUN_000124f0(0x3f800000);
          }
        }
        else {
          in_ECX[0xdd] = 0;
          in_ECX[0xdb] = 0;
          *(byte *)(in_ECX + 0xdc) = *(byte *)(in_ECX + 0xdc) & 0xfa | 2;
          FUN_000124f0(0x3f800000);
        }
      }
      else {
        iVar6 = FUN_0002ced0(in_ECX + -0x10,iVar6);
        in_ECX[0x12a] = iVar6;
      }
      break;
    case 10:
      bVar3 = false;
      iVar6 = FUN_0002ce60();
      if (iVar6 != 0) goto LAB_0002da7a;
      iVar6 = (**(code **)(*in_ECX + 0x3a0))(param_1);
      if (iVar6 == 2) {
        if (((*(byte *)(in_ECX + 0xdc) & 1) == 0) || ((float)in_ECX[0xdb] <= 0.0)) {
          if (((*(byte *)(in_ECX + 0xd8) & 1) != 0) && (0.0 < (float)in_ECX[0xd7])) {
            in_ECX[0xd9] = 0;
            in_ECX[0xd7] = 0;
            *(byte *)(in_ECX + 0xd8) = *(byte *)(in_ECX + 0xd8) & 0xfa | 2;
            FUN_000124f0(0x3f800000);
          }
        }
        else {
          in_ECX[0xdd] = 0;
          in_ECX[0xdb] = 0;
          *(byte *)(in_ECX + 0xdc) = *(byte *)(in_ECX + 0xdc) & 0xfa | 2;
          FUN_000124f0(0x3f800000);
        }
        break;
      }
      goto LAB_0002de36;
    }
    iVar6 = in_ECX[0x12a];
    piVar2 = local_170;
  } while( true );
switchD_0002d944_caseD_3:
  iVar6 = FUN_0017c5a0();
  if (iVar6 != 0) {
    cVar4 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
    local_178 = in_ECX[0x110];
    local_180 = in_ECX[0x10e];
    local_17c = (float)in_ECX[0x10f];
    local_148 = local_17c;
    if (cVar4 == '\0') {
      iVar6 = FUN_00055aa0();
      *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) | 2;
      in_ECX[0x12a] = 2;
    }
  }
  iVar6 = FUN_00055aa0();
  if ((*(uint *)(iVar6 + 0x88) & 0x800) == 0) {
LAB_0002de36:
    if (piVar1 == (int *)0x0) goto LAB_0002e1a7;
  }
  else if (piVar1 == (int *)0x0) {
    return 2;
  }
  if (local_18c != 0) {
    in_ECX[0x112] = (int)fStack_16c;
    in_ECX[0x113] = (int)fStack_168;
    in_ECX[0x114] = (int)fStack_164;
    local_148 = fStack_168;
    in_ECX[0x113] = 0;
    FUN_0001fd40();
    FUN_00024f80(in_ECX + -0x10,piVar1,0x41c80000,0);
  }
LAB_0002e1a7:
  if (bVar3) {
LAB_0002e1ad:
    FUN_000255d0(param_1,0);
    FUN_0004d970(in_ECX + -0x10,param_1,local_198,0,0);
  }
  return local_14c;
}
