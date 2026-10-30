/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 009C67658AF9970756579E70F79F68621D93AB860E5CFCA867D6D61A669DD720
 * Entry: 0x002324c0, Ghidra index: 7763, label: FUN_002324c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002324c0(void)

{
  int iVar1;
  int in_EDX;
  float10 fVar2;
  
  iVar1 = *(int *)(in_EDX + 0x1b0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0), *(int *)(*(int *)(iVar1 + 0xc) + 4) != 3)
         ) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    fVar2 = (float10)(**(code **)(**(int **)(iVar1 + 0x5a4) + 0x54))();
    return fVar2;
  }
  return (float10)*(float *)(*(int *)(in_EDX + 0x228) + 0x3c);
}
