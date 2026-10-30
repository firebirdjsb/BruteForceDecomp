/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69BB4751729B94F855A75BB254326E9562E8500B91445DCC6AF1E1AE95BFA998
 * Entry: 0x000735f0, Ghidra index: 1301, label: FUN_000735f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000735f0(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  iVar1 = 0;
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0xc);
  }
  *(int *)(in_ECX + 4) = iVar1;
  if (iVar1 != *(int *)(in_ECX + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 8);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x54) == in_EDX)) {
        *(undefined4 *)(in_ECX + 4) = **(undefined4 **)(in_ECX + 4);
        return iVar1;
      }
      iVar1 = **(int **)(in_ECX + 4);
      *(int *)(in_ECX + 4) = iVar1;
    } while (iVar1 != *(int *)(in_ECX + 0xc));
  }
  return 0;
}
