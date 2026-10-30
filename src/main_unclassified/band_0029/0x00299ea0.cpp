/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D8CEF814086088DB49FF6717B74D0A9ED8469E5A212131011EEBD320AC659C5
 * Entry: 0x00299ea0, Ghidra index: 9398, label: FUN_00299ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
extern char s_constant_table_overflow_004040a8[];
void FUN_00299ea0(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar5 = *piVar2;
  uVar4 = FUN_00294b10(0x10,s_constant_table_overflow_004040a8);
  iVar3 = *(int *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 8) = uVar4;
  *(int *)(iVar5 + 0xc) = iVar3 + 1;
  *(undefined4 *)(iVar3 * 0x10 + *(int *)(*piVar2 + 8)) = 0xfffffffc;
  *(undefined4 *)(*(int *)(*piVar2 + 8) + 8 + iVar3 * 0x10) = *param_2;
  if (param_2[6] != 0) {
    iVar5 = 0;
    if (0 < (int)param_2[6]) {
      do {
        FUN_00299cd0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_2[6]);
    }
    FUN_00299360(param_1);
    FUN_00299580(0x3a,iVar3,-param_2[6]);
    uVar1 = *(undefined1 *)(param_2 + 6);
    uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
    *(undefined4 *)(*piVar2 + 0x10) = uVar4;
    *(undefined1 *)(*(int *)(*piVar2 + 0x10) + piVar2[2]) = uVar1;
    piVar2[2] = piVar2[2] + 1;
    return;
  }
  FUN_00299580(0xb,iVar3,1);
  return;
}
