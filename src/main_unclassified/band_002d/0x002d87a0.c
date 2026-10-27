/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C173D6665B728D85F049F1E97A5894A8E445B551E050EB5F6A6DE339FC8CBF8D
 * Entry: 0x002d87a0, Ghidra index: 10251, label: FUN_002d87a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_002d87a0(int *param_1,uint *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *in_ECX;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  /* Original x87 0x002D8BDB..0x002D8BFC and SSE 0x002D8C00:
   * rounded F32 scalar stack results, not host pointers or byte-array
   * vector fields. The earlier local_7c/94/90 pointer lifetimes
   * remain distinct. Full x87 control-word/guest ABI UNVERIFIED. */
  float guest_inverse_length;
  float guest_scaled_length;
  float guest_rsqrt_length;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  float *local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float *local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined1 local_40 [12];
  undefined4 local_34;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  
  in_ECX[1] = in_ECX[1] + -1;
  if (in_ECX[1] < 0) {
    iVar3 = FUN_002c15b0(0,param_2);
    if (iVar3 != 0) {
      return 2;
    }
  }
  local_54 = 0;
  FUN_002b7360(param_3[2] + 0x10,*param_1 + 0x40,&local_60);
  iVar3 = *param_3;
  local_90 = (float *)((*param_2 & 0xffff) * 0x10 + iVar3);
  pfVar6 = (float *)((*(uint *)((int)param_2 + *(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc))) &
                     0xffff) * 0x10 + iVar3);
  pfVar7 = (float *)((*(uint *)((int)param_2 + *(int *)(&DAT_003b86e0 + ((uint)param_2 & 0xc))) &
                     0xffff) * 0x10 + iVar3);
  pfVar4 = (float *)((*(uint *)((int)(param_2 + ((int)(*param_2 * 2) >> 0x11)) +
                               *(int *)(&DAT_003b86f0 +
                                       ((uint)(param_2 + ((int)(*param_2 * 2) >> 0x11)) & 0xc))) &
                     0xffff) * 0x10 + iVar3);
  local_9c = 0;
  uVar1 = *(undefined8 *)(pfVar7 + 1);
  local_a8 = *pfVar7 - *local_90;
  local_a4 = (float)uVar1 - (float)*(undefined8 *)(local_90 + 1);
  fStack_a0 = (float)((ulonglong)uVar1 >> 0x20) -
              (float)((ulonglong)*(undefined8 *)(local_90 + 1) >> 0x20);
  local_7c = &local_60;
  local_6c = 0;
  local_78 = local_60 - *local_90;
  local_74 = local_5c - (float)*(undefined8 *)(local_90 + 1);
  fStack_70 = fStack_58 - (float)((ulonglong)*(undefined8 *)(local_90 + 1) >> 0x20);
  local_98 = local_40;
  local_34 = 0;
  uVar1 = *(undefined8 *)(pfVar6 + 1);
  fVar10 = *pfVar6 - *local_90;
  fVar12 = (float)uVar1 - (float)*(undefined8 *)(local_90 + 1);
  fVar14 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(local_90 + 1) >> 0x20);
  local_94 = local_50;
  local_44 = 0;
  uVar1 = *(undefined8 *)(pfVar4 + 1);
  fVar11 = *pfVar4 - *local_90;
  fVar13 = (float)uVar1 - (float)*(undefined8 *)(local_90 + 1);
  fVar15 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(local_90 + 1) >> 0x20);
  local_20 = fVar13 * fStack_a0 - fVar15 * local_a4;
  local_1c = fVar15 * local_a8 - fStack_a0 * fVar11;
  local_18 = local_a4 * fVar11 - fVar13 * local_a8;
  local_68 = (fVar14 * local_a4 - fStack_a0 * fVar12) * local_78 +
             local_74 * (fStack_a0 * fVar10 - fVar14 * local_a8) +
             fStack_70 * (fVar12 * local_a8 - local_a4 * fVar10);
  local_64 = local_20 * local_78 + local_74 * local_1c + fStack_70 * local_18;
  FUN_002cd2b0(&local_60);
  FUN_002cd2b0(&local_60);
  if (local_10 <= 0.0) {
    if (local_20 <= 0.0) {
      if ((local_68 < -1e-10) && (local_64 < -1e-10)) {
        in_ECX[3] = (int)local_5c;
        in_ECX[2] = (int)local_60;
        in_ECX[4] = (int)fStack_58;
        iVar3 = param_3[4];
        *(uint **)(iVar3 + 0x14) = param_2;
        *(undefined2 *)(iVar3 + 0x1a) = 5;
        return 3;
      }
      local_80 = 0;
      local_8c = fStack_70 * local_a4 - local_74 * fStack_a0;
      local_88 = fStack_a0 * local_78 - fStack_70 * local_a8;
      local_84 = local_74 * local_a8 - local_a4 * local_78;
      fVar8 = (float10)FUN_0010ff10(&local_a8);
      guest_inverse_length = (float)((float10)1.0 / fVar8);
      fVar8 = (float10)FUN_0010ff10(&local_8c);
      guest_scaled_length = (float)(fVar8 * (float10)guest_inverse_length);
      local_68 = guest_scaled_length;
      guest_rsqrt_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_68)));
      *(float *)(*in_ECX + 0x54) = guest_rsqrt_length * guest_scaled_length - *(float *)(*in_ECX + 0x50);
      fVar10 = local_a4 * local_8c;
      fVar11 = fStack_a0 * local_8c;
      fVar12 = local_84 * local_a8;
      local_8c = local_84 * local_a4 - local_88 * fStack_a0;
      local_84 = local_88 * local_a8 - fVar10;
      local_88 = fVar11 - fVar12;
      FUN_002c9620();
      iVar3 = *in_ECX;
      fVar10 = -(guest_rsqrt_length * guest_inverse_length);
      *(float *)(iVar3 + 0x60) = local_8c * fVar10;
      *(float *)(iVar3 + 100) = local_88 * fVar10;
      *(float *)(iVar3 + 0x68) = local_84 * fVar10;
      uVar1 = *(undefined8 *)(*param_1 + 0x54);
      uVar2 = *(undefined8 *)(param_3[2] + 0x54);
      iVar3 = *in_ECX;
      *(float *)(iVar3 + 0x58) =
           (*(float *)(*param_1 + 0x50) - *(float *)(param_3[2] + 0x50)) * *(float *)(iVar3 + 0x60)
           + ((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20)) *
             *(float *)(iVar3 + 0x68) + ((float)uVar1 - (float)uVar2) * *(float *)(iVar3 + 100);
      iVar3 = param_3[4];
      *(uint **)(iVar3 + 0x14) = param_2;
      *(undefined2 *)(iVar3 + 0x1a) = 1;
      return 1;
    }
  }
  else if ((local_20 <= 0.0) || (local_64 <= 0.0)) {
    uVar5 = FUN_002d6640(in_ECX,param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = FUN_002d6640(in_ECX,param_1,param_2 + ((int)(*param_2 << 1) >> 0x11),param_3);
  return uVar5;
}
