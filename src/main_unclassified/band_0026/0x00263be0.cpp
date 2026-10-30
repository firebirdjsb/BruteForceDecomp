/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60A505115F6C39C4DC069E7DAB302E074FDA03B5D5A5E4C75AD3B01EA8AF0717
 * Entry: 0x00263be0, Ghidra index: 8691, label: FUN_00263be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263be0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 1U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 2U >> 1)) {
    FUN_00263d10();
  }
  uVar5 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar4 = uVar5 >> 1;
  if (*(uint *)(in_EAX + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar4 * 4) == 0) {
    uVar3 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar4 * 4) = uVar3;
  }
  piVar1 = (int *)(*(int *)(*(int *)(in_EAX + 4) + uVar4 * 4) + (uVar5 & 1) * 8);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*param_1;
    *piVar1 = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    piVar1[1] = param_1[1];
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
