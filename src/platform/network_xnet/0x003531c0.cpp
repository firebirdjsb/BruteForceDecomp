/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EAB65565D397890CCB4773A4615A793AF5861B119CD4734BD2F3B1D79737E06
 * Entry: 0x003531c0, Ghidra index: 13081, label: FUN_003531c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003531c0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(in_ECX + 0x1d8) - *(int *)(param_1 + 0xe4);
  *(int *)(param_1 + 0xe4) = 0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd8) = 1;
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    else {
      *(int *)(param_1 + 0xd4) = iVar2 * 8;
      *(int *)(param_1 + 0xd8) = iVar2 * 2;
    }
  }
  else {
    iVar2 = iVar2 - (*(int *)(param_1 + 0xd4) >> 3);
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + iVar2;
    if (*(int *)(param_1 + 0xd4) < 1) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = iVar2 + (*(int *)(param_1 + 0xd8) - (*(int *)(param_1 + 0xd8) >> 2));
    *(int *)(param_1 + 0xd8) = iVar2;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 0xd8) = 1;
    }
  }
  uVar3 = (*(int *)(param_1 + 0xd4) >> 3) + *(int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xdc) = uVar3;
  uVar1 = (uint)*(byte *)(in_ECX + 0x35) * 5;
  if (uVar3 < uVar1) {
    *(uint *)(param_1 + 0xdc) = uVar1;
  }
  return;
}
