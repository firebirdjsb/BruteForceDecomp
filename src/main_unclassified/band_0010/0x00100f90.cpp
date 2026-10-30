/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36A0A496DBBB96BF4E3DE6F5E95B3570B0DD50D8A34212FEC2D7B0007D039ADB
 * Entry: 0x00100f90, Ghidra index: 3230, label: FUN_00100f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00100f90(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *in_EDX;
  
  piVar2 = *(int **)(in_ECX + 0x74);
  iVar1 = 0;
  if (piVar2 != *(int **)(in_ECX + 0x78)) {
    while (iVar1 = *piVar2, *(int *)(iVar1 + 0x24) != *in_EDX) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int **)(in_ECX + 0x78)) {
        return 0;
      }
    }
  }
  return iVar1;
}
