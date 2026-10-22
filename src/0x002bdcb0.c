/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F4B8C816FE89BCD3A063881C0BF234E6EC8CB58AD032122D8494DDE4BD7D00C
 * Entry: 0x002bdcb0, Ghidra index: 9960, label: FUN_002bdcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bdcb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(ushort *)(param_1 + 0x22) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
    do {
      if (*(int *)*puVar2 == in_ECX) break;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar3);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
  if (iVar1 == 0) {
    if (iVar3 < (int)(*(ushort *)(param_1 + 0x22) - 1)) {
      do {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar3 * 4);
        *puVar2 = puVar2[1];
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(*(ushort *)(param_1 + 0x22) - 1));
    }
    *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + -1;
    return;
  }
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
