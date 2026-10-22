/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B18A58098B4C0BD4BFC28E2B2EE64A4BE3D21C8CFA1AE88EAC5E31165EA5FA22
 * Entry: 0x000e3ba0, Ghidra index: 2827, label: FUN_000e3ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3ba0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  iVar1 = in_EAX;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (in_EDX <= iVar2) break;
    if (*(uint *)(*(int *)(param_1 + iVar2 * 4) + 4) <
        *(uint *)(*(int *)(param_1 + -4 + iVar2 * 4) + 4)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar1 = iVar2;
  }
  if (iVar2 == in_EDX) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + in_EDX * 4);
    iVar1 = in_EDX + -1;
  }
  while (in_EAX < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar2 = *(int *)(param_1 + iVar3 * 4);
    if (*(uint *)(param_2 + 4) <= *(uint *)(iVar2 + 4)) break;
    *(int *)(param_1 + iVar1 * 4) = iVar2;
    iVar1 = iVar3;
  }
  *(int *)(param_1 + iVar1 * 4) = param_2;
  return;
}
