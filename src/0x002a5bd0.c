/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56A001E74390B6BFC67ED6AF94EA15054ED3ED595A0C7EC07C0F112683376ABC
 * Entry: 0x002a5bd0, Ghidra index: 9575, label: FUN_002a5bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a5bd0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x2c);
  piVar1 = *(int **)(in_ECX + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x78) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  *(int **)(in_ECX + 0x78) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    return;
  }
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}
