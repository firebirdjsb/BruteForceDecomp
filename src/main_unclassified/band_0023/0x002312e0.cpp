/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E86A4C0AECCDEAF56F2FDC00E2ABF165FE2FB291395206BD126D6C516D97065A
 * Entry: 0x002312e0, Ghidra index: 7751, label: FUN_002312e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
_Static_assert(sizeof(float) == 4, "Xbox SSE operands are 32-bit floats");
/* Original 952-byte x86 body, authenticated against the user's XBE:
 * 0x2312E4 loads the second incoming stack DWORD as an INDEX, not pointer.
 * 0x23143E: EAX=&direction_xyz[0], ECX=&basis[0], CALL 0x0001D0C0.
 * 0x231625: ECX=param_3, PUSH &origin_xyz[0], CALL [vtable+0x38].
 * 0x231630: EAX=&direction_xyz[0], ECX=&matrix[1], CALL 0x0001D0C0.
 * 0x231643: ECX=param_3, PUSH &matrix[1], CALL [vtable+0x3C].
 * The existing FUN_0001d0c0(void) draft does NOT transfer original EAX/ECX
 * register arguments. This is isolated C11 syntax, not a linked native ABI.
 * Guest pointer translation, virtual methods and x87 rounding are UNVERIFIED. */
undefined4 FUN_002312e0(int param_1, int param_2, int *param_3, float param_4)
{
  uint32_t indexed_base;     /* wrap in original 32-bit guest address space */
  float origin_xyz[3];       /* original ESP+0x08..0x10 */
  float direction_xyz[3];    /* original ESP+0x14..0x1C */
  float scaled_xyz[3];       /* original ESP+0x20..0x28 */
  float work_xyz[3];         /* original ESP+0x2C..0x34 */
  float target_x, target_y; /* original ESP+0x38, +0x3C */
  float matrix[10];          /* original ESP+0x40..0x64, [0]=target_z */
  float basis[9];            /* original ESP+0x68..0x88 */
  float movement_length = param_4; /* original incoming ESP+0x9C */
  float delta_x, delta_y, delta_z, magnitude_sq, reciprocal_length;

  if (param_3 == (int *)0x0) return 0;
  /* LEA EAX,[EAX+EAX*2]; indexed [ECX+EAX*4+0x22C..0x264]. */
  indexed_base = (uint32_t)param_1 + (uint32_t)param_2 * 12u;
  origin_xyz[0] = *(float *)(uintptr_t)(indexed_base + 0x22cu);
  origin_xyz[1] = *(float *)(uintptr_t)(indexed_base + 0x230u);
  origin_xyz[2] = *(float *)(uintptr_t)(indexed_base + 0x234u);
  direction_xyz[0] = *(float *)(uintptr_t)(indexed_base + 0x25cu);
  direction_xyz[1] = *(float *)(uintptr_t)(indexed_base + 0x260u);
  direction_xyz[2] = *(float *)(uintptr_t)(indexed_base + 0x264u);

  if ((*(byte *)(param_1 + 0x225) & 2) != 0) {
    origin_xyz[0] = *(float *)(param_1 + 0x2dc);
    origin_xyz[1] = *(float *)(param_1 + 0x2e0);
    origin_xyz[2] = *(float *)(param_1 + 0x2e4);
    direction_xyz[0] = *(float *)(param_1 + 0x2e8);
    direction_xyz[1] = *(float *)(param_1 + 0x2ec);
    direction_xyz[2] = *(float *)(param_1 + 0x2f0);
    /* MOVSS/MOVHPS/MULPS, original 0x2313CF..0x2313F0. */
    scaled_xyz[0] = param_4 * direction_xyz[0];
    scaled_xyz[1] = param_4 * direction_xyz[1];
    scaled_xyz[2] = param_4 * direction_xyz[2];
    target_x = origin_xyz[0] + scaled_xyz[0];
    target_y = origin_xyz[1] + scaled_xyz[1];
    matrix[0] = origin_xyz[2] + scaled_xyz[2];
    /* Original guest EAX=&direction_xyz[0], ECX=&basis[0]; ABI unresolved. */
    FUN_0001d0c0();

    /* First matrix column *0.25, original 0x23147C..0x23149D. */
    work_xyz[0] = basis[0] * 0.25f;
    work_xyz[1] = basis[3] * 0.25f;
    work_xyz[2] = basis[6] * 0.25f;
    origin_xyz[0] += work_xyz[0];
    origin_xyz[1] += work_xyz[1];
    origin_xyz[2] += work_xyz[2];
    /* Second column *0.1, original 0x2314F8..0x23152D.
     * Ghidra's unscaled Z subtraction was wrong. */
    work_xyz[0] = basis[1];
    work_xyz[1] = basis[4];
    work_xyz[2] = basis[7];
    scaled_xyz[0] = work_xyz[0] * 0.1f;
    scaled_xyz[1] = work_xyz[1] * 0.1f;
    scaled_xyz[2] = work_xyz[2] * 0.1f;
    origin_xyz[0] -= scaled_xyz[0];
    origin_xyz[1] -= scaled_xyz[1];
    origin_xyz[2] -= scaled_xyz[2];

    delta_x = target_x - origin_xyz[0];
    delta_y = target_y - origin_xyz[1];
    delta_z = matrix[0] - origin_xyz[2];
    direction_xyz[0] = delta_x;
    direction_xyz[1] = delta_y;
    direction_xyz[2] = delta_z;
    /* x87 order: (dy*dy + dz*dz) + dx*dx; then SQRTSS and RCPSS.
     * Do not substitute RSQRTSS or 1/sqrtf. */
    magnitude_sq = (delta_y * delta_y + delta_z * delta_z) + delta_x * delta_x;
    movement_length = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(magnitude_sq)));
    reciprocal_length = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(movement_length)));
    direction_xyz[0] *= reciprocal_length;
    direction_xyz[1] *= reciprocal_length;
    direction_xyz[2] *= reciprocal_length;
  }

  *(undefined4 *)(param_3[0x3a] + 0xc) = 0;
  /* Original ECX=param_3, PUSH &origin_xyz[0], CALL [vtable+0x38]. */
  (**(code **)(*param_3 + 0x38))(param_3, origin_xyz);
  /* Original EAX=&direction_xyz[0], ECX=&matrix[1]; ABI unresolved. */
  FUN_0001d0c0();
  /* Original ECX=param_3, PUSH &matrix[1], CALL [vtable+0x3C]. */
  (**(code **)(*param_3 + 0x3c))(param_3, &matrix[1]);
  /* Authenticated section-mapped .rdata: 0x3A52DC=200.0f,
   * 0x3A52D8=0.005f. Incoming param_4 is overwritten only if flagged. */
  if (200.0f <= movement_length) movement_length = 200.0f;
  FUN_0021c380(movement_length * 0.005f);
  return 1;
}
