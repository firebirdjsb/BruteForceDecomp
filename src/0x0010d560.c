/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C23756FDE4B9590340A0B1D717FCF80C047BAA0832E719D76248557C7BD7F9BD
 * Entry: 0x0010d560, Ghidra index: 3492, label: FUN_0010d560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010d560(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  FUN_0010d490();
  piVar1 = *(int **)(in_ECX + 0xc0);
  for (piVar2 = *(int **)(in_ECX + 0xbc); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    (**(code **)(*(int *)(*piVar2 + 4) + 0xc))();
  }
  return;
}
