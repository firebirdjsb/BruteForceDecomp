/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FF63D22E670669C318D91BE67B3441861EED1443882BD1E8B79AA5F5844925F
 * Entry: 0x00274d70, Ghidra index: 8880, label: FUN_00274d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00274d70(int *param_1)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_38 [10];
  
  piVar2 = param_1;
  piVar3 = aiStack_38;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 1;
  if (*param_1 == 1) {
    *(int *)(in_ECX + 0x48) = param_1[10];
  }
  else {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  *(undefined4 *)(in_ECX + 0x10) = 1;
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
