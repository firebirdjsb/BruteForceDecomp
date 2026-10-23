/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86DA2CAEB26FD758F4A21E4AA9E1090BCF154ABC87ACA3087BF6C9CF36672BFC
 * Entry: 0x0017a0f0, Ghidra index: 4999, label: FUN_0017a0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_0017a0f0(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  if (*(int *)(in_EDX + 0x3c) == unaff_ESI) {
    if (*(float *)(in_EDX + 0x40) <= 0.0) {
      return 1;
    }
  }
  else {
    piVar1 = (int *)0x0;
    if (*(undefined4 **)(in_EDX + 0x2c) != (undefined4 *)0x0) {
      piVar1 = (int *)**(undefined4 **)(in_EDX + 0x2c);
    }
    if (piVar1 == *(int **)(in_EDX + 0x2c)) {
      return 1;
    }
    while (piVar1[3] != unaff_ESI) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == *(int **)(in_EDX + 0x2c)) {
        return 1;
      }
    }
  }
  return 0;
}
