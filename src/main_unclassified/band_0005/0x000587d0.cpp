/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5D4B593AF6EA97B5AD87CD9459F879A63ADD5DAFFC2924F55126AC8E2866B04
 * Entry: 0x000587d0, Ghidra index: 874, label: FUN_000587d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Original x86 [EBP-0x18,-0x14,-0x10] is one 3xF32 record: x,y,z.
 * The 0x0011E680 call receives the address of its first DWORD; the later
 * MOVSS/MOVHPS/SHUFPS/MULPS sequence reads and rewrites all three words.
 * The local vector is reconstructed contiguously; host pointer size and
 * the external callback ABI remain unverified. */

extern undefined4 FUN_0004c530(float *param_1);
extern undefined4 FUN_0004c480(float *param_1);
extern void FUN_000124f0(float param_1, int32_t in_ECX);

undefined1 FUN_000587d0(int *param_1, float *param_2)
{
  char cVar1;
  int iVar2;
  float fVar5;
  float local_34[3];
  float local_28[3];
  float guest_delta_xyz[3];
  float guest_radius;
  float squared_distance;
  float guest_z_delta;
  float magnitude_sq;
  float reciprocal_length;
  uint8_t local_5;

  if (*param_1 < 2) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x40))();
  guest_delta_xyz[2] = param_2[2] - *(float *)(iVar2 + 0x2c);
  guest_delta_xyz[1] = param_2[1] - *(float *)(iVar2 + 0x28);
  guest_delta_xyz[0] = *param_2 - *(float *)(iVar2 + 0x24);
  /* Original MOV copies the exact IEEE-754 DWORD out of the x87 store. */
  memcpy(&guest_z_delta, &guest_delta_xyz[2], sizeof guest_z_delta);
  squared_distance = (guest_z_delta * guest_z_delta +
                      guest_delta_xyz[1] * guest_delta_xyz[1]) +
                     guest_delta_xyz[0] * guest_delta_xyz[0];
  /* The original FLD [EAX+0x0C] consumes the incoming guest float bits,
   * not the numeric value of the 32-bit integer at this offset. */
  memcpy(&guest_radius, param_1 + 3, sizeof guest_radius);
  if (guest_radius * guest_radius <= squared_distance) {
    return 0;
  }
  cVar1 = FUN_0004c530(local_28);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0004c480(local_34);
  if (cVar1 == '\0') {
    return 0;
  }
  fVar5 = local_34[0] * local_28[0] + local_34[2] * local_28[2];
  if (0.1f <= fVar5) {
    if (fVar5 < 0.365f) {
      FUN_000124f0(0x3fc00000);
      if (2 < param_1[1]) {
        iVar2 = param_1[1] + -1;
        if (*param_1 <= iVar2) {
          return 1;
        }
        *param_1 = iVar2;
        return 1;
      }
      goto LAB_00058996;
    }
    /* Original 0x588EB..0x58905: EDX=[param_1+8], push &xyz[0],
     * push EDX, call 0x0011E680. The 3 float words share storage. */
    FUN_0011e680(param_1[2], guest_delta_xyz);
    /* 0x58909..0x5894B: MOVSS/MOVHPS, MULPS/SHUFPS/ADDSS and RSQRTSS.
     * The low resulting lane is x*x + (y*y + z*z); SHUFPS places the
     * y and z source words in xmm0's upper lanes. */
    magnitude_sq = (guest_delta_xyz[1] * guest_delta_xyz[1] +
                    guest_delta_xyz[2] * guest_delta_xyz[2]) +
                   guest_delta_xyz[0] * guest_delta_xyz[0];
    local_5 = 1;
    if (!(magnitude_sq >= 2e-05f)) {
      local_5 = 0;
    }
    if (local_5 == 0) {
      return 0;
    }
    reciprocal_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(magnitude_sq)));
    guest_delta_xyz[0] *= reciprocal_length;
    guest_delta_xyz[1] *= reciprocal_length;
    guest_delta_xyz[2] *= reciprocal_length;
    if (0.6f <= guest_delta_xyz[0] * local_28[0] +
                 guest_delta_xyz[2] * local_28[2]) {
      return 0;
    }
    if (5.76f <= squared_distance) {
      return 0;
    }
  }
  FUN_000124f0(0x3fc00000);
  if (param_1[1] < 3) {
    return 1;
  }
LAB_00058996:
  *param_1 = 2;
  return 1;
}
