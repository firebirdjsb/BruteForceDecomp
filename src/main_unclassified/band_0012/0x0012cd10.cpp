/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AC6715802AE8AAD5CF7620719703E3793D02B4145B324328D60B792249E16C3
 * Entry: 0x0012cd10, Ghidra index: 3800, label: FUN_0012cd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05a0;
extern uint32_t DAT_003c05dc;
extern uint32_t DAT_003c05e0;
extern uint32_t DAT_003c05e4;
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_LAB_0039dbbc;
extern uint32_t _DAT_003c0584;
extern uint32_t _DAT_003c058c;
extern uint32_t _DAT_003c059c;
extern uint32_t _DAT_003c05a4; /* 0x12d6d0 FCOMP / 0x12d70d FMUL m32fp */
extern uint32_t _DAT_003c05a8;
extern uint32_t _DAT_003c05c0; /* 0x12d64d FLD / 0x12d653 FMUL m32fp */
extern uint32_t _DAT_003c05d4; /* 0x12d2e8 FMUL m32fp */
extern uint32_t _DAT_003c05d8; /* 0x12d2ee FADD m32fp */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012cd10(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_238;
  float fStack_234;
  float fStack_230;
  float stack_22c[3]; /* Original contiguous 12-byte stack vector. */
  float stack_220[3]; /* Original contiguous 12-byte stack vector. */
  float local_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float stack_200[3]; /* Original contiguous 12-byte stack vector. */
  float stack_1f4[3]; /* Original contiguous 12-byte stack vector. */
  float stack_1e8[3]; /* Original contiguous 12-byte stack vector. */
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined **appuStack_194 [65];
  undefined4 uStack_90;
  undefined1 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  
  if (param_2 <= 1.1920929e-07) {
    local_210 = 0.0;
  }
  else {
    local_210 = 1.0 / param_2;
  }
  pfVar8 = (float *)FUN_00066160();
  local_1d8 = pfVar8[1];
  local_1d4 = pfVar8[2];
  local_1dc = *pfVar8;
  local_1d0 = local_1dc + *(float *)(param_1[0x1b] + 0x38);
  local_1c8 = local_1d4 + *(float *)(param_1[0x1b] + 0x40);
  stack_220[2] = (float)param_1[0x11b];
  stack_220[1] = (float)param_1[0x10e] - *(float *)(param_1[3] + 0x2ac);
  stack_220[0] = (float)param_1[0x119];
  local_214 = stack_220[2];
  stack_200[0] = stack_220[0];
  stack_200[1] = stack_220[1];
  stack_200[2] = stack_220[2];
  local_1cc = stack_220[1];
  if ((((*(byte *)((int)param_1 + 0x261) & 0x40) == 0) && ((int *)param_1[0x7f] != (int *)0x0)) &&
     (*(int *)param_1[0x7f] == 0x23)) {
    FUN_0012bf40();
  }
  if ((0.0 < (float)param_1[0x99]) &&
     (param_1[0x99] = (int)((float)param_1[0x99] - param_2), (float)param_1[0x99] < 0.0)) {
    param_1[0x99] = 0;
  }
  if ((((*(byte *)((int)param_1 + 0x261) & 0x40) == 0) ||
      ((char)*(byte *)((int)param_1 + 0x261) < '\0')) && (param_1[0x7c] == 0)) {
    stack_1f4[0] = local_1d0 - (float)param_1[0x119];
    stack_1f4[1] = local_1cc - (float)param_1[0x11a];
    stack_1f4[2] = local_1c8 - (float)param_1[0x11b];
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    if (((iVar9 == 0) || (*(int *)(iVar9 + 0x24) == 0)) ||
       ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)) {
      FUN_0012cb40(param_2);
    }
    else {
      FUN_0012c6c0(param_1,&stack_1f4[0],param_2,&stack_22c[0]);
    }
  }
  else {
    if ((param_1[0x7c] != 4) ||
       (0.09 <= (float)param_1[0x17c] * (float)param_1[0x17c] +
                (float)param_1[0x17b] * (float)param_1[0x17b] +
                (float)param_1[0x17a] * (float)param_1[0x17a])) {
      param_1[0x11c] = (int)(_DAT_003c058c * (float)param_1[0x11c]);
      param_1[0x11e] = (int)(_DAT_003c058c * (float)param_1[0x11e]);
    }
    else {
      param_1[0x11d] = 0;
    }
    stack_22c[0] = param_2 * (float)param_1[0x11c];
    stack_22c[1] = param_2 * (float)param_1[0x11d];
    stack_22c[2] = param_2 * (float)param_1[0x11e];
  }
  if ((*(byte *)((int)param_1 + 0x262) & 4) != 0) {
    param_1[0x11d] = (int)((float)param_1[0x11d] - _DAT_003c0584 * param_2);
  }
  if (param_1[0x7c] == 2) {
    param_1[0x1ba] = (int)local_1cc;
    param_1[0x7c] = 3;
  }
  FUN_0012c020(param_1,param_2,&stack_22c[0]);
  /* 0x12d04b..0x12d067: x87 sum in Z,Y,X order, then an m32fp spill.
   * float10 is a host proxy; x87 precision/control/status remain unverified.
   * 0x12d06b SQRTSS stores only its low DWORD at 0x12d071. These intrinsic
   * temporaries model that scalar result, not guest XMM0. The original upper
   * 96 bits at calls/entry/exit remain unresolved and are not zero-filled. */
  {
    float10 squared = (float10)stack_22c[2] * stack_22c[2];
    squared = (float10)stack_22c[1] * stack_22c[1] + squared;
    squared = (float10)stack_22c[0] * stack_22c[0] + squared;
    local_214 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((float)squared)));
  }
  bVar10 = false;
  if ((_DAT_003c059c < local_214 * local_210) || (param_1[0x7c] != 0)) {
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_80 = 0;
    appuStack_194[0] = &PTR_LAB_0039dbbc;
    piStack_7c = param_1;
    iStack_78 = param_1[0x1b];
    uStack_88 = 0xea;
    uStack_84 = 0x15a0000;
    bVar10 = true;
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    uVar4 = DAT_003c05e0;
    if ((iVar9 == 0) ||
       ((*(int *)(iVar9 + 0x24) == 0 || ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)))) {
      iVar9 = (**(code **)(*param_1 + 0xf4))();
      if ((iVar9 == 0) || ((*(uint *)(iVar9 + 0x3c4) & 0x1000) == 0)) {
        uStack_88 = uStack_88 & 0xffffffbf;
      }
      iVar9 = *(int *)(param_1[2] + 0xc54);
      *(undefined4 *)(iVar9 + 0xb4) = 3;
      *(undefined4 *)(iVar9 + 0xb8) = 3;
      *(undefined4 *)(iVar9 + 0xbc) = 2;
    }
    else {
      iVar9 = *(int *)(param_1[2] + 0xc54);
      *(undefined4 *)(iVar9 + 0xb4) = DAT_003c05dc;
      uVar5 = DAT_003c05e4;
      *(undefined4 *)(iVar9 + 0xb8) = uVar4;
      *(undefined4 *)(iVar9 + 0xbc) = uVar5;
    }
    if (((*(byte *)((int)param_1 + 0x262) & 4) == 0) && (param_1[0x7c] == 0)) {
      stack_1f4[2] = stack_22c[2];
      /* 0x12d1eb..0x12d27f: original x87 m32fp loads and Z,Y,X sums.
       * The projection and original-vector norm stay unspilled; residual
       * components and their norm spill at the observed DWORD stores. */
      float normal_x = bf_x86_word_to_f32((uint32_t)param_1[0x113]);
      float normal_y = bf_x86_word_to_f32((uint32_t)param_1[0x114]);
      float normal_z = bf_x86_word_to_f32((uint32_t)param_1[0x115]);
      float10 projection = (float10)stack_22c[2] * normal_z;
      float10 squared;
      projection = (float10)stack_22c[1] * normal_y + projection;
      projection = (float10)stack_22c[0] * normal_x + projection;
      fStack_20c = (float)((float10)stack_22c[0] - projection * normal_x);
      fStack_208 = (float)((float10)stack_22c[1] - projection * normal_y);
      fStack_204 = (float)((float10)stack_22c[2] - projection * normal_z);
      squared = (float10)stack_22c[2] * stack_22c[2];
      squared = (float10)stack_22c[1] * stack_22c[1] + squared;
      squared = (float10)stack_22c[0] * stack_22c[0] + squared;
      {
        float10 residual_squared = (float10)fStack_204 * fStack_204;
        residual_squared = (float10)fStack_208 * fStack_208 + residual_squared;
        residual_squared = (float10)fStack_20c * fStack_20c + residual_squared;
        fVar3 = (float)residual_squared;
      }
      /* 0x12d283/294 TEST AH,0x41 rejects unordered as well as <=.
       * Original [0x003a5150] is exactly binary32 0x28800000 (2^-46). */
      if (!(squared > 0x1p-46L) || !(fVar3 > 0x1p-46f)) {
        stack_22c[0] = 0.0;
        stack_22c[1] = 0.0;
        stack_22c[2] = 0.0;
      }
      else {
        /* 0x12d2a1 spills squared before SQRTSS; 0x12d2b9 uses actual
         * RSQRTSS, not 1/sqrt. Only their MOVSS-to-memory low words feed
         * 0x12d2c5..0x12d2fe. No upper guest XMM state is manufactured. */
        float root = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((float)squared)));
        float inverse = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar3)));
        float10 scale = (float10)inverse * root;
        stack_22c[0] = (float)((float10)fStack_20c * scale);
        stack_22c[1] = (float)((float10)fStack_208 * scale -
            ((float10)local_214 * bf_x86_word_to_f32(_DAT_003c05d4) +
             bf_x86_word_to_f32(_DAT_003c05d8)));
        stack_22c[2] = (float)(scale * fStack_204);
        fStack_230 = fVar3;
      }
    }
    iVar9 = param_1[3];
    fStack_234 = *(float *)(iVar9 + 0x1d4);
    if ((param_1[0x7e] == 6) || (param_1[0x7e] == 7)) {
      local_238 = *(undefined4 *)(iVar9 + 0x1dc);
    }
    else {
      local_238 = *(undefined4 *)(iVar9 + 0x1d8);
    }
    FUN_00153810(*(undefined4 *)(param_1[2] + 0xc54),param_1[2],param_1,appuStack_194,fStack_234,
                 local_238,param_2,&stack_200[0],&stack_22c[0],&stack_220[0]);
  }
  else {
    *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) & 0xfe;
    if ((*(char *)((int)param_1 + 0x43d) == '\x01') && (param_1[0x112] == 0)) {
      *(byte *)((int)param_1 + 0x262) = *(byte *)((int)param_1 + 0x262) | 4;
    }
  }
  fStack_20c = stack_220[0] - stack_200[0];
  fStack_208 = stack_220[1] - stack_200[1];
  fStack_204 = stack_220[2] - stack_200[2];
  param_1[0x1c4] = (int)(fStack_20c * local_210);
  param_1[0x1c5] = (int)(fStack_208 * local_210);
  param_1[0x1c6] = (int)(fStack_204 * local_210);
  piVar1 = (int *)param_1[0x7f];
  if (((((piVar1 == (int *)0x0) ||
        (((iVar9 = *piVar1, iVar9 != 0x13 && (iVar9 != 0)) && (iVar9 != 0x2b)))) &&
       (param_1[0x7e] != 6)) && ((piVar1 == (int *)0x0 || (*piVar1 != 0x2e)))) ||
     ((bVar10 || (param_1[0x7c] != 0)))) {
    fStack_230 = 0.0;
    fStack_234 = (float)param_1[0x163] - param_2 * 5.0;
    fVar2 = 0.0;
    if (0.0 <= fStack_234) {
      fVar2 = fStack_234;
    }
    param_1[0x163] = (int)fVar2;
  }
  else {
    fStack_234 = param_2 + (float)param_1[0x163];
    fStack_230 = DAT_003c05a0;
    fVar2 = DAT_003c05a0;
    if (fStack_234 <= DAT_003c05a0) {
      fVar2 = fStack_234;
    }
    param_1[0x163] = (int)fVar2;
  }
  local_210 = *(float *)(param_1[3] + 0x2ac) + stack_220[1];
  if (((DAT_003c05a0 <= (float)param_1[0x163]) && ((*(byte *)((int)param_1 + 0x261) & 0x40) == 0))
     || (param_1[0x7c] == 1)) {
    FUN_0023d6e0(local_210);
  }
  else {
    fStack_234 = 1.0;
    fStack_230 = (float)param_1[0x163] / DAT_003c05a0;
    fVar2 = fStack_230;
    if (1.0 <= fStack_230) {
      fVar2 = 1.0;
    }
    stack_1e8[1] = stack_220[1];
    stack_1e8[0] = (local_1d0 - stack_220[0]) * fVar2 + stack_220[0];
    stack_1e8[2] = (local_1c8 - stack_220[2]) * fVar2 + stack_220[2];
    local_210 = *(float *)(param_1[3] + 0x2ac) + stack_220[1];
    FUN_0023d6e0(local_210);
    stack_1f4[0] = local_1d0 - stack_1e8[0];
    stack_1f4[1] = local_1cc - stack_1e8[1];
    stack_1f4[2] = local_1c8 - stack_1e8[2];
    stack_1e8[0] = stack_1e8[0] - local_1dc;
    stack_1e8[1] = stack_1e8[1] - local_1d8;
    stack_1e8[2] = stack_1e8[2] - local_1d4;
    FUN_0023d4f0(&stack_1e8[0]);
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    if ((((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0)) &&
        ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) != 0)) &&
       (((param_1[0x7c] != 0 || (param_1[0x7e] == 8)) ||
        ((cVar6 = FUN_00126a40(), cVar6 != '\0' ||
         ((float10)bf_x86_word_to_f32(_DAT_003c05c0) *
              bf_x86_word_to_f32(_DAT_003c05c0) <
          ((float10)stack_1f4[2] * stack_1f4[2] + (float10)stack_1f4[1] * stack_1f4[1]) +
              (float10)stack_1f4[0] * stack_1f4[0])))))) {
      FUN_002368d0(1);
    }
  }
  if (!bVar10) goto LAB_0012d7a3;
  *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) & 0xfe;
  if (param_1[0x7c] == 0) {
    if (1.1920929e-07 < local_214) {
      /* 0x12d709..0x12d733 retains length*factor in x87, then squares
       * that product; do not round it through a binary32 temporary. */
      float10 limit = (float10)local_214 * bf_x86_word_to_f32(_DAT_003c05a4);
      bVar7 = *(byte *)((int)param_1 + 0x261) ^
              (*(byte *)((int)param_1 + 0x261) ^
              (((float10)fStack_204 * fStack_204 + (float10)fStack_208 * fStack_208) +
                  (float10)fStack_20c * fStack_20c < limit * limit)) & 1;
      goto LAB_0012d757;
    }
  }
  else if (0x1p-23L < fabsl((float10)stack_22c[1])) {
    bVar7 = *(byte *)((int)param_1 + 0x261) ^
            (*(byte *)((int)param_1 + 0x261) ^
             (fabsl((float10)fStack_208 / stack_22c[1]) <
                 bf_x86_word_to_f32(_DAT_003c05a4))) & 1;
LAB_0012d757:
    *(byte *)((int)param_1 + 0x261) = bVar7;
  }
  if ((*(byte *)((int)param_1 + 0x261) & 1) != 0) {
    if ((*(byte *)((int)param_1 + 0x261) & 0x40) != 0) {
      FUN_0012bf40();
    }
    if ((float)param_1[0x11d] < _DAT_003c05a8) {
      *(byte *)((int)param_1 + 0x262) = *(byte *)((int)param_1 + 0x262) & 0xfb;
    }
  }
