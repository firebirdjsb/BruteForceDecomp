/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C959F7648856D8CB4B1889068931AD3F6362C51BA9E76FC9E51CA37BC59CA96A
 * Entry: 0x0017dfe0, Ghidra index: 5097, label: FUN_0017dfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017dfe0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  
  iVar1 = in_EAX;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (in_EDX <= iVar3) break;
    if (**(uint **)(param_1 + iVar3 * 4) < **(uint **)(param_1 + -4 + iVar3 * 4)) {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar1 = iVar3;
  }
  if (iVar3 == in_EDX) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + in_EDX * 4);
    iVar1 = in_EDX + -1;
  }
  while (in_EAX < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    puVar2 = *(uint **)(param_1 + iVar3 * 4);
    if (*param_2 <= *puVar2) break;
    *(uint **)(param_1 + iVar1 * 4) = puVar2;
    iVar1 = iVar3;
  }
  *(uint **)(param_1 + iVar1 * 4) = param_2;
  return;
}
