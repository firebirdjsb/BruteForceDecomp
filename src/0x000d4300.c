/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 871171059D766F9EC6E96BA4A5A9F3A2318E277D912CADFA9163C07AD472E51A
 * Entry: 0x000d4300, Ghidra index: 2645, label: FUN_000d4300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d4300(void)

{
  float *in_ECX;
  float *in_EDX;
  
  if ((((*in_EDX < in_ECX[1] != (*in_EDX == in_ECX[1])) &&
       (*in_ECX < in_EDX[1] != (*in_ECX == in_EDX[1]))) &&
      (in_EDX[2] < in_ECX[3] != (in_EDX[2] == in_ECX[3]))) &&
     (((in_ECX[2] < in_EDX[3] != (in_ECX[2] == in_EDX[3]) &&
       (in_EDX[4] < in_ECX[5] != (in_EDX[4] == in_ECX[5]))) &&
      (in_ECX[4] < in_EDX[5] != (in_ECX[4] == in_EDX[5]))))) {
    return 1;
  }
  return 0;
}
