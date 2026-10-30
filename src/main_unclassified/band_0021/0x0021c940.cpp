/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79277EBED500E57234B4FD1FF387CE84C0B05CA672722E850646595330195C19
 * Entry: 0x0021c940, Ghidra index: 7531, label: FUN_0021c940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Brute Force original Xbox x86 source reconstruction, not a host ABI proof.
 * The original 0x0021C940..0x0021CA2D sequence uses three distinct guest
 * stack words: primary COM interface at [ESP+0], secondary at [ESP+4],
 * and an F32 callback scalar at [ESP+8].  Its raw MINSS result is passed
 * through a guest DWORD register, not through a host float pointer.
 * The original guest virtual calls, COM layout, and address translation
 * require a native porting layer before this can execute on 64-bit PC. */
#include <xmmintrin.h>

extern uint32_t DAT_003a5114; /* original F32 multiplier at guest VA 0x003A5114 */

void FUN_0021c940(void)

{
  int *unaff_ESI;                /* original Xbox ESI device pointer */
  uint32_t guest_primary_word = 0;   /* original [ESP+0] */
  uint32_t guest_secondary_word = 0; /* original [ESP+4] */
  float guest_query_float = 0.0f;    /* original [ESP+8] */
  float guest_multiplier;
  float guest_max_float;
  float guest_product_float;
  float guest_clamped_float;
  uint32_t guest_clamped_bits;
  uint32_t guest_max_bits = UINT32_C(0x7f7fffff);
  int status;
  int *guest_primary;

  /* 0x21C94A PUSH 0x402AE0 and 0x21C950 zero [ESP+0x0C]
   * before vcall +0.  HRESULT negative branches to the device fallback. */
  status = (**(code **)*unaff_ESI)(unaff_ESI, UINT32_C(0x00402ae0),
                                  &guest_primary_word);
  if (status >= 0) {
    guest_primary = (int *)(uintptr_t)guest_primary_word;

    (**(code **)(*guest_primary + 0x6c))(guest_primary, &guest_query_float);
    (**(code **)(*guest_primary + 0x70))(guest_primary, guest_max_bits);
    (**(code **)(*guest_primary + 0xa8))(guest_primary, &guest_secondary_word);
    (**(code **)(*guest_primary + 0xa4))(guest_primary, 0);

    /* 0x21C9A9 FLD DWORD [ESP+8], 0x21C9AD FMUL DWORD [0x3A5114],
     * 0x21C9BF FSTP DWORD [ESP+0x0C].  Preserve the original F32
     * multiplier bits separately from integer pointer conversions. */
    memcpy(&guest_multiplier, &DAT_003a5114, sizeof guest_multiplier);
    memcpy(&guest_max_float, &guest_max_bits, sizeof guest_max_float);
    guest_product_float = (float)((long double)guest_query_float *
                                  (long double)guest_multiplier);
    /* 0x21C9C3..0x21C9CF MOVSS/MINSS/MOVSS.  SSE MINSS chooses its
     * second operand when unordered or equal, including signed zero. */
    guest_clamped_float = _mm_cvtss_f32(
        _mm_min_ss(_mm_set_ss(guest_max_float),
                   _mm_set_ss(guest_product_float)));
    memcpy(&guest_clamped_bits, &guest_clamped_float,
           sizeof guest_clamped_bits);
    (**(code **)(*guest_primary + 0x68))(guest_primary, guest_clamped_bits);
    (**(code **)(*guest_primary + 0x10))(guest_primary, UINT32_C(0x34000000));
    (**(code **)(*guest_primary + 0xa4))(guest_primary, guest_secondary_word);

    if (guest_secondary_word != 0) {
      int *guest_secondary = (int *)(uintptr_t)guest_secondary_word;
      (**(code **)(*guest_secondary + 8))(guest_secondary);
    }
  } else {
    /* 0x21CA11..0x21CA1A: original failure fallback. */
    (**(code **)(*unaff_ESI + 0x70))(unaff_ESI, guest_max_bits);
  }

  /* 0x21CA1C..0x21CA2A: original final primary COM release. */
  if (guest_primary_word != 0) {
    guest_primary = (int *)(uintptr_t)guest_primary_word;
    (**(code **)(*guest_primary + 8))(guest_primary);
  }
  return;
}
