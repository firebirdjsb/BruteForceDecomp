/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14EAC87692CE198065B6786A8E1429A62C344BD13E2BF08D6DABAAB6386B51C5
 * Entry: 0x00219110, Ghidra index: 7492, label: FUN_00219110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <math.h>
#include <xmmintrin.h>
#pragma STDC FP_CONTRACT OFF
_Static_assert(sizeof(float) == 4, "original binary32 stores");

/* Internal operation, NOT a recovered original entry ABI. The outputs denote
 * incoming ECX/EDX. Host long double is a precision proxy, not an x87 emulator;
 * control word, NaN payloads, traps, and compiler scheduling are unverified. */
static void bf_219110_vectors(const float *input, float *out_ecx, float *out_edx)
{
  /* 219117..219137: load Z,Y,X; keep products/sums extended until FSTP m32.
   * Explicit temporaries retain the original ((X*X)+(Y*Y))+(Z*Z) grouping. */
  long double iz = input[2], iy = input[1], ix = input[0];
  long double length2 = ix * ix;
  length2 = length2 + iy * iy;
  length2 = length2 + iz * iz;
  float length = (float)sqrtl(length2);
  __m128 reciprocal = _mm_rcp_ss(_mm_set_ss(length));
  __m128 vector = _mm_load_ss(input);
  reciprocal = _mm_shuffle_ps(reciprocal, reciprocal, 0);
  vector = _mm_loadh_pi(vector, (const __m64 *)(input + 1));
  vector = _mm_mul_ps(reciprocal, vector);
  float normalized[3];
  _mm_store_ss(normalized, vector);
  _mm_storeh_pi((__m64 *)(normalized + 1), vector);
  /* Memory MOVSS clears upper lanes: packed shape is [X,+0,Y,Z].
   * FCOMP/TEST AH,41/JP: greater OR unordered takes the zero/one basis.
   * Original constant at 3a5080 is binary32 word 3f7c1bda. */
  const bool near_axis = !(fabsl((long double)normalized[1]) <=
                           (long double)0x1.f837b4p-1f);
  const long double basis_y = near_axis ? 0.0L : 1.0L;
  const float basis_z = near_axis ? 1.0f : 0.0f;
  const float zero = 0.0f; /* Word 00000000 at 3a4f88; do not drop products. */

  /* 2191ad..219203. Z and Y spill to m32 before the external stores.
   * X is stored with FST, retaining its unrounded value for the norm. */
  float z = (float)((long double)normalized[0] * basis_y -
                   (long double)normalized[1] * (long double)zero);
  float y = (float)((long double)normalized[2] * (long double)zero -
                   (long double)basis_z * (long double)normalized[0]);
  long double x_left = (long double)basis_z * (long double)normalized[1];
  out_edx[1] = y;
  long double x_right = (long double)normalized[2] * basis_y;
  out_edx[2] = z;
  long double x = x_left - x_right;
  out_edx[0] = (float)x;
  long double stored_z = out_edx[2], stored_y = out_edx[1];
  long double norm = x * x;
  norm = norm + stored_y * stored_y;
  norm = norm + stored_z * stored_z;
  float norm32 = (float)norm;
  float scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(norm32)));

  /* 219231..21924a: reload m32 components, but each FST leaves its extended
   * product on the x87 stack. The second cross uses these retained values,
   * NOT values rounded back out of the destination buffer. */
  long double first_x = (long double)scale * (long double)out_edx[0];
  out_edx[0] = (float)first_x;
  long double first_y = (long double)scale * (long double)out_edx[1];
  out_edx[1] = (float)first_y;
  long double first_z = (long double)scale * (long double)out_edx[2];
  out_edx[2] = (float)first_z;

  /* 21924d..219291: second output order is +8,+4,+0. Both outputs may
   * alias; all first-vector arithmetic below uses retained extended values. */
  z = (float)(first_x * (long double)normalized[1] -
              first_y * (long double)normalized[0]);
  long double y_left = (long double)normalized[0] * first_z;
  out_ecx[2] = z;
  long double y_right = first_x * (long double)normalized[2];
  y = (float)(y_left - y_right);
  x_left = first_y * (long double)normalized[2];
  out_ecx[1] = y;
  x_right = first_z * (long double)normalized[1];
  x = x_left - x_right;
  out_ecx[0] = (float)x;
  stored_z = out_ecx[2];
  stored_y = out_ecx[1];
  norm = x * x;
  norm = norm + stored_y * stored_y;
  norm = norm + stored_z * stored_z;
  norm32 = (float)norm;
  scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(norm32)));
  /* 2192bf..2192d8: three separate FLD/FMUL/FSTP m32 operations. */
  out_ecx[0] = (float)((long double)scale * (long double)out_ecx[0]);
  out_ecx[1] = (float)((long double)scale * (long double)out_ecx[1]);
  out_ecx[2] = (float)((long double)scale * (long double)out_ecx[2]);
}

void FUN_00219110(float *param_1)
{
  /* ABI_UNVERIFIED: input is one stack pointer; ECX/EDX are output pointers.
   * RET does not clean the argument. These pseudo-registers are unresolved;
   * an ordinary C invocation is not executable proof of the entry contract. */
  float *in_ECX;
  float *in_EDX;
  bf_219110_vectors(param_1, in_ECX, in_EDX);
}
