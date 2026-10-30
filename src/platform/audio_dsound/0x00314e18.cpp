/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B7AD4FA4893AE0FFC06F14731B6B428BEB3915EFA30E3841700ECAF0D60994D
 * Entry: 0x00314e18, Ghidra index: 12095, label: FUN_00314e18
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
#include <string.h>
void FUN_00314e18(float *param_1)

{
  uint32_t source_word;
  uint32_t outer_word;
  uint32_t inner_word;
  uint32_t state_word;
  uint32_t copy_word;
  const uint8_t *source;
  const uint8_t *inner;
  float delta;
  float10 fVar3;
  
  /* 0x314e1d/0x314e23 load guest DWORD pointer words at +0x50/+0x48;
   * the latter points to another guest DWORD pointer. Host pointer-width
   * translation and the external object layout remain ABI_UNVERIFIED. */
  memcpy(&source_word, (const uint8_t *)param_1 + 0x50, 4);
  source = (const uint8_t *)(uintptr_t)source_word;
  /* Preserve the observed DWORD load before reading the +0x48 chain.
   * Copy through a temporary so a source/destination overlap does not
   * invoke memcpy's overlapping-range restriction. */
  memcpy(&copy_word, source + 4, 4);
  memcpy(&outer_word, (const uint8_t *)param_1 + 0x48, 4);
  memcpy(&inner_word, (const void *)(uintptr_t)outer_word, 4);
  inner = (const uint8_t *)(uintptr_t)inner_word;
  /* 0x314e20-0x314e36 copies three exact DWORD float bit patterns. */
  memcpy(&param_1[0], &copy_word, 4);
  memcpy(&copy_word, source + 8, 4);
  memcpy(&param_1[1], &copy_word, 4);
  memcpy(&copy_word, source + 0xc, 4);
  memcpy(&param_1[2], &copy_word, 4);
  memcpy(&state_word, source + 0x3c, 4);
  if (state_word != 1) {
    memcpy(&delta, inner + 4, 4);
    param_1[0] = param_1[0] - delta;
    memcpy(&delta, inner + 8, 4);
    param_1[1] = param_1[1] - delta;
    memcpy(&delta, inner + 0xc, 4);
    param_1[2] = param_1[2] - delta;
  }
  fVar3 = (float10)FUN_00317454(param_1);
  param_1[3] = (float)fVar3;
  return;
}
