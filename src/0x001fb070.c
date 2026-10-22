/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4EDD722AA51B36C3AA011ECE1FD6F4680294EECFDCF07E2F43218E979842EA6
 * Entry: 0x001fb070, Ghidra index: 7108, label: FUN_001fb070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001fb070(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  if (((*(int **)(in_EAX + 4) != (int *)0x0) &&
      (piVar1 = (int *)(**(code **)(**(int **)(in_EAX + 4) + 0xc))(), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 0xe)) {
    return piVar1;
  }
  return (int *)0x0;
}
