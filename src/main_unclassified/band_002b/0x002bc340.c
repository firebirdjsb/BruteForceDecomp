/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 012F233C2FA3B1DCC3861E14F13DF3CDA3736233864CC96875434745F00B5EB5
 * Entry: 0x002bc340, Ghidra index: 9920, label: FUN_002bc340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
_Static_assert(sizeof(float) == 4, "original binary32 storage");

static float bf_2bc340_load_f32(uint32_t base, uint32_t offset)
{
  float value;
  memcpy(&value, (const void *)(uintptr_t)(uint32_t)(base + offset), 4);
  return value;
}

static void bf_2bc340_store_f32(float *slot, float value)
{
  memcpy(slot, &value, 4);
}

void FUN_002bc340(int *param_1,int param_2,int param_3)

{
  uint32_t iVar3;
  uint32_t iVar4;
  float10 fVar5;
  float delta[4];
  float callback_result;
  float stack30[4], stack40[4];
  uint32_t source_word, indirect_word;
  long double factor;
  __m128 source, target, difference;
  const void *source_base, *target_base;
  
  /* 0x2bc343..0x2bc34a: [param_2+0x14] supplies a guest address;
   * the retained word is read from that object's +0xb4, before calls. */
  memcpy(&indirect_word, (const void *)(uintptr_t)((uint32_t)param_2 + 0x14U), 4);
  memcpy(&source_word, (const void *)(uintptr_t)(uint32_t)(indirect_word + 0xb4U), 4);
  memcpy(&iVar3, (const void *)(uintptr_t)((uint32_t)param_2 + 0x90U), 4);
  memcpy(&iVar4, (const void *)(uintptr_t)((uint32_t)param_3 + 0x90U), 4);
  source_base = (const void *)(uintptr_t)(uint32_t)(iVar3 + 0x12c);
  target_base = (const void *)(uintptr_t)(uint32_t)(iVar4 + 0x12c);
  delta[3] = 0.0f; /* 0x2bc377 precedes all SIMD input loads. */
  /* 0x2bc38f..0x2bc3ae: MOVSS/MOVHPS, SUBPS, then lanes 0,2,3 to
   * T+0x20/0x24/0x28. T+0x2c is a separately zeroed fourth word. */
  target = _mm_loadh_pi(_mm_load_ss((const float *)target_base),
                        (const __m64 *)((const unsigned char *)target_base + 4));
  source = _mm_loadh_pi(_mm_load_ss((const float *)source_base),
                        (const __m64 *)((const unsigned char *)source_base + 4));
  difference = _mm_sub_ps(target, source);
  _mm_store_ss(delta, difference);
  _mm_storeh_pi((__m64 *)(delta + 1), difference);
  FUN_002b65a0(delta);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))(param_2,param_3);
  /* 0x2bc3cf stores the callback's x87 result as m32fp at T+0x10. */
  callback_result = (float)fVar5;
  if (*(int8_t *)(uintptr_t)(iVar3 + 0x64U) < '\b') {
    factor = -((long double)bf_2bc340_load_f32(iVar3, 0x20) *
               (long double)callback_result);
    long double first_delta = (long double)delta[0];
    stack30[3] = 0.0f; /* 0x2bc3f0 precedes the first multiply. */
    bf_2bc340_store_f32(stack30, (float)(first_delta * factor));
    for (int lane = 1; lane < 3; ++lane)
      bf_2bc340_store_f32(stack30 + lane, (float)((long double)delta[lane] * factor));
    /* The first helper also consumes ESI=param_2; its implicit register
     * contract is not modeled by this ordinary C call. */
    FUN_002b3bc0(source_base,stack30);
    memcpy(stack40, &source_word, 4);
    stack40[1] = 0.0f;
    stack40[2] = 0.0f;
    stack40[3] = 0.0f;
    FUN_002b3b70(param_2,stack40);
  }
  if (*(int8_t *)(uintptr_t)(iVar4 + 0x64U) < '\b') {
    factor = (long double)bf_2bc340_load_f32(iVar4, 0x20) *
             (long double)callback_result;
    long double first_component = (long double)delta[0] * factor;
    stack40[3] = 0.0f; /* 0x2bc465 follows multiply, before the m32 store. */
    bf_2bc340_store_f32(stack40, (float)first_component);
    for (int lane = 1; lane < 3; ++lane)
      bf_2bc340_store_f32(stack40 + lane, (float)((long double)delta[lane] * factor));
    FUN_002b3bc0(source_base,stack40);
    memcpy(stack30, &source_word, 4);
    stack30[1] = 0.0f;
    stack30[2] = 0.0f;
    stack30[3] = 0.0f;
    FUN_002b3b70(param_3,stack30);
  }
  return;
}
