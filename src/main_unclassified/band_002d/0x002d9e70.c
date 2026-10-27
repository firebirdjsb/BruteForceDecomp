/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EC0AE0658BBF8315E5B890ECEEFF15CF2A07218F4E17F5833373BF986CC1843
 * Entry: 0x002d9e70, Ghidra index: 10261, label: FUN_002d9e70
 * STATUS: C11_STORAGE_REVIEW, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Scope: observed descriptor words, wrapping guest addresses and SSE dataflow.
 * See docs/evidence/002d9e70-descriptor-sse.md for instruction facts and limits.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

#pragma STDC FP_CONTRACT OFF

/* Raw 4-byte descriptor loads avoid Ghidra's erroneous float conversions.
 * The descriptor's host pointer is only a draft proxy for the stack guest word.
 * Offsets are byte offsets, not asserted field names or a recovered C struct. */
static uint32_t bf_002d9e70_word(const void *descriptor, size_t offset)
{
  uint32_t word;
  memcpy(&word, (const unsigned char *)descriptor + offset, 4);
  return word;
}

static float bf_002d9e70_threshold(const void *descriptor)
{
  float value;
  memcpy(&value, descriptor, 4); /* x87 FCOMP DWORD PTR [EDI]. */
  return value;
}

/* ABI_UNVERIFIED: these casts require identity-mapped 32-bit guest memory.
 * uint32_t arithmetic below wraps BEFORE conversion to a host pointer. */
static float bf_002d9e70_load(uint32_t address)
{
  float value;
  memcpy(&value, (const void *)(uintptr_t)address, 4);
  return value;
}

static void bf_002d9e70_store(uint32_t address, float value)
{
  memcpy((void *)(uintptr_t)address, &value, 4);
}

/* Signed x86 CMP ordering without implementation-defined unsigned-to-signed
 * conversion: toggling bit 31 maps signed order to unsigned order. */
static bool bf_002d9e70_signed_less(uint32_t left, uint32_t right)
{
  return (left ^ UINT32_C(0x80000000)) <
         (right ^ UINT32_C(0x80000000));
}

void FUN_002d9e70(void *param_1)
{
  uint32_t dimension = bf_002d9e70_word(param_1, 4);
  uint32_t pivot_address = bf_002d9e70_word(param_1, 12);
  uint32_t pivot_index = 0;

  if (!bf_002d9e70_signed_less(0, dimension))
    return;

  do {
    /* 0x2D9E94..0x2D9EAE: cache these BEFORE the register-input helper.
     * +8 is a DWORD element stride; +12 is a 32-bit guest address.
     * Alignment mask selects the enclosing 16-byte MOVAPS block.
     * (pivot_address - aligned_pivot) is 0..15, so SAR 2 equals /4. */
    uint32_t row_address = pivot_address + bf_002d9e70_word(param_1, 8) * 4u;
    const uint32_t aligned_pivot = pivot_address & UINT32_C(0xfffffff0);
    const uint32_t packed_count =
        (pivot_address - aligned_pivot) / 4u - pivot_index + dimension;

    /* 0x2D9EB1 -> 0x2D9DD0: original inputs are EDI=descriptor and
     * ESI=pivot_index, with no stack argument. ABI_UNVERIFIED: this host C
     * call does not marshal those registers. Do not invent a C prototype.
     * The callee can swap pointed data; reload the pivot after the call. */
    FUN_002d9dd0();

    const float pivot = bf_002d9e70_load(pivot_address);
    /* FCOMP / TEST AH,5 / JNP skips ordered-less, but permits unordered.
     * A simple threshold<=fabs(pivot) incorrectly rejects the NaN path. */
    if (!(fabsl((long double)pivot) <
          (long double)bf_002d9e70_threshold(param_1))) {
      /* 0x2D9ED3 RCPSS, DWORD store, then x87 FCHS and DWORD store.
       * Only lane 0 is consumed here; full guest XMM exit state is unresolved.
       * Host SSE executes with host MXCSR, not a restored guest MXCSR. */
      const float reciprocal = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(pivot)));
      const float negative_reciprocal = (float)(-(long double)reciprocal);
      uint32_t row_index = pivot_index + 1u;

      while (bf_002d9e70_signed_less(row_index,
                                    bf_002d9e70_word(param_1, 4))) {
        const float row_value = bf_002d9e70_load(row_address);
        /* 0x2D9F06..0x2D9F0D: ordered strict greater (unordered skips). */
        if (fabsl((long double)row_value) >
            (long double)bf_002d9e70_threshold(param_1)) {
          /* x87 FMUL followed by FSTP DWORD, then MOVSS/SHUFPS broadcast.
           * long double is a storage/precision proxy, not a guest x87 model. */
          const float factor = (float)((long double)row_value *
                                       (long double)negative_reciprocal);
          const __m128 broadcast = _mm_set1_ps(factor);
          uint32_t source = aligned_pivot;
          uint32_t destination = row_address & UINT32_C(0xfffffff0);
          uint32_t remaining = packed_count;
          bool more;

          do {
            /* 0x2D9F2D..0x2D9F47: all four old destination lanes are read
             * before the store. Keep separate MULPS then ADDPS, no FMA.
             * Each step reads/writes 16 bytes, including prefix/tail lanes. */
            const __m128 previous = _mm_load_ps((const float *)(uintptr_t)destination);
            const __m128 product = _mm_mul_ps(
                broadcast, _mm_load_ps((const float *)(uintptr_t)source));
            const __m128 result = _mm_add_ps(product, previous);
            _mm_store_ps((float *)(uintptr_t)destination, result);
            source += 16u;
            destination += 16u;

            /* SUB ECX,4 / JG: continuation is signed OLD ECX > 4, even
             * when subtraction overflows. The first block always executes. */
            more = bf_002d9e70_signed_less(4u, remaining);
            remaining -= 4u;
          } while (more);

          /* 0x2D9F50..0x2D9F62: +16 is another guest address DWORD.
           * FMUL then FADD remain extended until the final DWORD store.
           * TODO: guest x87 precision/control, exceptions and NaN payloads;
           * host long double is not sufficient evidence of equivalence. */
          const uint32_t values = bf_002d9e70_word(param_1, 16);
          const long double product = (long double)factor *
              (long double)bf_002d9e70_load(values + pivot_index * 4u);
          const long double sum = product +
              (long double)bf_002d9e70_load(values + row_index * 4u);
          bf_002d9e70_store(values + row_index * 4u, (float)sum);
        }

        /* Original EBX is restored to the unaligned row address on the
         * update path before this LEA; reload stride/dimension each time. */
        row_address += bf_002d9e70_word(param_1, 8) * 4u;
        row_index += 1u;
      }
    }

    pivot_address += bf_002d9e70_word(param_1, 8) * 4u + 4u;
    dimension = bf_002d9e70_word(param_1, 4);
    pivot_index += 1u;
  } while (bf_002d9e70_signed_less(pivot_index, dimension));
}
