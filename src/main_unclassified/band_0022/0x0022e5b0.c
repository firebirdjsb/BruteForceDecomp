/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F55CCC69C691B97CFFBEE898FDAB533FCA8F7DA5E11234F3628BA18E4804D4C1
 * Entry: 0x0022e5b0, Ghidra index: 7723, label: FUN_0022e5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* XBE 0x0022E734..0x0022E772: three F32 output words are read by
 * MOVSS/MOVHPS, summed via SSE and normalized by RSQRTSS; no host pointer
 * conversion or Ghidra array pseudo-subfields. Original register/virtual
 * callback and full Xbox runtime ABI remain unverified. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0022e5b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float guest_length_sq;
  float guest_inv_length;
  float local_20;
  float local_10;
  float local_c;
  
  if (((*(byte *)(param_1 + 0x224) & 1) != 0) &&
     (*(char *)(*(int *)(param_1 + 0x228) + 0x170) == '\0')) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x228) + 0x38);
    fVar5 = *(float *)(param_1 + 500);
    fVar6 = param_2[2];
    fVar7 = *(float *)(param_1 + 0x1f0);
    fVar10 = param_2[1];
    *param_3 = *(float *)(param_1 + 0x1ec) - *param_2;
    param_3[1] = fVar7 - fVar10;
    param_3[2] = fVar5 - fVar6;
    piVar2 = *(int **)(param_1 + 0x360);
    if ((piVar2 != (int *)0x0) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0x228) + 0x40), iVar3 != 1 && (iVar3 != 4)))) {
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x54))();
      local_c = pfVar4[2];
      local_10 = pfVar4[1];
      local_20 = *pfVar4;
      if (*(int *)(piVar2[3] + 4) == 3) {
        /* Original MOV DWORD [ESI+0x718], [ESI+0x714], [ESI+0x710].
         * The guest DWORDs contain raw IEEE-754 float bits. */
        memcpy(&local_c, &piVar2[0x1c6], sizeof local_c);
        memcpy(&local_10, &piVar2[0x1c5], sizeof local_10);
        memcpy(&local_20, &piVar2[0x1c4], sizeof local_20);
      }
      if (0.0001 < local_20 * local_20 + local_10 * local_10 + local_c * local_c) {
        /* The original x87 FSQRT then FMUL stores the F32 scale before
         * multiplying the contiguous XYZ values. Extended precision and
         * exception flags require later runtime comparison. */
        float scale = (float)(sqrtl((long double)(param_3[2] * param_3[2] +
                         param_3[1] * param_3[1] + *param_3 * *param_3)) *
                         (long double)(1.0f / fVar1));
        *param_3 = local_20 * scale + *param_3;
        param_3[1] = local_10 * scale + param_3[1];
        param_3[2] = local_c * scale + param_3[2];
      }
    }
    /* Original MOVSS [output+0], MOVHPS [output+4], MULPS/SHUFPS,
     * ADDPS/ADDSS and guarded RSQRTSS across three contiguous words. */
    guest_length_sq = (param_3[1] * param_3[1] +
                       param_3[2] * param_3[2]) +
                       param_3[0] * param_3[0];
    if (guest_length_sq >= 2e-05f) {
      guest_inv_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));
      param_3[0] *= guest_inv_length;
      param_3[1] *= guest_inv_length;
      param_3[2] *= guest_inv_length;
    }
  }
  return;
}
