/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A8E61A4C7272A63D3E77D49E4B82FAB615D1406EEB083D002423787E518EFBC
 * Entry: 0x002bda00, Ghidra index: 9955, label: FUN_002bda00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bda00(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = (uint)*(ushort *)(unaff_EDI + 0x22);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x24) + uVar2 * 4);
    if (iVar1 != 0) {
      if (*(short *)(iVar1 + 0xc) != 0) {
        if (*(int *)(iVar1 + 8) != 0) {
          (*(code *)PTR_FUN_003bc654)(*(int *)(iVar1 + 8));
          return;
        }
        *(undefined2 *)(iVar1 + 4) = 0;
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      *(undefined2 *)(iVar1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  if (*(short *)(unaff_EDI + 0x28) != 0) {
    if (*(int *)(unaff_EDI + 0x24) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_EDI + 0x24));
      return;
    }
    *(undefined2 *)(unaff_EDI + 0x20) = 0;
    *(undefined2 *)(unaff_EDI + 0x28) = 0;
  }
  *(undefined2 *)(unaff_EDI + 0x22) = 0;
  return;
}
