/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 304BC9901FD11AB24D9DEEDC49EE5B3432F7BD995355A49202B678ACA1D8456F
 * Entry: 0x0029b010, Ghidra index: 9421, label: FUN_0029b010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b93fc;
extern uint32_t DAT_003b9434;
extern char s_code_size_overflow_004040f0[];
void FUN_0029b010(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x50);
  while ((0 < iVar4 &&
         (iVar4 = *(int *)(param_2 + -4 + *(int *)(param_2 + 0x50) * 4),
         param_3 <= *(int *)(&DAT_003b93fc + iVar4 * 4)))) {
    uVar1 = *(undefined4 *)(&DAT_003b9434 + iVar4 * 4);
    FUN_00299360(param_1);
    piVar2 = *(int **)(param_1 + 8);
    uVar3 = FUN_00294b10(1,s_code_size_overflow_004040f0);
    *(undefined4 *)(*piVar2 + 0x10) = uVar3;
    *(char *)(*(int *)(*piVar2 + 0x10) + piVar2[2]) = (char)uVar1;
    piVar2[2] = piVar2[2] + 1;
    iVar4 = *(int *)(param_2 + 0x50) + -1;
    *(int *)(param_2 + 0x50) = iVar4;
  }
  return;
}
