/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B9B8D743079FF77D9835F797F6D604BD8EA1D77BEB6C0D4017CB957B34DA53E
 * Entry: 0x00312dc6, Ghidra index: 11983, label: FUN_00312dc6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00312dc6(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  FUN_003118f0();
  piVar1 = *(int **)(in_ECX + 0xb0);
  if (piVar1 != (int *)0x0) {
    if ((*(uint *)(piVar1[7] + 8) & 0x82000) != 0) {
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + -1;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xb0) = 0;
  }
  iVar3 = FUN_00316bf2(param_1);
  *(int *)(in_ECX + 0xb0) = iVar3;
  if ((iVar3 != 0) && ((*(uint *)(*(int *)(iVar3 + 0x1c) + 8) & 0x82000) != 0)) {
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xd0);
    *(undefined4 *)(in_ECX + 0x24) = 1;
    *(char *)(in_ECX + 0x28) = (char)uVar2;
  }
  FUN_00311923();
  return;
}
