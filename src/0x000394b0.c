/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79EE73814D10F5502441524561518A03D895EE47400B060BC941AD6D15949F7A
 * Entry: 0x000394b0, Ghidra index: 399, label: FUN_000394b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000394b0(void)

{
  float *in_EAX;
  float *in_ECX;
  
  return (float10)SQRT((*in_EAX - *in_ECX) * (*in_EAX - *in_ECX) +
                       (in_EAX[1] - in_ECX[1]) * (in_EAX[1] - in_ECX[1]) +
                       (in_EAX[2] - in_ECX[2]) * (in_EAX[2] - in_ECX[2]));
}
