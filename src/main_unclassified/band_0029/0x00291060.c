/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C79EBE3C1270F0EE163096F56B5E2862416864C2F7EA963BC70400411D66C983
 * Entry: 0x00291060, Ghidra index: 9233, label: FUN_00291060
 * STATUS: C11_STORAGE_REVIEW, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * See docs/evidence/00291060-five-word-sse.md for observed interfaces/limits.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#pragma STDC FP_CONTRACT OFF

/* All addresses are original 32-bit guest words. Direct host casts require
 * identity mapping and do not constitute a guest-memory implementation. */
static uint32_t bf_00291060_word(uint32_t address)
{
  uint32_t value;
  memcpy(&value, (const void *)(uintptr_t)address, 4);
  return value;
}

static float bf_00291060_float(uint32_t address)
{
  float value;
  memcpy(&value, (const void *)(uintptr_t)address, 4);
  return value;
}

static void bf_00291060_store(uint32_t address, uint32_t value)
{
  memcpy((void *)(uintptr_t)address, &value, 4);
}

static uint32_t bf_00291060_callback(uint32_t object, int32_t index)
{
  /* Every original call pushes index, then object; slot byte offset is +28.
   * Representative pinned targets read both words and RET 8. Keep the draft
   * non-prototype code type: all possible targets/calling conventions remain
   * ABI_UNVERIFIED. Reload vtable and slot on each call (output may alias it).
   * Return truncation denotes the original EAX DWORD, not host pointer width. */
  const uint32_t vtable = bf_00291060_word(object);
  const uint32_t target = bf_00291060_word(vtable + 28u);
  return (uint32_t)((code *)(uintptr_t)target)(object, index);
}

/* Original five stack words: object, m32 sample, opaque unread word, out1,
 * out2. RET 20 and ST(0) return are not marshalled by ordinary host C.
 * param_3 has no recovered meaning and is not read in this original body. */
float10 FUN_00291060(uint32_t param_1, float param_2, uint32_t param_3,
                    uint32_t param_4, uint32_t param_5)
{
  int16_t short_value;
  memcpy(&short_value, (const void *)(uintptr_t)(param_1 + 12u), 2);
  const int32_t last = (int32_t)short_value - 1;
  const float step = bf_00291060_float(param_1 + 16u);
  const long double upper = (long double)last * (long double)step;
  const long double lower = (long double)step * 0.0L;
  int32_t endpoint;
  (void)param_3;

  /* 0x29108B FCOMP lower,sample / TEST AH,41 / JNE:
   * index zero only for ordered lower>sample; unordered proceeds. */
  if (lower > (long double)param_2) {
    endpoint = 0;
  } else if (!((long double)param_2 <= upper)) {
    /* 0x2910A9 FCOMP sample,upper / TEST AH,41 / JP:
     * ordered greater AND unordered select the final index. Equal proceeds
     * to division/CVTTSS2SI, rather than bypassing their effects. */
    endpoint = last;
  } else {
    /* x87 FDIV then FSTP DWORD precedes actual CVTTSS2SI. The intrinsic
     * preserves the instruction's INT_MIN indefinite result for masked
     * invalid input; a host float-to-int cast has undefined out-of-range
     * behavior. Guest x87 precision and MXCSR are not restored here. */
    const float quotient = (float)((long double)param_2 / (long double)step);
    const int32_t converted = _mm_cvtt_ss2si(_mm_set_ss(quotient));
    const int32_t index = last < converted ? last : converted;
    if (index == last) {
      endpoint = index;
    } else {
      /* 0x2910EF..0x29111F: FILD index, multiply step; sample-base;
       * FILD index+1, multiply step; next-base; divide numerator/denominator;
       * round once to m32 before the SSE clamp. Host long double remains
       * an explicitly unverified proxy for the guest x87 environment. */
      const int32_t next = index + 1; /* index<last<=32766; cannot overflow. */
      const long double base = (long double)index * (long double)step;
      const long double numerator = (long double)param_2 - base;
      const long double denominator =
          (long double)next * (long double)step - base;
      const float ratio = (float)(numerator / denominator);
      /* MAXSS ratio,+0 then MINSS result,1: second operand wins on NaN
       * or equal values, preserving the observed signed-zero behavior. */
      const __m128 clamped = _mm_min_ss(
          _mm_max_ss(_mm_set_ss(ratio), _mm_set_ss(0.0f)),
          _mm_set_ss(1.0f));
      const float result = _mm_cvtss_f32(clamped);

      const uint32_t first = bf_00291060_callback(param_1, index);
      bf_00291060_store(param_4, first);
      /* Original reloads the object's vtable AFTER the first output store. */
      const uint32_t second = bf_00291060_callback(param_1, next);
      bf_00291060_store(param_5, second);
      return (float10)result;
    }
  }

  const uint32_t value = bf_00291060_callback(param_1, endpoint);
  /* 0x29117E writes out2, then 0x291180 out1. Keep this order, including
   * identical output pointers and outputs aliasing original object memory. */
  bf_00291060_store(param_5, value);
  bf_00291060_store(param_4, value);
  return (float10)0.0f; /* FLD m32 of the entry-initialized +0 stack slot. */
}
