/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D500DE61C69517CCD74E13AA3A0A82E8EC4C365170F96B24917FF6C742A9F452
 * Entry: 0x0011e9d0, Ghidra index: 3633, label: FUN_0011e9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
#include <xmmintrin.h>
#include "../../contracts/bf_0001fc40_getter_operations.h"
#include "../../contracts/bf_00232180_index0_copy.h"
#include "../../contracts/bf_002334b0_matrix_operation.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011e9d0(int *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  int iVar5;
  int iVar6;
  float auVar7;
  float packed_7[4];
  float auVar8[4];
  void *puVar9;
  float matrix_product[9];
  float fStack_cc;
  float local_c8;
  float direction_c4[3];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float scratch_a8[3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float cached_78[3];
  float auStack_6c[9];
  float auStack_48[9];
  
  iVar6 = 0;
  param_1[0x165] = 0;
  bf_x86_store_f32_word((uint32_t *)(param_1 + 0x201),param_2);
  bf_x86_store_f32_word((uint32_t *)(param_1 + 0x203),param_4);
  bf_x86_store_f32_word((uint32_t *)(param_1 + 0x202),param_3);
  *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) | 1;
  local_b8 = param_3;
  if (param_1[0x9a] != -1) {
    iVar5 = param_1[0xba];
    cVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
    if (((cVar2 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
       (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14)) {
      iVar5 = param_1[0xba];
      cVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
      if (((cVar2 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
         (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14)) {
        iVar6 = iVar5;
      }
      if (iVar6 != 0) {
        iVar5 = param_1[0xfa];
        if ((iVar5 == 0) || (iVar5 == -1)) {
          iVar5 = param_1[0x1b];
          fStack_88 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_8c = *(float *)(iVar5 + 0x3c);
        }
        else {
          fStack_88 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_8c = *(float *)(iVar5 + 0x3c);
        }
        fStack_88 = bf_x86_word_to_f32((uint32_t)param_1[0x203]) - fStack_88;
        fStack_8c = bf_x86_word_to_f32((uint32_t)param_1[0x202]) - fStack_8c;
        local_b8 = fStack_8c * fStack_8c +
                   fStack_88 * fStack_88 +
                   (bf_x86_word_to_f32((uint32_t)param_1[0x201]) - fVar1) * (bf_x86_word_to_f32((uint32_t)param_1[0x201]) - fVar1);
        if (local_b8 < 6.25) {
          bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
          pfVar3 = scratch_a8;
          direction_c4[2] = -pfVar3[2];
          direction_c4[1] = -pfVar3[1];
          direction_c4[0] = -*pfVar3;
        }
        else {
          /* Original EBX=iVar6, ESI=scratch_a8, EDI=cached_78,
           * pushed index=0; this memory operation does not emulate RET 4. */
          if ((*(const byte *)((uintptr_t)(uint32_t)iVar6 + 0x225) & 1) == 0) {
            FUN_0022e780((int *)(uintptr_t)(uint32_t)iVar6);
          }
          bf_00232180_index0_copy(scratch_a8,cached_78,(const void *)(uintptr_t)(uint32_t)iVar6);
          iVar5 = param_1[0xff];
          if ((iVar5 == 0) || (iVar5 == -1)) {
            iVar5 = (**(code **)(*param_1 + 0x40))();
            pfVar3 = (float *)(iVar5 + 0x24);
          }
          else {
            pfVar3 = (float *)(iVar5 + 0x38);
          }
          memcpy(cached_78 + 1,pfVar3 + 1,8);
          fStack_ac = param_4 - pfVar3[2];
          fStack_b0 = param_3 - pfVar3[1];
          fStack_b4 = param_2 - *pfVar3;
          fVar1 = fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fStack_b4 * fStack_b4;
          if (1.4210855e-14 <= fVar1) {
            auVar8[0] = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar1)));
            fStack_94 = auVar8[0];
            direction_c4[0] = fStack_94 * fStack_b4;
            fStack_98 = fStack_94 * fStack_b0;
            fStack_94 = fStack_94 * fStack_ac;
            fStack_90 = direction_c4[0];
            fStack_8c = fStack_98;
            fStack_88 = fStack_94;
          }
          else {
            fStack_b4 = scratch_a8[0];
            fStack_b0 = scratch_a8[1];
            fStack_ac = scratch_a8[2];
            fStack_98 = scratch_a8[1];
            fStack_94 = scratch_a8[2];
            direction_c4[0] = scratch_a8[0];
          }
          fStack_9c = direction_c4[0];
          if (25.0 <= local_b8) {
            direction_c4[1] = fStack_98;
            direction_c4[2] = fStack_94;
          }
          else {
            local_b8 = (_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(local_b8))) - 2.5) * 0.4;
            bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
            pfVar3 = scratch_a8;
            fStack_7c = -pfVar3[2];
            fStack_80 = -pfVar3[1];
            fStack_84 = -*pfVar3;
            fStack_90 = local_b8 * fStack_9c;
            fStack_8c = local_b8 * fStack_98;
            fVar1 = 1.0 - local_b8;
            cached_78[1] = fStack_8c;
            cached_78[2] = local_b8 * fStack_94;
            auVar8[0] = fVar1 * fStack_84;
            auVar8[1] = fVar1 * 0.0;
            auVar8[2] = fVar1 * fStack_80;
            auVar8[3] = fVar1 * fStack_7c;
            scratch_a8[1] = auVar8[2];
            scratch_a8[2] = auVar8[3];
            direction_c4[2] = local_b8 * fStack_94 + auVar8[3];
            direction_c4[1] = fStack_8c + auVar8[2];
            direction_c4[0] = fStack_90 + auVar8[0];
            auVar7 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(direction_c4[1] * direction_c4[1] +
                                    direction_c4[2] * direction_c4[2] + direction_c4[0] * direction_c4[0])));
            local_b8 = auVar7;
            direction_c4[0] = local_b8 * direction_c4[0];
            direction_c4[1] = direction_c4[1] * local_b8;
            direction_c4[2] = direction_c4[2] * local_b8;
            scratch_a8[0] = auVar8[0];
            fStack_88 = auVar8[3];
            cached_78[0] = fStack_90;
          }
        }
        if ((param_1[0x102] == 0) || (param_1[0x102] == -1)) {
          bf_0001fdd0_produce(scratch_a8,(const void *)((uintptr_t)(uint32_t)param_1[0x1b] + 0x14));
          pfVar3 = scratch_a8;
          fVar1 = -(direction_c4[0] * *pfVar3 + direction_c4[1] * pfVar3[1] + direction_c4[2] * pfVar3[2]);
        }
        else {
          bf_0001fdd0_produce(scratch_a8,(const void *)((uintptr_t)(uint32_t)param_1[0x102] + 0x14));
          pfVar3 = scratch_a8;
          fVar1 = direction_c4[0] * *pfVar3 + direction_c4[1] * pfVar3[1] + direction_c4[2] * pfVar3[2];
        }
        if (fVar1 <= 0.0) {
          bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
          pfVar3 = scratch_a8;
          direction_c4[2] = -pfVar3[2];
          direction_c4[1] = -pfVar3[1];
          direction_c4[0] = -*pfVar3;
          FUN_00232290(iVar6,0,auStack_6c,direction_c4);
          /* Original EAX=temp+0xb8, ECX=self+0x278, EDX=input.
           * EAX remains the supplied output; no pointer return is invented. */
          bf_002334b0_produce(matrix_product,(const unsigned char *)param_1 + 0x278,auStack_6c);
          memcpy(auStack_48,matrix_product,16);
          memcpy(auStack_48 + 8,matrix_product + 8,4);
          memcpy(auStack_48 + 4,matrix_product + 4,16);
          puVar9 = auStack_48;
        }
        else {
          FUN_00232290(iVar6,0,auStack_48,direction_c4);
          /* Original EAX=temp+0xb8, ECX=self+0x29c, EDX=input.
           * EAX remains the supplied output; no pointer return is invented. */
          bf_002334b0_produce(matrix_product,(const unsigned char *)param_1 + 0x29c,auStack_48);
          memcpy(auStack_6c,matrix_product,16);
          memcpy(auStack_6c + 8,matrix_product + 8,4);
          memcpy(auStack_6c + 4,matrix_product + 4,16);
          puVar9 = auStack_6c;
        }
        FUN_0003d7a0(param_1 + 0xbb,puVar9);
      }
    }
  }
  if (param_1[0x9b] != -1) {
    iVar6 = param_1[0xba];
    cVar2 = (**(code **)(*(int *)(iVar6 + 0x178) + 0x20))();
    if ((cVar2 != '\0') && (*(int *)(iVar6 + 0x198) != 0)) {
      iVar6 = param_1[0xba];
      cVar2 = (**(code **)(*(int *)(iVar6 + 0x178) + 0x20))();
      if (cVar2 == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x198);
      }
      if (iVar6 != 0) {
        iVar5 = param_1[0xfa];
        if ((iVar5 == 0) || (iVar5 == -1)) {
          iVar5 = param_1[0x1b];
          local_c8 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_cc = *(float *)(iVar5 + 0x3c);
        }
        else {
          local_c8 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_cc = *(float *)(iVar5 + 0x3c);
        }
        local_c8 = bf_x86_word_to_f32((uint32_t)param_1[0x203]) - local_c8;
        fStack_cc = bf_x86_word_to_f32((uint32_t)param_1[0x202]) - fStack_cc;
        scratch_a8[1] = fStack_cc;
        scratch_a8[2] = local_c8;
        local_b8 = fStack_cc * fStack_cc +
                   local_c8 * local_c8 +
                   (bf_x86_word_to_f32((uint32_t)param_1[0x201]) - fVar1) * (bf_x86_word_to_f32((uint32_t)param_1[0x201]) - fVar1);
        if (local_b8 < 6.25) {
          bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
          pfVar3 = scratch_a8;
          direction_c4[2] = -pfVar3[2];
          direction_c4[1] = -pfVar3[1];
          direction_c4[0] = -*pfVar3;
        }
        else {
          /* Original EBX=iVar6, ESI=scratch_a8, EDI=cached_78,
           * pushed index=0; this memory operation does not emulate RET 4. */
          if ((*(const byte *)((uintptr_t)(uint32_t)iVar6 + 0x225) & 1) == 0) {
            FUN_0022e780((int *)(uintptr_t)(uint32_t)iVar6);
          }
          bf_00232180_index0_copy(scratch_a8,cached_78,(const void *)(uintptr_t)(uint32_t)iVar6);
          iVar5 = param_1[0xfe];
          if ((iVar5 == 0) || (iVar5 == -1)) {
            iVar5 = (**(code **)(*param_1 + 0x40))();
            pfVar3 = (float *)(iVar5 + 0x24);
          }
          else {
            pfVar3 = (float *)(iVar5 + 0x38);
          }
          memcpy(cached_78 + 1,pfVar3 + 1,8);
          fStack_ac = param_4 - pfVar3[2];
          fStack_b0 = param_3 - pfVar3[1];
          fStack_b4 = param_2 - *pfVar3;
          fVar1 = fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fStack_b4 * fStack_b4;
          if (1.4210855e-14 <= fVar1) {
            auVar8[0] = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar1)));
            fStack_94 = auVar8[0];
            scratch_a8[0] = fStack_94 * fStack_b4;
            fStack_98 = fStack_94 * fStack_b0;
            fStack_94 = fStack_94 * fStack_ac;
            scratch_a8[1] = fStack_98;
            scratch_a8[2] = fStack_94;
          }
          else {
            fStack_b4 = scratch_a8[0];
            fStack_b0 = scratch_a8[1];
            fStack_ac = scratch_a8[2];
            fStack_98 = scratch_a8[1];
            fStack_94 = scratch_a8[2];
          }
          fStack_9c = scratch_a8[0];
          if (25.0 <= local_b8) {
            direction_c4[0] = scratch_a8[0];
            direction_c4[1] = fStack_98;
            direction_c4[2] = fStack_94;
          }
          else {
            local_b8 = (_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(local_b8))) - 2.5) * 0.4;
            bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
            pfVar3 = scratch_a8;
            fStack_7c = -pfVar3[2];
            fStack_80 = -pfVar3[1];
            fStack_84 = -*pfVar3;
            scratch_a8[0] = local_b8 * fStack_9c;
            fStack_8c = local_b8 * fStack_98;
            fVar1 = 1.0 - local_b8;
            scratch_a8[1] = fStack_8c;
            scratch_a8[2] = local_b8 * fStack_94;
            auVar7 = fVar1 * fStack_84;
            packed_7[1] = fVar1 * 0.0;
            packed_7[2] = fVar1 * fStack_80;
            packed_7[3] = fVar1 * fStack_7c;
            cached_78[1] = packed_7[2];
            cached_78[2] = packed_7[3];
            direction_c4[2] = local_b8 * fStack_94 + packed_7[3];
            direction_c4[1] = fStack_8c + packed_7[2];
            direction_c4[0] = scratch_a8[0] + auVar7;
            auVar8[0] = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(direction_c4[1] * direction_c4[1] +
                                    direction_c4[2] * direction_c4[2] + direction_c4[0] * direction_c4[0])));
            local_b8 = auVar8[0];
            direction_c4[0] = local_b8 * direction_c4[0];
            direction_c4[1] = direction_c4[1] * local_b8;
            direction_c4[2] = direction_c4[2] * local_b8;
            fStack_90 = scratch_a8[0];
            fStack_88 = packed_7[3];
            cached_78[0] = auVar7;
          }
        }
        if ((param_1[0x102] == 0) || (param_1[0x102] == -1)) {
          bf_0001fdd0_produce(scratch_a8,(const void *)((uintptr_t)(uint32_t)param_1[0x1b] + 0x14));
          pfVar3 = scratch_a8;
          fVar1 = -(direction_c4[0] * *pfVar3 + direction_c4[1] * pfVar3[1] + direction_c4[2] * pfVar3[2]);
        }
        else {
          bf_0001fdd0_produce(scratch_a8,(const void *)((uintptr_t)(uint32_t)param_1[0x102] + 0x14));
          pfVar3 = scratch_a8;
          fVar1 = direction_c4[0] * *pfVar3 + direction_c4[1] * pfVar3[1] + direction_c4[2] * pfVar3[2];
        }
        if (0.0 < fVar1) {
          FUN_00232290(iVar6,0,auStack_48,direction_c4);
          bf_002334b0_produce(matrix_product,(const unsigned char *)param_1 + 0x29c,auStack_48);
        memcpy(auStack_6c,matrix_product,16);
        memcpy(auStack_6c + 8,matrix_product + 8,4);
        memcpy(auStack_6c + 4,matrix_product + 4,16);
          FUN_0003d7a0(param_1 + 199,auStack_6c);
          return;
        }
        bf_0001fdd0_produce(scratch_a8,(const unsigned char *)param_1 + 0x5bc);
        pfVar3 = scratch_a8;
        direction_c4[2] = -pfVar3[2];
        direction_c4[1] = -pfVar3[1];
        direction_c4[0] = -*pfVar3;
        FUN_00232290(iVar6,0,auStack_48,direction_c4);
        bf_002334b0_produce(matrix_product,(const unsigned char *)param_1 + 0x29c,auStack_48);
        memcpy(auStack_6c,matrix_product,16);
        memcpy(auStack_6c + 8,matrix_product + 8,4);
        memcpy(auStack_6c + 4,matrix_product + 4,16);
        FUN_0003d7a0(param_1 + 199,auStack_6c);
      }
    }
  }
  return;
}
