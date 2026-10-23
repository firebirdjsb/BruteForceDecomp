/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55926BAECE2EDB7C3E1E9AFAECFC753F8A326EA94A348E4FF6F5CC34F9A507FE
 * Entry: 0x000f17a0, Ghidra index: 3010, label: FUN_000f17a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f17a0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(in_ECX + 0x7c);
  uVar3 = 0;
  if (piVar4 != *(int **)(in_ECX + 0x80)) {
    while (iVar2 = *piVar4, *(int *)(iVar2 + 0x24) != in_EAX) {
      piVar4 = piVar4 + 1;
      if (piVar4 == *(int **)(in_ECX + 0x80)) {
        return uVar3;
      }
    }
    if (iVar2 != 0) {
      for (piVar4 = *(int **)(iVar2 + 0xec);
          (piVar5 = (int *)0x0, piVar4 != *(int **)(iVar2 + 0xf0) &&
          (piVar5 = (int *)*piVar4, piVar5[9] != -0x1b19dfc7)); piVar4 = piVar4 + 1) {
      }
      if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 4))(), iVar1 == 1)) {
        FUN_0010a7d0();
      }
      for (piVar4 = *(int **)(iVar2 + 0xec);
          (piVar5 = (int *)0x0, piVar4 != *(int **)(iVar2 + 0xf0) &&
          (piVar5 = (int *)*piVar4, piVar5[9] != -0x1cc47bf0)); piVar4 = piVar4 + 1) {
      }
      if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 4))(), iVar2 == 1)) {
        FUN_002383b0();
        uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x208))();
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20c))((int)*(short *)(param_1 + 0x208));
        iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xd4))(&stack0xfffffff8);
        if (iVar2 != 0) {
          FUN_001e97c0();
        }
        FUN_0010a7d0();
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20c))(uVar3);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}
