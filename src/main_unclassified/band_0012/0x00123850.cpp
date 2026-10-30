/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5B7D4D37872832A39AB6640638139F29D64D8EF6F91FD4C9179CD23F0478EC2
 * Entry: 0x00123850, Ghidra index: 3675, label: FUN_00123850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbdc;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00123850(int param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  __m128 auVar7;
  __m128 auVar8;
  __m128 packed_input;
  float half = 0.5f;
  float half_direction[3];
  float half_side[3];
  float norm_squared;
  int unaff_retaddr;
  /* Original ESP+0x14..0x1c and +0x20..0x28: two 12-byte regions. */
  float side_a[3];
  float side_b[3];
  undefined4 uStack_1a8;
  float local_1a4;
  float fStack_1a0;
  float fStack_19c;
  /* Original ESP+0x3c/+0x40/+0x44, copied from the returned pointer. */
  float direction[3];
  float fStack_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined8 uStack_17c;
  float fStack_174;
  undefined8 uStack_170;
  undefined1 auStack_168 [4];
  undefined1 local_164 [4];
  float fStack_160;
  undefined1 auStack_15c [4];
  undefined4 local_158 [10];
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [4];
  undefined **local_120;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar2 = (byte)((uint)unaff_EBX >> 0x18);
  puVar6 = local_158;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10 = 0;
  local_1c = 0;
  local_18 = 1;
  local_c = 0;
  local_120 = &PTR_LAB_0039dbdc;
  local_14 = 0xfffffffc;
  local_8 = *(int *)(param_1 + 0x6c);
  if (*(int *)(local_8 + 0x10) != 0) {
    local_8 = *(int *)(local_8 + 8);
  }
  iVar5 = *param_2;
  local_1a4 = *(float *)(iVar5 + 0x40);
  local_184 = *(float *)(iVar5 + 0x3c);
  local_188 = *(float *)(iVar5 + 0x38);
  local_180 = local_1a4;
  pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(local_164);
  direction[1] = pfVar4[1];
  direction[2] = pfVar4[2];
  direction[0] = *pfVar4;
  uStack_1a8 = 0x3ecccccd;
  local_1a4 = direction[0] * 0.4;
  fStack_1a0 = direction[1] * 0.4;
  fStack_19c = direction[2] * 0.4;
  fStack_18c = fStack_18c - local_1a4;
  local_188 = local_188 - fStack_1a0;
  local_184 = local_184 - fStack_19c;
  fStack_160 = fStack_19c;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&direction[0],auStack_124,0x40000000,0);
  if (iVar5 != 0) {
    bVar2 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
  }
  local_1a4 = direction[0] * 0.4;
  fStack_1a0 = direction[1] * 0.4;
  fStack_19c = direction[2] * 0.4;
  fStack_18c = local_1a4 + fStack_18c;
  uStack_17c = CONCAT44(fStack_19c,(undefined4)uStack_17c);
  local_188 = fStack_1a0 + local_188;
  side_a[1] = direction[1];
  local_184 = fStack_19c + local_184;
  side_a[0] = -direction[2];
  side_a[2] = direction[0];
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&side_a[0],auStack_124,0x3f19999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  side_b[0] = -side_a[0];
  side_b[1] = 0.0;
  side_b[2] = -side_a[2];
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&side_b[0],auStack_124,0x3f19999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  /* 0x123b77..0x123b98: MOVSS/SHUFPS broadcasts 0.5; memory
   * MOVSS/MOVHPS packs direction +0/+4/+8 into lanes 0/2/3,
   * lane 1 zero. MULPS and 4+8-byte stores produce the actual scratch. */
  auVar8 = _mm_load_ss(&half);
  auVar8 = _mm_shuffle_ps(auVar8,auVar8,0);
  packed_input = _mm_load_ss(direction);
  packed_input = _mm_loadh_pi(packed_input,(const __m64 *)(direction + 1));
  auVar8 = _mm_mul_ps(auVar8,packed_input);
  _mm_store_ss(&half_direction[0],auVar8);
  _mm_storeh_pi((__m64 *)&half_direction[1],auVar8);
  local_1a4 = half_direction[0];
  fStack_1a0 = half_direction[1];
  memcpy(&uStack_170,&half_direction[1],sizeof(uStack_170));
  /* 0x123bd2..0x123bf3 repeats the same operations on side_a,
   * reading its real 12-byte region, previously passed to 0xddd10. */
  auVar8 = _mm_load_ss(&half);
  auVar8 = _mm_shuffle_ps(auVar8,auVar8,0);
  packed_input = _mm_load_ss(side_a);
  packed_input = _mm_loadh_pi(packed_input,(const __m64 *)(side_a + 1));
  auVar8 = _mm_mul_ps(auVar8,packed_input);
  _mm_store_ss(&half_side[0],auVar8);
  _mm_storeh_pi((__m64 *)&half_side[1],auVar8);
  memcpy(&uStack_17c,&half_side[1],sizeof(uStack_17c));
  fVar1 = half_direction[2] + half_side[2];
  side_a[1] = fStack_1a0 + half_side[1];
  side_a[0] = local_1a4 + half_side[0];
  /* 0x123c3d..0x123c55: x87 computes (y*y+x*x)+z*z then
   * rounds to m32fp. RSQRTSS at 0x123c5b retains the packed
   * product's upper lanes. x87 extended intermediates are unverified. */
  norm_squared = (side_a[1] * side_a[1] + side_a[0] * side_a[0]) + fVar1 * fVar1;
  auVar7 = _mm_rsqrt_ss(_mm_move_ss(auVar8,_mm_load_ss(&norm_squared)));
  _mm_store_ss(&side_a[2],auVar7);
  side_a[0] = side_a[2] * side_a[0];
  side_a[1] = side_a[1] * side_a[2];
  side_a[2] = side_a[2] * fVar1;
  memcpy(&fStack_19c,&half_side[2],sizeof(fStack_19c));
  memcpy(&local_180,&half_side[0],sizeof(local_180));
  fStack_174 = local_1a4;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&side_a[0],auStack_124,0x3f99999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  /* 0x123d01..0x123d22 produces direction*0.5 with the same
   * MOVSS/SHUFPS/MOVHPS/MULPS sequence and 4+8-byte stores. */
  auVar7 = _mm_load_ss(&half);
  auVar7 = _mm_shuffle_ps(auVar7,auVar7,0);
  packed_input = _mm_load_ss(direction);
  packed_input = _mm_loadh_pi(packed_input,(const __m64 *)(direction + 1));
  auVar7 = _mm_mul_ps(auVar7,packed_input);
  _mm_store_ss(&half_direction[0],auVar7);
  _mm_storeh_pi((__m64 *)&half_direction[1],auVar7);
  local_1a4 = half_direction[0];
  fStack_1a0 = half_direction[1];
  memcpy(&uStack_17c,&half_direction[1],sizeof(uStack_17c));
  /* 0x123d5c..0x123d7d repeats it on side_b's real 12 bytes. */
  auVar7 = _mm_load_ss(&half);
  auVar7 = _mm_shuffle_ps(auVar7,auVar7,0);
  packed_input = _mm_load_ss(side_b);
  packed_input = _mm_loadh_pi(packed_input,(const __m64 *)(side_b + 1));
  auVar7 = _mm_mul_ps(auVar7,packed_input);
  _mm_store_ss(&half_side[0],auVar7);
  _mm_storeh_pi((__m64 *)&half_side[1],auVar7);
  memcpy(&uStack_170,&half_side[1],sizeof(uStack_170));
  fVar1 = half_direction[2] + half_side[2];
  side_b[1] = fStack_1a0 + half_side[1];
  side_b[0] = local_1a4 + half_side[0];
  /* 0x123dc7..0x123ddf computes (x*x+y*y)+z*z through x87;
   * 0x123de5 changes only the low lane of this packed product. */
  norm_squared = (side_b[0] * side_b[0] + side_b[1] * side_b[1]) + fVar1 * fVar1;
  auVar8 = _mm_rsqrt_ss(_mm_move_ss(auVar7,_mm_load_ss(&norm_squared)));
  _mm_store_ss(&side_b[2],auVar8);
  side_b[0] = side_b[2] * side_b[0];
  side_b[1] = side_b[2] * side_b[1];
  side_b[2] = side_b[2] * fVar1;
  memcpy(&fStack_19c,&half_side[2],sizeof(fStack_19c));
  local_180 = local_1a4;
  memcpy(&fStack_174,&half_side[0],sizeof(fStack_174));
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&side_b[0],auStack_124,0x3f99999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    return bVar2 | bVar3;
  }
  return bVar2;
}