LAB_0012d7a3:
  bVar10 = false;
  if ((*(byte *)((int)param_1 + 0x262) & 4) == 0) {
    bVar10 = param_1[0x7c] == 3;
    if (bVar10) {
      FUN_0012b740(stack_220[1]);
    }
    param_1[0x11d] = 0;
  }
  else if (param_1[0x7c] == 0) {
    FUN_0012b950();
  }
  if (*(char *)((int)param_1 + 0x43d) == '\x01') {
    bVar11 = param_1[0x112] == 0;
  }
  else {
    bVar11 = *(char *)((int)param_1 + 0x43d) == '\0';
  }
  if (bVar11) {
    FUN_0012dc00(0x3f800000,0x41a00000,&fStack_234);
  }
  if ((bVar10) && ((short)param_1[0x41] < 1)) {
    uStack_1a8 = 0;
    uStack_1ac = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1bc = 0;
    uStack_1c0 = 0;
    uStack_1a4 = 0x3f800000;
    uStack_1b4 = 0x3f800000;
    uStack_1c4 = 0x3f800000;
    fStack_234 = (float)param_1[0x10e];
    iVar9 = param_1[0x1b];
    fStack_230 = *(float *)(iVar9 + 0x40);
    uStack_1a0 = *(undefined4 *)(iVar9 + 0x38);
    fStack_19c = fStack_234;
    uStack_198 = fStack_230;
    FUN_000def50(0x3f800000);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    FUN_0003f010();
    fStack_230 = *(float *)(iVar9 + 0x40);
    fStack_234 = *(float *)(iVar9 + 0x3c);
    uStack_74 = *(undefined4 *)(iVar9 + 0x38);
    uStack_68 = 1;
    fStack_70 = fStack_234;
    uStack_6c = fStack_230;
    FUN_0017c020(&uStack_74);
  }
  param_1[0x119] = (int)stack_220[0];
  param_1[0x11a] = (int)stack_220[1];
  param_1[0x11b] = (int)stack_220[2];
  param_1[0x116] = (int)(stack_220[0] - local_1dc);
  param_1[0x117] = (int)(stack_220[1] - local_1d8);
  param_1[0x118] = (int)(stack_220[2] - local_1d4);
  param_1[0x10e] = (int)(local_210 - local_1d8);
  return;
}
