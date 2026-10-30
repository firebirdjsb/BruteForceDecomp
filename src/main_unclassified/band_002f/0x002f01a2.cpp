/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B146371D2E644AA9A70FF0395FEABAD7B737B1B7E7E3672FD6C565D6A7BB689E
 * Entry: 0x002f01a2, Ghidra index: 10737, label: __fload
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <float.h>
#include <string.h>
/* x86 0x002F01A9 reads the high 16 bits of the input double;
 * the exceptional path at 0x002F01BA-0x002F01D3 builds an 80-bit
 * temporary before FLD TBYTE. The normal path uses FLD QWORD. */
_Static_assert(sizeof(float10) >= 10, "x87 extended storage required");
_Static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384,
               "This reconstruction requires x87-compatible host long double");
float10 __fload(uint param_1, int param_2)
{
  uint16_t high_word = (uint16_t)((uint32_t)param_2 >> 16);
  uint64_t bits = ((uint64_t)(uint32_t)param_2 << 32) | param_1;
  if ((high_word & UINT16_C(0x7ff0)) == UINT16_C(0x7ff0)) {
    uint16_t exponent = high_word | UINT16_C(0x7fff);
    uint32_t significand_hi = ((uint32_t)param_2 << 11) |
                               (param_1 >> 21);
    uint8_t extended[sizeof(float10)] = {0};
    uint64_t significand = ((uint64_t)significand_hi << 32) | param_1;
    float10 result;
    memcpy(extended, &significand, sizeof(significand));
    memcpy(extended + 8, &exponent, sizeof(exponent));
    memcpy(&result, extended, sizeof(result));
    return result;
  }
  {
    double value;
    memcpy(&value, &bits, sizeof(value));
    return (float10)value;
  }
}
