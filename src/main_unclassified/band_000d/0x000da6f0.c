/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FF66FF420BBDFA0DF2B00D8E1CA508E321047DF6E797FB1D534BD114FFBB28B
 * Entry: 0x000da6f0, Ghidra index: 2689, label: FUN_000da6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000da6f0(void)

{
  int *piVar1;
  int in_ECX;
  int *in_EDX;
  
  piVar1 = (int *)0x0;
  if (*(undefined4 **)(in_ECX + 0xf8) != (undefined4 *)0x0) {
    piVar1 = (int *)**(undefined4 **)(in_ECX + 0xf8);
  }
  if (piVar1 != *(int **)(in_ECX + 0xf8)) {
    do {
      if (*in_EDX == *(int *)(piVar1[2] + 4)) {
        return piVar1[2];
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != *(int **)(in_ECX + 0xf8));
  }
  return 0;
}
