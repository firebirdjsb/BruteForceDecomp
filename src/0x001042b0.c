/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F82CB37D92CC5C352361DD1AAE325EF631C625378C43916763789EE7E45F14DA
 * Entry: 0x001042b0, Ghidra index: 3314, label: FUN_001042b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_001042b0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x10c) = 0;
  piVar3 = (int *)(unaff_EDI + 0x84);
  iVar2 = 0x20;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
      *piVar3 = 0;
    }
    piVar3[-0x20] = 0;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x188))();
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar1 = *(int *)(iVar1 + 4); iVar1 != iVar2; iVar1 = iVar1 + 0x3c) {
    if (*(char *)(iVar1 + 0x20) == '\0') {
      *(int *)(unaff_EDI + 4 + *(int *)(unaff_EDI + 0x10c) * 4) = iVar1;
      *(int *)(unaff_EDI + 0x10c) = *(int *)(unaff_EDI + 0x10c) + 1;
    }
  }
  return;
}
