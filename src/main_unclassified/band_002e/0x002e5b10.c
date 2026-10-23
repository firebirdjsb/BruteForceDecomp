/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36BAEFAF6A292474DB59C9292817B010B328F5D3CAA7A5CAB61C7F24C6794956
 * Entry: 0x002e5b10, Ghidra index: 10487, label: FUN_002e5b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e5b10(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX + 8;
  }
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x28))(iVar2);
  uVar3 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x24) + 8) != -1) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + uVar3 * 4) + 0x14))();
      if (*(code **)(in_ECX + 0x4958) == (code *)0x0) {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
      }
      else {
        (**(code **)(in_ECX + 0x4958))(*(undefined4 *)(*(int *)(in_ECX + 0x1c) + uVar3 * 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(int *)(*(int *)(in_ECX + 0x24) + 8) + 1U);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 0x1c));
}
