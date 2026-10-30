/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76D6709EDEEF5E252B16402D65A17AAA098E6CEE1114537F12AD1D087E919C12
 * Entry: 0x000d1bf0, Ghidra index: 2608, label: FUN_000d1bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
extern void FUN_000d1a90(float *param_1,float *param_2,int *param_3);
extern void FUN_000a0c60(void);

undefined2 FUN_000d1bf0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float reciprocal;
  float local_c;
  float local_8;
  float local_4;
  
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  *param_3 = 0.0;
  FUN_000d1a90(param_2,param_3,param_4);
  if (0.0 < *param_3) {
    /* Original RCPSS consumes and produces only the low float lane here. */
    reciprocal = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(*param_3)));
    fVar1 = reciprocal;
    *param_2 = *param_2 * fVar1;
    *(ulonglong *)(param_2 + 1) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_2 + 1) * fVar1);
    FUN_000a0c60();
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = local_4;
    return 1;
  }
  return 0;
}
