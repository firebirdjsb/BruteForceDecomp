/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7EE4BDF6A568DB41A3927C6A95B6C718523966C8148DBC2220C59C37108499C
 * Entry: 0x002ecb23, Ghidra index: 10669, label: FUN_002ecb23
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
static uint64_t bf_binary64_bits(uint32_t low, uint32_t high)
{
  return ((uint64_t)high << 32) | low;
}

static double bf_binary64_from_words(uint32_t low, uint32_t high)
{
  uint64_t bits = bf_binary64_bits(low, high);
  double result;
  memcpy(&result, &bits, sizeof(result));
  return result;
}

float10 FUN_002ecb23(uint param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int extraout_EDX; /* unresolved x86 EDX output: not a verified host return */
  float10 fVar3;
  
  if ((double)bf_binary64_from_words(param_1,param_2) ==
      0.0) {
    fVar3 = (float10)0;
    iVar2 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)bf_binary64_from_words(param_1,param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    while ((((uint8_t)(param_2 >> 16)) & 0x10) == 0) {
      iVar2 = (int)((uint32_t)param_2 << 1);
      param_2 = (uint32_t)iVar2; /* Three original partial stores reconstruct one 32-bit value. */
      if ((param_1 & 0x80000000) != 0) {
        param_2 |= UINT32_C(1);
      }
      param_1 = param_1 << 1;
    }
    if (bVar1) {
      param_2 |= UINT32_C(0x80000000);
    }
    fVar3 = (float10)__set_exp(bf_binary64_bits(param_1,param_2) &
                               UINT64_C(0xffefffffffffffff),0);
    iVar2 = extraout_EDX;
  }
  else {
    fVar3 = (float10)__set_exp(bf_binary64_bits(param_1,param_2),0
                              );
    iVar2 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar2;
  return fVar3;
}
