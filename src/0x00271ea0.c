/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DA62A1B1B5007B55E44BB0BDAB7877C34AE053AC740B6DF2998D4B6AC6DEC15
 * Entry: 0x00271ea0, Ghidra index: 8824, label: FUN_00271ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271ea0(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  
  FUN_00271330();
  if (*(int *)(in_ECX + 0xa4) != 4) {
    if (*(undefined4 **)(in_ECX + 0x9c) == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)**(undefined4 **)(in_ECX + 0x9c);
    }
    if (piVar1 != *(int **)(in_ECX + 0x9c)) {
      do {
        (**(code **)(*(int *)piVar1[2] + 0xc))(param_1);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x9c));
    }
  }
  return;
}
