/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1681768C62A6820E38858C0A373CB382E35A1BC2AC1B11E0ABEF93582CD952F4
 * Entry: 0x0015b140, Ghidra index: 4522, label: FUN_0015b140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b140(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  
  if (((*(uint *)(*(int *)(in_ECX + 0xc) + 0xa8) >> 9 & 1) != 0) &&
     (piVar3 = *(int **)(in_ECX + 0x178), piVar3 != *(int **)(in_ECX + 0x17c))) {
    do {
      iVar1 = *(int *)(*piVar3 + 4);
      if ((iVar1 == 0) ||
         ((((uVar2 = *(uint *)(param_1 + 8), (uVar2 & 1) == 0 || (*(int *)(iVar1 + 0x18) == 0)) &&
           (((uVar2 & 2) == 0 || ((*(byte *)(iVar1 + 0x70) & 0x10) != 0)))) &&
          (((uVar2 & 4) == 0 || ((*(byte *)(iVar1 + 0x70) & 0x10) == 0)))))) {
        if (*(int *)(iVar1 + 4) == 2) {
          (**(code **)(**(int **)(iVar1 + 0x7c) + 0x18))(param_1,iVar1);
        }
        else if (*(int *)(iVar1 + 4) == 3) {
          FUN_002b89f0(param_1,iVar1);
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(in_ECX + 0x17c));
  }
  return;
}
