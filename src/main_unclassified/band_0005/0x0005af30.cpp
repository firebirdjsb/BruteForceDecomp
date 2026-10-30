/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0DC9F65AA55F87BA44840BD182CFC1F16084877A1154AF9CF08747F588688A3
 * Entry: 0x0005af30, Ghidra index: 914, label: FUN_0005af30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* The original executes scalar SSE SQRTSS/RSQRTSS; upper XMM lanes are
 * preserved by hardware but unused on every observed outgoing path. */
void FUN_0005af30(int param_1,float param_2,float param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int *unaff_EBX;
  float fVar10;
  float guest_accumulated_length;
  float guest_segment_length;
  float guest_squared_length;
  
  piVar7 = param_4;
  *param_4 = 0;
  *(undefined1 *)(param_4 + 1) = 0;
  /* FCHS + FSTP [ESP+0x38] at 0x0005AF3C: float stored into the
   * original fourth incoming guest stack word, NOT a host pointer. EBP
   * independently preserves the destination pointer. */
  guest_accumulated_length = -param_3;
  if (in_EAX != 0) {
    do {
      if ((*(int *)(param_1 + in_EAX + 8) != 1) || (*(char *)(in_EAX + 0x50) == '\0')) break;
      piVar1 = *(int **)(param_1 + in_EAX + 4);
      iVar8 = 0;
      if (piVar1 != (int *)0x0) {
        iVar8 = *piVar1;
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      fVar2 = *(float *)(iVar8 + 0x1c) - *(float *)(in_EAX + 0x1c);
      fVar3 = *(float *)(iVar8 + 0x18) - *(float *)(in_EAX + 0x18);
      fVar4 = *(float *)(iVar8 + 0x14) - *(float *)(in_EAX + 0x14);
      /* Original x87 stores the squared length to m32fp before SQRTSS.
       * The SSE result is subsequently added through the x87 stack. */
      guest_squared_length = (fVar2 * fVar2 + fVar3 * fVar3) + fVar4 * fVar4;
      guest_segment_length = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(guest_squared_length)));
      guest_accumulated_length = guest_accumulated_length + guest_segment_length;
      if ((param_2 < guest_accumulated_length) &&
         (iVar9 = (**(code **)(*unaff_EBX + 0x40))(),
         fVar10 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar8 + 0x1c),
         fVar5 = *(float *)(iVar9 + 0x28) - *(float *)(iVar8 + 0x18),
         fVar6 = *(float *)(iVar9 + 0x24) - *(float *)(iVar8 + 0x14),
         9.0 < fVar6 * fVar6 + fVar5 * fVar5 + fVar10 * fVar10)) {
        *piVar7 = iVar8;
        if (guest_segment_length <= 1.1920929e-07f) {
          piVar7[4] = 0;
          piVar7[3] = 0;
          piVar7[2] = 0;
        }
        else {
          /* RSQRTSS preserves the original approximate reciprocal-square-root,
           * not a division by an exact host sqrt. The original then stores
           * 32-bit IEEE float components without integer conversions. */
          fVar10 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_squared_length)));
          { float guest_z = fVar2 * fVar10;
            float guest_y = fVar3 * fVar10;
            float guest_x = fVar10 * fVar4;
            memcpy(&piVar7[4], &guest_z, sizeof(guest_z));
            memcpy(&piVar7[3], &guest_y, sizeof(guest_y));
            memcpy(&piVar7[2], &guest_x, sizeof(guest_x));
          }
        }
        break;
      }
      in_EAX = iVar8;
    } while (iVar8 != 0);
    if (((*piVar7 == 0) && (in_EAX != 0)) && (*(int *)(param_1 + 8 + in_EAX) != 1)) {
      *(undefined1 *)(piVar7 + 1) = 1;
    }
  }
  return;
}
