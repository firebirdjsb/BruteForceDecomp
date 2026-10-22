/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F47B7384088452C5A57FF57CAAB2F05D4A29E54606164EA30E744D628880756
 * Entry: 0x0034cff4, Ghidra index: 12994, label: FUN_0034cff4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034cff4(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x260) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0034d002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x260) + 0x18))();
    return;
  }
  if (*(int *)(in_ECX + 0x224) <= *(int *)(in_ECX + 0x220)) {
    *(undefined4 *)(in_ECX + 0x218) = 1;
  }
  return;
}
