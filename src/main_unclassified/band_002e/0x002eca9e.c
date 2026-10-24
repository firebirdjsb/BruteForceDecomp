/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A96BD4239072BF5565794CCE8917077ABAFD7D0ED2DB860514D23AEAC84BEC3F
 * Entry: 0x002eca9e, Ghidra index: 10667, label: __set_exp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  uint64_t bits = (uint64_t)param_1;
  uint16_t exponent_word = (uint16_t)((uint32_t)((int32_t)param_2 + 0x3fe) << 4) |
                           (uint16_t)(bits >> 48) & UINT16_C(0x800f);
  bits = (bits & UINT64_C(0x0000ffffffffffff)) | ((uint64_t)exponent_word << 48);
  memcpy(&local_c, &bits, sizeof(bits));
  return (float10)local_c;
}
