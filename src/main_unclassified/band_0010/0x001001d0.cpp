/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AED3AFD16861A8061CD5BC85E0F09922785AAAAD5E808A666A62A3983CAC6A0
 * Entry: 0x001001d0, Ghidra index: 3213, label: FUN_001001d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001001d0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(in_EAX + 0x78);
  piVar4 = *(int **)(in_EAX + 0x74);
  while( true ) {
    if (piVar4 == piVar1) {
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar4;
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 == 10)) break;
    piVar4 = piVar4 + 1;
  }
  return piVar2;
}
