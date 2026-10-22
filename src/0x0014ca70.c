/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEE287A06E47063FA7E7F475349E374AB6B50D9CCD379CA04D6EE2C60B178561
 * Entry: 0x0014ca70, Ghidra index: 4343, label: FUN_0014ca70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014ca70(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  if (((iVar1 != 0) && (in_EAX != 0)) && (*(int *)(iVar1 + 0xb4) == 0)) {
    if (*(int *)(in_EAX + 0xbe0) != 0) {
      FUN_00149e10();
    }
    *(undefined4 *)(iVar1 + 0xb8) = 0;
  }
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x20) + 0xa0))();
  }
  if (*(int **)(in_ECX + 100) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 100) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x130) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x164) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0x198) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x198) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0xa0))();
  }
  if (*(int **)(in_ECX + 0x1ac) != (int *)0x0) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x1ac) + 0x58))();
    if ((cVar3 != '\0') &&
       (piVar2 = *(int **)(*(int *)(in_ECX + 0x1ac) + 0x20), piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0014cb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0xa0))();
      return;
    }
  }
  return;
}
