/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD4B843B2428476E03CDF6E2A513DB7D3F8DFE4CF910DFF5EC1BD9C903380922
 * Entry: 0x002dbee0, Ghidra index: 10292, label: FUN_002dbee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dbee0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  
  iVar5 = 0;
  if (0 < *(int *)(in_EAX + 0x28)) {
    do {
      iVar2 = *(int *)(in_EAX + 4);
      iVar3 = *(int *)(in_EAX + 0x24) * iVar5;
      iVar4 = iVar3 + param_1;
      uVar1 = *(undefined4 *)(iVar2 + iVar4 * 4);
      *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(iVar2 + (iVar3 + unaff_EBX) * 4);
      iVar4 = *(int *)(in_EAX + 0x24) * iVar5;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(in_EAX + 4) + (iVar4 + unaff_EBX) * 4) = uVar1;
    } while (iVar5 < *(int *)(in_EAX + 0x28));
  }
  return;
}
