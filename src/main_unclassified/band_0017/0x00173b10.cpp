/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C31A828A0119673F07C9DF73D62B7DF276FC3149139162003A2DBB29BDBA872
 * Entry: 0x00173b10, Ghidra index: 4895, label: FUN_00173b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00173b10(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 - *(float *)(*(int *)(param_1 + 0xc) + 0x4c) * *(float *)(param_1 + 0x78);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  *param_2 = (int)(fVar2 * *(float *)(param_1 + 0xf0) * 255.0);
  param_2[1] = (int)(fVar2 * *(float *)(param_1 + 0xf4) * 255.0);
  param_2[2] = (int)(fVar2 * *(float *)(param_1 + 0xf8) * 255.0);
  return 0;
}
