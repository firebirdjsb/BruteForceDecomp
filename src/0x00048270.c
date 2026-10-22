/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C53E05F5DED7D998145B94A4BAC4FA3E446D7DA2D415F0045936B509590E288C
 * Entry: 0x00048270, Ghidra index: 574, label: FUN_00048270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00048270(char *param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_000120f0();
    if (0.0 < *(float *)(param_1 + 8)) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - param_3;
      fVar2 = *(float *)(param_1 + 8);
      if (*(float *)(param_1 + 8) <= 0.0) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 8) = fVar2;
    }
    if ((((param_1[1] != '\0') &&
         (*(float *)(param_1 + 8) < 0.0 != (*(float *)(param_1 + 8) == 0.0))) &&
        (*(char *)(param_2 + 0x3cc) == '\0')) &&
       (((2 < **(int **)(param_2 + 0x1a8) && (1.0 <= *(float *)(param_1 + 4))) ||
        ((**(int **)(param_2 + 0x1a8) == 2 &&
         (*(float *)(param_1 + 4) < 1.0 != (*(float *)(param_1 + 4) == 1.0))))))) {
      *(undefined4 *)(iVar1 + 0x720) = *(undefined4 *)(param_1 + 4);
      return;
    }
    *(undefined4 *)(iVar1 + 0x720) = 0x3f800000;
  }
  return;
}
