/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5811712AFADD513777AE74F92D16788E0579D3E0096573E061746DC55EF6ADE2
 * Entry: 0x0013dce0, Ghidra index: 4021, label: FUN_0013dce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_00223160(undefined4 param_1,undefined4 param_2);
void FUN_0013dce0(void)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x18) + 0x2e8) + 0x1ac);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x20))();
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 0x38))();
    }
  }
  FUN_00223160(0x43fa0000,5);
  return;
}
