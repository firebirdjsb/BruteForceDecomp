/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DECBA97F1FDAC70454D5841DDEB39FB7B8CA010A99A6EC246EF6339DF3A2764
 * Entry: 0x002c5fa0, Ghidra index: 10076, label: FUN_002c5fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5fa0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(short *)(*(int *)(in_ECX + 4) + 0x4a) < 2) {
    FUN_002c5f50();
  }
  else {
    FUN_002dce60(*(int *)(in_ECX + 4),param_1);
  }
  piVar1 = *(int **)(in_ECX + 4);
  if (*(short *)((int)piVar1 + 0x4a) == 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(1);
    }
    **(uint **)(param_1 + 0xc) = **(uint **)(param_1 + 0xc) & 0xfffffdff | 0x100;
    return;
  }
  if ((char)piVar1[0x14] != '\0') {
    *(undefined1 *)(piVar1 + 0x14) = 0;
    iVar2 = FUN_002c4c50();
    if (iVar2 != 0) {
      FUN_002c4d40(*(undefined4 *)(in_ECX + 4),iVar2);
      **(uint **)(iVar2 + 0x170) = **(uint **)(iVar2 + 0x170) & 0xfffffdff | 0x100;
    }
  }
  return;
}
