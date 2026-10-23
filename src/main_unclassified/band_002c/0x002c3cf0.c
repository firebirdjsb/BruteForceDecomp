/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28957EF453601522FA48B9AAADF33586695CB61BE1F7C588ED244EDFB460AA4F
 * Entry: 0x002c3cf0, Ghidra index: 10050, label: FUN_002c3cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
void FUN_002c3cf0(int param_1,float param_2)

{
  float fVar1;
  float rsqrt_scale;
  
  /* 0x002c3cfd-0x002c3d07: square the 4-byte lanes at +0x38, then
   * +0x3c, and add in that order. x87 intermediate precision is unverified. */
  fVar1 = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
          *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x3c);
  if (param_2 * param_2 + 1e-06 < fVar1) {
    /* 0x002c3d30 / 0x002c3d36: RSQRTSS reads the stored 4-byte
     * fVar1 and MOVSS stores only its low 32-bit result. */
    rsqrt_scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar1)));
    *(float *)(param_1 + 0x48) =
         (rsqrt_scale * fVar1 - param_2) * *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x44)
         + *(float *)(param_1 + 0x48);
    param_2 = rsqrt_scale * param_2;
    *(float *)(param_1 + 0x38) = param_2 * *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c) = param_2 * *(float *)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return;
}
