/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EA720336F5FEAA13CFE79E14A4E367FAB8C0DA4640A7E20CD7CB2F6E38347CA
 * Entry: 0x0017a1b0, Ghidra index: 5001, label: FUN_0017a1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017a1b0(void)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = (*in_EDX - *in_ECX) * (*in_EDX - *in_ECX);
  if ((((fVar1 < 9.9999994e-11 != (fVar1 == 9.9999994e-11)) &&
       (fVar1 = (in_EDX[1] - in_ECX[1]) * (in_EDX[1] - in_ECX[1]),
       fVar1 < 9.9999994e-11 != (fVar1 == 9.9999994e-11))) &&
      (fVar1 = (in_EDX[2] - in_ECX[2]) * (in_EDX[2] - in_ECX[2]),
      fVar1 < 9.9999994e-11 != (fVar1 == 9.9999994e-11))) &&
     (*(char *)(in_EDX + 3) == *(char *)(in_ECX + 3))) {
    return 1;
  }
  return 0;
}
