/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95AFC408596F2A966DBF66CEB44663B713B4F1E44FBCFABA5C3353E9E2425D87
 * Entry: 0x002ff960, Ghidra index: 11071, label: FUN_002ff960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ff960(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int in_EDX;
  
  iVar2 = (in_ECX + 10) * 0x10;
  piVar3 = (int *)(iVar2 + in_EAX);
  iVar2 = *(int *)(iVar2 + in_EAX) + in_EDX;
  piVar3[2] = piVar3[2] + 1;
  piVar3[1] = piVar3[1] + 1;
  *piVar3 = iVar2;
  if (piVar3[3] < iVar2) {
    piVar3[3] = iVar2;
  }
  if (in_EDX < 0x201) {
    iVar2 = (int)*(char *)(in_EDX + 0x10a0 + in_EAX);
    piVar3 = (int *)(in_EAX + 0x34 + iVar2 * 4);
    *piVar3 = *piVar3 + 1;
    puVar1 = *(undefined4 **)(in_EAX + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(in_EAX + iVar2 * 4) = *puVar1;
      puVar1[1] = 0;
      return;
    }
  }
  FUN_002ff790();
  return;
}
