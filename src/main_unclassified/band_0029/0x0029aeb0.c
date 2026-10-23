/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43DBE1BF16D0BE3501A8F3E179715C59FF5ECC3809AA8F8DDD136E01EE24C846
 * Entry: 0x0029aeb0, Ghidra index: 9419, label: FUN_0029aeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_0029aeb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0029b410(param_2);
  while ((iVar1 = *(int *)(param_1 + 4), iVar1 == 0x104 || (iVar1 == 0x10e))) {
    FUN_00299cd0();
    uVar4 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_00299360(param_1);
    piVar2 = *(int **)(param_1 + 8);
    iVar3 = piVar2[2];
    uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
    *(undefined4 *)(*piVar2 + 0x10) = uVar4;
    piVar2 = (int *)(*(int *)(param_1 + 8) + 8);
    *piVar2 = *piVar2 + 2;
    FUN_0029b410(param_2);
    FUN_00299cd0();
    FUN_002994d0(param_1,iVar3,(iVar1 == 0x104) * '\x02' + '.',
                 (*(int *)(*(int *)(param_1 + 8) + 8) - iVar3) + -2);
  }
  return;
}
