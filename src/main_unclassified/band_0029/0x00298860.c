/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DCD1AD9446B3BEDFCA92AEC2E6E0579F375FABBA710A21DBC95BBF9637FFB34
 * Entry: 0x00298860, Ghidra index: 9363, label: FUN_00298860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00298860(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  undefined4 local_28 [2];
  double local_20;
  undefined4 local_18;
  double local_10;
  
  if (*(int *)(DAT_00469888 + 0x14) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 0x10) + 1;
    if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10) == -3))
    goto LAB_002988a5;
  }
  FUN_00295240();
LAB_002988a5:
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10;
  }
  uVar1 = *(undefined4 *)(iVar3 + 8);
  if (*(int *)(DAT_00469888 + 0x14) < 3) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(DAT_00469888 + 0x10) + 3;
  }
  FUN_00296d20();
  iVar3 = FUN_002ebf10();
  if (local_38 == 0) {
    if ((*(int *)(DAT_00469888 + 0x14) < 2) || (*(int *)(DAT_00469888 + 0x10) == -2)) {
      FUN_00295240();
    }
    iVar2 = iVar3 + 1;
  }
  else {
    if (((*(int *)(DAT_00469888 + 0x14) < 2) ||
        (iVar2 = *(int *)(DAT_00469888 + 0x10) + 2, iVar2 == 0)) ||
       ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar2 * 0x10) != -1 &&
        (iVar2 = FUN_00292690(), iVar2 != 0)))) {
      FUN_00295240();
    }
    FUN_002899f0();
    iVar2 = FUN_002ebf10();
  }
  local_34 = iVar3 + 1;
  FUN_002927e0(uVar1,local_34);
  if (iVar2 <= iVar3) {
    local_28[0] = 0xffffffff;
    local_18 = 0xffffffff;
    do {
      local_20 = (double)iVar3;
      FUN_00293c90(local_28);
      local_10 = (double)local_34;
      FUN_00293f40();
      iVar3 = iVar3 + -1;
      local_34 = local_34 + -1;
    } while (iVar2 <= iVar3);
  }
  local_10 = (double)iVar2;
  local_18 = 0xffffffff;
  FUN_00293f40();
  return;
}
