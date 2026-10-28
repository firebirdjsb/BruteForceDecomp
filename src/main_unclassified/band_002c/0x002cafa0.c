/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1084551861B663E1F22057313342ECC7CD7FAAE50697FFD4807D51815FB3E6C
 * Entry: 0x002cafa0, Ghidra index: 10144, label: FUN_002cafa0
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
extern uint32_t DAT_00469e18;
extern uint32_t DAT_00469e20;
extern uint32_t PTR_LAB_0038e5dc;
extern uint32_t PTR_LAB_0038e5e0;
void FUN_002cafa0(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  int *piVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar15;
  __m128 auVar14;
  __m128 packed_left;
  __m128 packed_right;
  __m128 packed_difference;
  __m128 reduction;
  int local_be8;
  undefined **local_be0;
  float local_bdc;
  float local_bd8;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  float local_bbc;
  float local_bb8;
  float local_bb4;
  undefined4 local_bb0;
  /* Original ESP+0x54/+0x58/+0x5c: twelve-byte input/output region. */
  float local_bac[3];
  undefined4 local_ba0;
  undefined4 local_b94;
  float *local_b90 [3];
  float local_b84;
  undefined4 *local_b80;
  int local_b7c;
  float *local_b78;
  float *local_b74;
  float *local_b70;
  float local_b6c;
  uint *local_b68;
  uint *local_b64;
  float local_b60 [2];
  int *local_b58;
  int *local_b54;
  undefined1 local_b50 [1448];
  float local_5a8 [362];
  
  FUN_002c96d0(local_5a8,param_4[2]);
  FUN_002c96d0(local_b50,param_5[2]);
  iVar7 = *(int *)(param_4[3] + 0x90);
  iVar6 = *(int *)(param_5[3] + 0x90);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  iVar8 = (*param_2 & 0xffff) * 0x10;
  local_bc8 = *(undefined4 *)(iVar8 + 4 + *param_4);
  puVar9 = (undefined4 *)(iVar8 + *param_4);
  local_bc4 = puVar9[2];
  iVar11 = (*param_3 & 0xffff) * 0x10;
  local_bbc = *(float *)(iVar11 + *param_5);
  iVar11 = iVar11 + *param_5;
  local_bcc = *puVar9;
  local_bb8 = *(float *)(iVar11 + 4);
  local_bb4 = *(float *)(iVar11 + 8);
  local_be0 = &PTR_LAB_0038e5e0;
  local_bc0 = 0;
  local_bb0 = 0;
  local_ba0 = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  local_bac[1] = *(float *)(iVar8 + 100) * -1.0;
  local_bac[2] = *(float *)(iVar8 + 0x68) * -1.0;
  local_bac[0] = *(float *)(iVar8 + 0x60) * -1.0;
  local_bdc = *(float *)(param_1 + 8);
  local_bd8 = 1.0 / local_bdc;
  fVar13 = *(float *)(*(int *)(param_1 + 0x10) + 0x50);
  local_b80 = puVar9;
  local_b7c = iVar11;
  iVar8 = FUN_002dd8d0(&local_be0,
                       *(float *)(&DAT_00469e20 +
                                 (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar13,fVar13 * 0.5 + DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar8 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
  }
  fVar13 = (float)(((float10)*(double *)(param_1 + 0x30) - (float10)*(double *)(param_1 + 0x18)) *
                   (float10)*(float *)(param_1 + 0xc) +
                  (float10)*(float *)(*(int *)(param_1 + 0x10) + 0x54));
  fVar12 = (float10)FUN_002b67e0(puVar9);
  fVar15 = (float)(fVar12 * (float10)*(float *)(iVar7 + 0x154) + (float10)*(float *)(iVar7 + 0x150))
  ;
  fVar12 = (float10)FUN_002b67e0(iVar11);
  fVar12 = fVar12 * (float10)*(float *)(iVar6 + 0x154) + (float10)*(float *)(iVar6 + 0x150);
  local_b60[0] = (float)((float10)fVar13 * (float10)*(float *)(iVar6 + 0x154) + fVar12 +
                        (float10)fVar15);
  local_b60[1] = (float)((float10)fVar13 * (float10)*(float *)(iVar7 + 0x154) + fVar12 +
                        (float10)fVar15);
  if (*(float *)(*(int *)(param_4[3] + 0x90) + 4) <= *(float *)(*(int *)(param_5[3] + 0x90) + 4)) {
    fVar15 = *(float *)(*(int *)(param_5[3] + 0x90) + 4);
  }
  else {
    fVar15 = *(float *)(*(int *)(param_4[3] + 0x90) + 4);
  }
  fVar4 = *(float *)(&DAT_00469e20 + (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4
                    ) *
          *(float *)(&DAT_00469e20 + (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4
                    );
  if (fVar13 * fVar13 < fVar4) {
    fVar4 = fVar13 * fVar13;
  }
  local_b68 = param_2;
  local_b90[0] = local_5a8;
  local_b90[1] = (float *)local_b50;
  local_b74 = local_bac;
  iVar7 = 0;
  local_b58 = param_4;
  local_b54 = param_5;
  local_b64 = param_3;
  local_b78 = local_bac;
  local_be8 = 0;
  local_b84 = (fVar4 / fVar15) * -0.5;
  do {
    puVar9 = *(undefined4 **)((int)&local_b80 + local_be8);
    local_b70 = *(float **)((int)&local_b7c + iVar7);
    local_be0 = &PTR_LAB_0038e5dc;
    local_bc0 = 0;
    local_bb0 = 0;
    local_ba0 = 0;
    local_bc8 = puVar9[1];
    local_bc4 = puVar9[2];
    local_bcc = *puVar9;
    piVar3 = *(int **)((int)&local_b64 + iVar7);
    local_bb8 = local_b70[1];
    local_bb4 = local_b70[2];
    local_bbc = *local_b70;
    local_bdc = *(float *)((int)local_b60 + local_be8);
    local_b94 = *(undefined4 *)((int)local_b90 + local_be8);
    local_bd8 = 1.0 / local_bdc;
    piVar10 = (int *)(*(int *)(&DAT_003b86f0 + ((uint)piVar3 & 0xc)) + (int)piVar3) +
              ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)piVar3 & 0xc)) + (int)piVar3) << 1) >> 0x11
              );
    while( true ) {
      pfVar5 = local_b78;
      local_b90[2] = (float *)((*(uint *)((int)piVar10 +
                                         *(int *)(&DAT_003b86e0 + ((uint)piVar10 & 0xc))) & 0xffff)
                               * 0x10 + **(int **)(local_b50 + iVar7 + -4));
      /* 0x2cb37a..2cb391: memory MOVSS clears the upper lanes, then
       * MOVHPS places the next eight input bytes in lanes 2/3. */
      packed_left = _mm_load_ss(local_b90[2]);
      packed_left = _mm_loadh_pi(packed_left,(const __m64 *)(local_b90[2] + 1));
      packed_right = _mm_load_ss(local_b70);
      packed_right = _mm_loadh_pi(packed_right,(const __m64 *)(local_b70 + 1));
      packed_difference = _mm_sub_ps(packed_left,packed_right);
      /* 0x2cb39b/2cb39f: exactly four plus eight bytes are stored. */
      _mm_store_ss(local_b78,packed_difference);
      _mm_storeh_pi((__m64 *)(pfVar5 + 1),packed_difference);
      /* 0x2cb3aa..2cb3c0 reloads the actual stored region and preserves
       * all packed operations: SHUFPS 0x80 / ADDPS / SHUFPS 3 / ADDSS.
       * The low result is (y*y+z*z)+x*x; upper lanes also execute. */
      auVar14 = _mm_load_ss(local_b74);
      auVar14 = _mm_loadh_pi(auVar14,(const __m64 *)(local_b74 + 1));
      auVar14 = _mm_mul_ps(auVar14,auVar14);
      reduction = _mm_shuffle_ps(packed_difference,auVar14,0x80);
      reduction = _mm_add_ps(reduction,auVar14);
      reduction = _mm_shuffle_ps(reduction,reduction,3);
      reduction = _mm_add_ss(reduction,auVar14);
      _mm_store_ss(&local_b6c,reduction);
      /* 0x2cb3d5: RSQRTSS replaces only lane 0 of the squared vector. */
      auVar14 = _mm_rsqrt_ss(_mm_move_ss(auVar14,_mm_load_ss(&local_b6c)));
      _mm_store_ss(&fVar13,auVar14);
      local_bac[0] = local_bac[0] * fVar13;
      local_bac[1] = local_bac[1] * fVar13;
      local_bac[2] = local_bac[2] * fVar13;
      iVar6 = FUN_002dd650(&local_be0,fVar13 * local_b6c * local_b84,0,local_b94,
                           *(undefined4 *)((int)local_b90 + iVar7 + 4),0,
                           (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x34));
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x28) = 0x11;
      }
      if (piVar10 == piVar3) break;
      piVar10 = (int *)((int)piVar10 +
                       ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)piVar10 & 0xc)) + (int)piVar10) <<
                        1) >> 0x11) * 4 + *(int *)(&DAT_003b86f0 + ((uint)piVar10 & 0xc)));
    }
    local_be8 = local_be8 + 4;
    iVar7 = iVar7 + -4;
  } while (-8 < iVar7);
  return;
}
