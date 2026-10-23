/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50D6780FE98B088C1F90DF8644E6CF00AFEFADDDE30E25AD5C76BE1F0B2AB10C
 * Entry: 0x0016c6e0, Ghidra index: 4784, label: FUN_0016c6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0016c6e0(void)

{
  int iVar1;
  char *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((iVar1 != 0) && (*(int *)(in_ECX + 0x14) - iVar1 >> 2 != 0)) {
    if (*in_ECX != '\0') {
      return (float10)(*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 8) * 4) + 0xc) -
                      *(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 4) * 4) + 0xc)) * (float10)0.001;
    }
    return (float10)(*(int *)(*(int *)(*(int *)(in_ECX + 0x14) + -4) + 0xc) -
                    *(int *)(**(int **)(in_ECX + 0x10) + 0xc)) * (float10)0.001;
  }
  return (float10)-1.0;
}
