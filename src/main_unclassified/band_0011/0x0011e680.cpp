/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE083AD312FCFB5C697AAF553DF4D0C2B673C547F811505353DFEEFD7A033EEF
 * Entry: 0x0011e680, Ghidra index: 3630, label: FUN_0011e680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern void FUN_0001f9c0(void);
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low lane, not an exact source/ABI reconstruction.
 * Original upper XMM lanes and machine-code correspondence remain unverified. */
float * FUN_0011e680(int param_1,float *param_2)

{
  float fVar1;
  undefined1 in_XMM0 [16];
  __m128 auVar2;
  float local_c;
  float local_4;
  
  if (*(int *)(param_1 + 0x604) != 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return param_2;
  }
  if (*(float *)(param_1 + 0x5f0) * *(float *)(param_1 + 0x5f0) +
      *(float *)(param_1 + 0x5ec) * *(float *)(param_1 + 0x5ec) +
      *(float *)(param_1 + 0x5e8) * *(float *)(param_1 + 0x5e8) < 1.4210855e-14) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return param_2;
  }
  FUN_0001f9c0();
  auVar2 = _mm_rsqrt_ss(_mm_set_ss(local_c * local_c + local_4 * local_4));
  fVar1 = _mm_cvtss_f32(auVar2);
  *param_2 = fVar1 * local_c;
  param_2[1] = fVar1 * 0.0;
  param_2[2] = local_4 * fVar1;
  return param_2;
}
