/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D034BE2FECE7FA9990903488DF2F26F9BA75E12547827C9E2FB9F4F367FA6316
 * Entry: 0x00212410, Ghidra index: 7438, label: FUN_00212410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00212410(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return 1;
}
