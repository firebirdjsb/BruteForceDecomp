/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E49D4CADEA023615142B281A58191B453732221AAAD5030D645272116EFA566
 * Entry: 0x002d1fa0, Ghidra index: 10194, label: FUN_002d1fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h> /* original RSQRTSS/SQRTSS scalar instructions */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d1fa0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float first_y, first_z, second_y, second_z;
  float guest_length_sq;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_20;
  undefined8 local_1c;
  float local_10;
  undefined8 local_c;
  
  FUN_00150930();
  FUN_00150930();
  /* 0x002D202A..0x002D2049: MOVSS/MOVHPS load and subtract XYZ float
   * words.  The two 64-bit stack fields contain adjacent float32s,
   * not 64-bit integers converted numerically to floating point. */
  memcpy(&first_y,&local_1c,sizeof first_y);
  memcpy(&first_z,(const uint8_t *)&local_1c+4,sizeof first_z);
  memcpy(&second_y,&local_c,sizeof second_y);
  memcpy(&second_z,(const uint8_t *)&local_c+4,sizeof second_z);
  fVar5 = local_10 - local_20;
  fVar7 = second_y - first_y;
  fVar9 = second_z - first_z;
  fVar6 = param_2[0] - local_20;
  fVar8 = param_2[1] - first_y;
  fVar10 = param_2[2] - first_z;
  /* The original horizontal SSE sum feeds RSQRTSS at 0x002D20B8;
   * an exact reciprocal square root would change the approximation. */
  guest_length_sq = (fVar7 * fVar7 + fVar9 * fVar9) + fVar5 * fVar5;
  fVar3 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));
  local_50 = fVar10 * fVar7 - fVar9 * fVar8;
  local_4c = fVar9 * fVar6 - fVar10 * fVar5;
  fStack_48 = fVar8 * fVar5 - fVar7 * fVar6;
  /* 0x002D213E uses SQRTSS, then x87 multiplies by the RSQRTSS lane. */
  fVar1 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
      (local_4c * local_4c + fStack_48 * fStack_48) + local_50 * local_50))) * fVar3;
  *(float *)(param_1 + 0x58) = fVar1;
  if (fVar1 * fVar1 <= 1e-10) {
    local_50 = 1.0;
    local_4c = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = fVar3 / fVar1;
    local_50 = local_50 * fVar1;
    local_4c = local_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  *param_5 = fStack_48 * fVar7 - local_4c * fVar9;
  param_5[1] = fVar9 * local_50 - fStack_48 * fVar5;
  param_5[2] = local_4c * fVar5 - fVar7 * local_50;
  FUN_002b65a0(param_5);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  param_5[9] = param_2[1];
  param_5[8] = fVar2;
  param_5[10] = fVar1;
  param_5[0x1c] = local_50;
  param_5[0x1d] = local_4c;
  param_5[0x1e] = fStack_48;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    fVar1 = fVar3 * fVar3 * (fVar5 * fVar6 + fVar8 * fVar7 + fVar9 * fVar10);
    if ((fVar1 < 0.0) || (1.0 < fVar1)) {
      /* 0x002D2291..0x002D22A0: MOV/AND/OR/MOV DWORD [EAX+0x4C].
       * This is bit masking of a guest DWORD, never a numeric float cast. */
      uint32_t guest_flags;
      memcpy(&guest_flags,&param_5[0x13],sizeof guest_flags);
      guest_flags = (guest_flags & UINT32_C(0xfffffdff)) | UINT32_C(0x100);
      memcpy(&param_5[0x13],&guest_flags,sizeof guest_flags);
    }
  }
  return;
}
