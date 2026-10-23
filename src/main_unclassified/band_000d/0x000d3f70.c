/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A8C916972AD04670AFAC6E4F276A9378C1579EAACACEAF100FA8A15CEF51991
 * Entry: 0x000d3f70, Ghidra index: 2637, label: FUN_000d3f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d3f70(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  
  iVar3 = in_EAX;
  while( true ) {
    iVar1 = iVar3 * 2 + 2;
    if (in_EDX <= iVar1) break;
    if (*(uint *)(*(int *)(*(int *)(in_ECX + iVar1 * 4) + 0xc) + 4) <
        *(uint *)(*(int *)(*(int *)(in_ECX + -4 + iVar1 * 4) + 0xc) + 4)) {
      iVar1 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar1 * 4);
    iVar3 = iVar1;
  }
  if (iVar1 == in_EDX) {
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + -4 + in_EDX * 4);
    iVar3 = in_EDX + -1;
  }
  if (iVar3 <= in_EAX) {
    *(int *)(in_ECX + iVar3 * 4) = param_1;
    return;
  }
  do {
    iVar2 = (iVar3 + -1) / 2;
    iVar1 = *(int *)(in_ECX + iVar2 * 4);
    if (*(uint *)(*(int *)(param_1 + 0xc) + 4) <= *(uint *)(*(int *)(iVar1 + 0xc) + 4)) break;
    *(int *)(in_ECX + iVar3 * 4) = iVar1;
    iVar3 = iVar2;
  } while (in_EAX < iVar2);
  *(int *)(in_ECX + iVar3 * 4) = param_1;
  return;
}
