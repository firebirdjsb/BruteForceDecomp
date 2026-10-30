/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A702DDE9000EAB0ED59BE399F98E185F59909505BC8EC154AC973F27011F5E82
 * Entry: 0x0008f670, Ghidra index: 1753, label: FUN_0008f670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008f670(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}
