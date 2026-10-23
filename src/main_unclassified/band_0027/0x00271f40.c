/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0587605D68774867AE37394F580C082CF5E126B21DD302F158D0B6B7294F5D0A
 * Entry: 0x00271f40, Ghidra index: 8826, label: FUN_00271f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  
  *(undefined4 *)(in_ECX + 0x100) = param_1[1];
  *(undefined4 *)(in_ECX + 0x104) = param_1[2];
  puVar1 = (undefined4 *)(in_ECX + 0xfc);
  *puVar1 = *param_1;
  piVar2 = *(int **)(in_ECX + 0xf8);
  *(undefined4 *)(in_ECX + 0x108) = param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,*puVar1);
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x14))
              (*(int **)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0x108));
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x18))
              (*(int **)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0x100));
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x1c))
              (*(int **)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0x104));
  }
  if (*(int *)(in_ECX + 0xa4) != 4) {
    if (*(undefined4 **)(in_ECX + 0x9c) == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(in_ECX + 0x9c);
    }
    if (piVar2 != *(int **)(in_ECX + 0x9c)) {
      do {
        FUN_00271f40(puVar1);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(in_ECX + 0x9c));
    }
  }
  return;
}
