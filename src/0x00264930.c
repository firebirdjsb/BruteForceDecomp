/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 913E4D759C47BC7857EB9B23B73BF1EF256B49215DBE5DE8B80CB192B9C520C7
 * Entry: 0x00264930, Ghidra index: 8708, label: FUN_00264930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443318;
uint FUN_00264930(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  FUN_00264900();
  iVar2 = (**(code **)(*DAT_00443318 + 0x18))(DAT_00443318,*(undefined4 *)(param_1 + 0x48));
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8));
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return -(uint)(iVar2 < 0 || iVar3 < 0) & 0x80004005;
}
