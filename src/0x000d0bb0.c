/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 862D53511E40A501AF6EC3945CF2C17A9339BF37293B6CB5F33C217C2DA71AF0
 * Entry: 0x000d0bb0, Ghidra index: 2583, label: FUN_000d0bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0bb0(void)

{
  int *piVar1;
  int iVar2;
  short in_AX;
  int *piVar3;
  int in_ECX;
  
  piVar3 = *(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x34)) {
    while ((short)piVar3[2] != in_AX) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == *(int **)(in_ECX + 0x34)) {
        return;
      }
    }
    piVar1 = (int *)piVar3[1];
    iVar2 = *piVar3;
    if (piVar1 == (int *)0x0) {
      *(int *)(in_ECX + 0x2c) = iVar2;
    }
    else {
      *piVar1 = iVar2;
    }
    if (iVar2 == 0) {
      *(int **)(in_ECX + 0x30) = piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
    }
    piVar3[1] = 0;
    *piVar3 = 0;
    *piVar3 = 0;
    if (*(undefined4 **)(in_ECX + 0x24) != (undefined4 *)0x0) {
      **(undefined4 **)(in_ECX + 0x24) = piVar3;
      piVar3[1] = *(int *)(in_ECX + 0x24);
      *(int **)(in_ECX + 0x24) = piVar3;
      return;
    }
    piVar3[1] = 0;
    *(int **)(in_ECX + 0x20) = piVar3;
    *(int **)(in_ECX + 0x24) = piVar3;
  }
  return;
}
