/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AEC7F9E19D5DC4924128D0A405014B6D6E399B7714E0F6A5FBFABBBCA1DEB03
 * Entry: 0x000bb800, Ghidra index: 2275, label: FUN_000bb800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bb800(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  int *in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x2c);
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != *in_EDX)) ||
      (piVar2[1] != in_ECX)))) {
    uVar3 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  return;
}
