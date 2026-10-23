/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50E0D9336D8407D8A8DC14566AC01887E91D701C52CF2F61C733EF82FF2C17B0
 * Entry: 0x0029bc40, Ghidra index: 9431, label: FUN_0029bc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b2c;
extern char s_local_variables_00404098[];
int FUN_0029bc40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  
  piVar1 = *(int **)(unaff_EBX + 8);
  iVar6 = 1;
  iVar3 = FUN_0029a3b0();
  iVar3 = *(int *)(iVar3 * 0x10 + 8 + *(int *)(*piVar1 + 8));
  FUN_00299250(s_local_variables_00404098);
  piVar1[piVar1[5] + 0x49] = iVar3;
  FUN_00299830(iVar3,*(undefined4 *)(unaff_EBX + 0x1c));
  iVar3 = *(int *)(unaff_EBX + 4);
  while (iVar3 == 0x2c) {
    uVar4 = FUN_00296110();
    piVar1 = *(int **)(unaff_EBX + 8);
    *(undefined4 *)(unaff_EBX + 4) = uVar4;
    iVar3 = FUN_0029a3b0();
    iVar3 = *(int *)(iVar3 * 0x10 + 8 + *(int *)(*piVar1 + 8));
    FUN_00299250(s_local_variables_00404098);
    piVar1[piVar1[5] + iVar6 + 0x49] = iVar3;
    uVar4 = *(undefined4 *)(unaff_EBX + 0x1c);
    if (piVar1[7] != -1) {
      iVar2 = *piVar1;
      iVar5 = FUN_00294b10(8,&DAT_004a5b2c);
      *(int *)(iVar2 + 0x1c) = iVar5;
      *(int *)(iVar5 + piVar1[7] * 8) = iVar3;
      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4 + piVar1[7] * 8) = uVar4;
      piVar1[7] = piVar1[7] + 1;
    }
    iVar6 = iVar6 + 1;
    iVar3 = *(int *)(unaff_EBX + 4);
  }
  return iVar6;
}
