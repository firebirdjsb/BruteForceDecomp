/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 101A9C7E76FA488106156236D67F194A0379E19E28CF94C1BC434ABE472EC22C
 * Entry: 0x000ca2f0, Ghidra index: 2503, label: FUN_000ca2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ca2f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x2c);
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != *in_ECX)) ||
      (piVar2[1] != in_EAX)))) {
    uVar3 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x2c);
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != *in_ECX)) ||
      (piVar2[1] != in_EAX)))) {
    uVar3 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  return;
}
