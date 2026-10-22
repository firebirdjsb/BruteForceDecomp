/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F19A591548874EF9F3854E4E79594E9135E26186B31C879973CC54E09056BBC
 * Entry: 0x00229110, Ghidra index: 7663, label: FUN_00229110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229110(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  FUN_00229180();
  iVar2 = *(int *)(in_EAX + 0x24);
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0xc,*(undefined4 *)(iVar2 + -4),FUN_00228ea0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  iVar2 = *(int *)(in_EAX + 0x28);
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0xc,*(undefined4 *)(iVar2 + -4),FUN_00228ea0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  piVar1 = (int *)(*(int *)(in_EAX + 0x30) + 0x10);
  *piVar1 = *piVar1 + -1;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  return;
}
