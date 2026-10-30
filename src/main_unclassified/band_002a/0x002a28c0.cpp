/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BC49B50F8EDC8B55AA67EA0952F893C9BC8301FD5422CBBD97C50BCCFBDB5C6
 * Entry: 0x002a28c0, Ghidra index: 9525, label: FUN_002a28c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a28c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_EAX;
  
  iVar1 = in_EAX[0x11];
  piVar2 = (int *)in_EAX[1];
  iVar3 = *in_EAX;
  if (piVar2 == (int *)0x0) {
    *(int *)(iVar1 + 0xe8) = iVar3;
  }
  else {
    *piVar2 = iVar3;
  }
  if (iVar3 == 0) {
    *(int **)(iVar1 + 0xec) = piVar2;
  }
  else {
    *(int **)(iVar3 + 4) = piVar2;
  }
  in_EAX[1] = 0;
  *in_EAX = 0;
  FUN_00238300();
  return;
}
