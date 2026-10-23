/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 046191D73265E5050B743C7B2303C56EDD1B8F986D3E61C2226484C79AA78F75
 * Entry: 0x00027490, Ghidra index: 271, label: FUN_00027490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
void FUN_00027490(void)

{
  float *in_EAX;
  float *in_ECX;
  float *unaff_ESI;
  float rsqrt_scale;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = in_EAX[2];
  local_8 = in_EAX[1];
  local_c = *in_EAX;
  if (0.0 < in_ECX[1]) {
    /* 0x000274c3-0x000274df: x87 adds local_4^2 then local_c^2,
     * stores a 4-byte float, and RSQRTSS consumes it. Only the low
     * 32-bit lane is stored. x87 intermediate precision remains unverified. */
    rsqrt_scale = _mm_cvtss_f32(_mm_rsqrt_ss(
        _mm_set_ss(local_4 * local_4 + local_c * local_c)));
    local_c = rsqrt_scale * local_c;
    local_4 = rsqrt_scale * local_4;
    local_8 = -((local_c * *in_ECX + local_4 * in_ECX[2]) / in_ECX[1]);
    FUN_00039410();
  }
  *unaff_ESI = local_c;
  unaff_ESI[1] = local_8;
  unaff_ESI[2] = local_4;
  return;
}
