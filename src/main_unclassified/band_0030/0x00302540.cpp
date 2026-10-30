/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F1AA1F08779F4A00DB7CEFCEE6404D62F6EC40A216F3B6A5E7DF6BDDEB1A3EA
 * Entry: 0x00302540, Ghidra index: 11081, label: FUN_00302540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00302540(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(in_ECX + 0x1e);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x20) + uVar4 * 4);
    if ((piVar3[1] == param_1) || (piVar3[2] == param_1)) {
      (**(code **)(*piVar3 + 4))(1);
    }
  }
  iVar2 = *(ushort *)(in_ECX + 0x26) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x28) + iVar2 * 4);
    do {
      if (*piVar3 == param_1) goto LAB_0030258f;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = -1;
LAB_0030258f:
  uVar1 = *(ushort *)(in_ECX + 0x26) - 1;
  *(ushort *)(in_ECX + 0x26) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar2 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x28) + (uint)uVar1 * 4);
  }
  iVar2 = *(ushort *)(in_ECX + 10) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_ECX + 0xc) + iVar2 * 4);
    do {
      if (*piVar3 == *(int *)(param_1 + 0x90)) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)(in_ECX + 10) - 1;
  *(ushort *)(in_ECX + 10) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0xc) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0xc) + 4 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(in_ECX + 10));
  }
  return;
}
