/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AE7955B1D3C95C68AC64996F248E021DE9F13CFCEE9FD67B5796675583797EF
 * Entry: 0x00296ce0, Ghidra index: 9335, label: FUN_00296ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00296ce0(void)

{
  double dVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0xc);
  dVar1 = 0.0;
  if (0 < iVar3) {
    piVar2 = *(int **)(in_ECX + 8);
    do {
      if (((*piVar2 == -1) && (piVar2[4] != -6)) && (dVar1 < *(double *)(piVar2 + 2))) {
        dVar1 = *(double *)(piVar2 + 2);
      }
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
