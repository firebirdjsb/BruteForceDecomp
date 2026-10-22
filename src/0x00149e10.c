/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B310CFD09951B5424948B8B2C33CF12E708E8457F698ADF07584BB218056F9C
 * Entry: 0x00149e10, Ghidra index: 4279, label: FUN_00149e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00149e10(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_EDX;
  int unaff_ESI;
  
  piVar3 = *(int **)(unaff_ESI + 0x2c);
  while( true ) {
    if (piVar3 == *(int **)(unaff_ESI + 0x30)) {
      return (uint)*(int **)(unaff_ESI + 0x30) & 0xffffff00;
    }
    if (in_EDX == *piVar3) break;
    piVar3 = piVar3 + 1;
  }
  piVar1 = *(int **)(unaff_ESI + 0x30);
  piVar2 = piVar3 + 1;
  if (piVar2 != piVar1) {
    iVar4 = (int)piVar3 - (int)piVar2;
    do {
      *(int *)(iVar4 + (int)piVar2) = *piVar2;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + -4;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}
