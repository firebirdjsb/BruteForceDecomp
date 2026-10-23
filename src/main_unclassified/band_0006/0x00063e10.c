/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18CA0E6056E99D3402D8F789D0BE107E83F305065FDC6070E890EB35ADA4D808
 * Entry: 0x00063e10, Ghidra index: 1082, label: FUN_00063e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00063e10(void)

{
  float *in_EAX;
  float *in_ECX;
  
  if (in_ECX[2] + in_ECX[1] + *in_ECX < in_EAX[2] + in_EAX[1] + *in_EAX) {
    return 1;
  }
  return 0;
}
