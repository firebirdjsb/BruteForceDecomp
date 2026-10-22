/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DC159D8813101C8A50BE4223A2EC3E5E4A0F52FF1CCE3C3EC4FBAE8BE3F6552
 * Entry: 0x002be050, Ghidra index: 9966, label: FUN_002be050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002be050(int param_1)

{
  undefined4 *puVar1;
  int in_EDX;
  int iVar2;
  
  iVar2 = *(ushort *)(param_1 + 0x22) - 1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
    do {
      if (*(int *)*puVar1 == in_EDX) break;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
  FUN_002bd570();
  if (*(short *)(iVar2 + 6) != 0) {
    return;
  }
  if (*(short *)(iVar2 + 0xc) != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(iVar2 + 8));
      return;
    }
    *(undefined2 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 0xc) = 0;
  }
  *(undefined2 *)(iVar2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
