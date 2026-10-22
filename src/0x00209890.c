/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6C42DDAB02318662DF9C6FD01728988AD26B9A87D6CA06CB6D3B8978DBE8344
 * Entry: 0x00209890, Ghidra index: 7323, label: FUN_00209890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00209890(void)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0xcc);
  if ((iVar1 != 0) && ((*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a8) & 1) != 0)) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if ((*piVar3 == 0x17506391) && ((*(byte *)(unaff_EDI + 0xe4) & 0x20) != 0)) {
      uVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xb8))(iVar1);
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xbc))(iVar1,uVar2);
    }
  }
  return;
}
