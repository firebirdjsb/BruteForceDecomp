/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AABE6BBB73C07B56F0943DD32D95F2E4169D8C261D7DCD63F8970DB83E7A5827
 * Entry: 0x0029bab0, Ghidra index: 9430, label: FUN_0029bab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t DAT_004a5b2c;
extern char s_NAME_or_______expected_00403f04[];
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_local_variables_00404098[];
void FUN_0029bab0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 local_5c;
  undefined1 local_50 [80];
  
  iVar3 = param_1;
  iVar4 = *(int *)(param_1 + 4);
  param_1 = 0;
  local_5c = 0;
  if (iVar4 != 0x29) {
    if (iVar4 == 0x114) {
      do {
        piVar1 = *(int **)(iVar3 + 8);
        iVar4 = FUN_0029a3b0();
        iVar4 = *(int *)(iVar4 * 0x10 + 8 + *(int *)(*piVar1 + 8));
        FUN_00299250(s_local_variables_00404098);
        piVar1[piVar1[5] + param_1 + 0x49] = iVar4;
        uVar6 = *(undefined4 *)(iVar3 + 0x1c);
        if (piVar1[7] != -1) {
          iVar2 = *piVar1;
          iVar5 = FUN_00294b10(8,&DAT_004a5b2c);
          *(int *)(iVar2 + 0x1c) = iVar5;
          *(int *)(iVar5 + piVar1[7] * 8) = iVar4;
          *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4 + piVar1[7] * 8) = uVar6;
          piVar1[7] = piVar1[7] + 1;
        }
        param_1 = param_1 + 1;
        if (*(int *)(iVar3 + 4) != 0x2c) goto LAB_0029bc17;
        iVar4 = FUN_00296110();
        *(int *)(iVar3 + 4) = iVar4;
      } while (iVar4 == 0x114);
      if (iVar4 != 0x116) {
        FUN_00295910(iVar3,s_NAME_or_______expected_00403f04);
        goto LAB_0029bc17;
      }
    }
    else if (iVar4 != 0x116) {
      FUN_0029d580(0);
      pcVar7 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
      FUN_002953d0();
      if (*pcVar7 == '\0') {
        pcVar7 = s_<eof>_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,s_NAME_or_______expected_00403f04,
                   pcVar7,*(undefined4 *)(iVar3 + 0x1c),local_50);
      goto LAB_0029bc17;
    }
    uVar6 = FUN_00296110();
    *(undefined4 *)(iVar3 + 4) = uVar6;
    local_5c = 1;
  }
LAB_0029bc17:
  FUN_00299c50(local_5c);
  return;
}
