/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD4E7CF8D304C7B6425054146E791B7FD2F455FA14B3B20348BC6EF1A41F94FB
 * Entry: 0x00238290, Ghidra index: 7868, label: FUN_00238290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00238290(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  in_ECX[4] = in_ECX[4] + -1;
  piVar2 = (int *)in_ECX[8];
  piVar3 = (int *)piVar2[1];
  iVar4 = *piVar2;
  if (piVar3 == (int *)0x0) {
    in_ECX[8] = iVar4;
  }
  else {
    *piVar3 = iVar4;
  }
  if (iVar4 == 0) {
    in_ECX[9] = (int)piVar3;
  }
  else {
    *(int **)(iVar4 + 4) = piVar3;
  }
  piVar2[1] = 0;
  *piVar2 = 0;
  *puVar1 = 0;
  if ((undefined4 *)in_ECX[7] == (undefined4 *)0x0) {
    puVar1[1] = 0;
    in_ECX[6] = (int)puVar1;
  }
  else {
    *(undefined4 *)in_ECX[7] = *puVar1;
    puVar1[1] = in_ECX[7];
  }
  in_ECX[7] = (int)puVar1;
  return ((uint)((int)puVar1 - in_ECX[1]) >> 3) * in_ECX[2] + *in_ECX;
}
