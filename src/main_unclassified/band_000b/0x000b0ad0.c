/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02CCC31E77A7B090584FD738A8FB1732E80498F901631A45A43C4489FC26CAE2
 * Entry: 0x000b0ad0, Ghidra index: 2099, label: FUN_000b0ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Original XBE: RSQRTSS xmm0,[esp+4] at 0x000B0B4D;
 * RCPSS xmm0,xmm0 at 0x000B0BF4 and 0x000B0CDC.
 * Only the scalar low lanes are consumed by this C draft. Original XMM high
 * lanes, x87 intermediates, guest pointers and host ABI remain unverified. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000b0ad0(int param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_4 = param_4 * *(float *)(param_1 + 0xac);
  param_5 = param_5 * *(float *)(param_1 + 0xac);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xd0);
  fVar3 = param_2[1] - *(float *)(param_1 + 0xcc);
  fVar4 = *param_2 - *(float *)(param_1 + 200);
  fVar5 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3)));
  fVar6 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(*(float *)(param_1 + 0x94))));
  fVar7 = param_2[2];
  fVar1 = param_2[1];
  *param_3 = *param_2 - fVar6 * param_4 * fVar5 * fVar4;
  param_3[1] = fVar1 - fVar6 * param_4 * fVar3 * fVar5;
  param_3[2] = fVar7 - fVar6 * param_4 * fVar2 * fVar5;
  fVar7 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(*(float *)(param_1 + 0x94))));
  *param_2 = fVar7 * param_5 * fVar5 * fVar4 + *param_2;
  param_2[1] = fVar7 * param_5 * fVar3 * fVar5 + param_2[1];
  param_2[2] = fVar7 * param_5 * fVar2 * fVar5 + param_2[2];
  return;
}
