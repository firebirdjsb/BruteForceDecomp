/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19547C2CD0EC63616CE9E3711E326A2700DB9F06A908F27D693C7049826357EE
 * Entry: 0x002df650, Ghidra index: 10337, label: FUN_002df650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* XBE 0x002DF67E/0x002DF686 copy two raw f32 words to guest 0x004A5C50/54.
 * 0x002DF692/0x002DF696 compare the original UINT32_MAX sentinels;
 * 0x002DF6C9..0x002DF6F8 load/multiply/store packed four-f32 lanes.
 * 0x002DF6D0 RCPS S updates only the low scalar lane, written at 0x002DF6F3.
 * This is host syntax reconstruction, NOT verified native ABI or linking. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* Four contiguous float lanes at each original guest address; the final
 * host symbol mapping and alignment remain unverified. */
extern float DAT_004a5c50[4];
extern float _DAT_003b7da0[4];
extern float _DAT_003b7db0[4];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002df650(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  __m128 reciprocal_lane;
  uint32_t sentinel_first;
  uint32_t sentinel_second;
  
  *(float **)(param_1 + 0x40) = param_2;
  fVar2 = param_2[5] - param_2[1];
  *(float *)(param_1 + 0x3c) = 1.0 / fVar2;
  /* MOV preserves all source bits, including NaN payloads. */
  memcpy(&DAT_004a5c50[0], &param_2[0], sizeof(float));
  memcpy(&DAT_004a5c50[1], &param_2[4], sizeof(float));
  memcpy(&sentinel_first, &param_2[3], sizeof sentinel_first);
  memcpy(&sentinel_second, &param_2[7], sizeof sentinel_second);
  if (sentinel_first == UINT32_MAX || sentinel_second == UINT32_MAX) {
    DAT_004a5c50[3] = 0.0f;
    DAT_004a5c50[2] = 0.0f;
  }
  else {
    DAT_004a5c50[2] = fVar2 * param_2[3];
    DAT_004a5c50[3] = fVar2 * param_2[6];
  }
  reciprocal_lane = _mm_rcp_ss(_mm_set_ss(fVar2));
  fVar2 = _DAT_003b7da0[1] * DAT_004a5c50[1];
  fVar3 = _DAT_003b7da0[2] * DAT_004a5c50[2];
  fVar4 = _DAT_003b7da0[3] * DAT_004a5c50[3];
  pfVar1 = *(float **)(param_1 + 0x38);
  fVar5 = _DAT_003b7db0[0] * DAT_004a5c50[0];
  fVar6 = _DAT_003b7db0[1] * DAT_004a5c50[1];
  fVar7 = _DAT_003b7db0[2] * DAT_004a5c50[2];
  fVar8 = _DAT_003b7db0[3] * DAT_004a5c50[3];
  *pfVar1 = _DAT_003b7da0[0] * DAT_004a5c50[0];
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar3;
  pfVar1[3] = fVar4;
  *(float *)(param_1 + 0x3c) = _mm_cvtss_f32(reciprocal_lane);
  pfVar1[4] = fVar5;
  pfVar1[5] = fVar6;
  pfVar1[6] = fVar7;
  pfVar1[7] = fVar8;
  *(float *)(*(int *)(param_1 + 0x38) + 0x20) = DAT_004a5c50[0];
  *(float *)(*(int *)(param_1 + 0x38) + 0x24) = DAT_004a5c50[2];
  return;
}
