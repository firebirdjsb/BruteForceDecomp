/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F57BD3E3799764D1757775FA8037B7608D205B7F3BE172B847B55084DD2A810A
 * Entry: 0x0029bda0, Ghidra index: 9433, label: FUN_0029bda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_syntax_error_00403f88[];
extern char s_variables_in_a_multiple_assignme_00403ee0[];
int FUN_0029bda0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_58 [2];
  undefined1 local_50 [80];
  
  iVar3 = 0;
  FUN_00299250(s_variables_in_a_multiple_assignme_00403ee0);
  if (*param_2 == 2) {
    FUN_00299580(0xb,param_2[1],1);
    *param_2 = 3;
  }
  if (*(int *)(param_1 + 4) == 0x2c) {
    uVar2 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar2;
    FUN_0029b4f0();
    if (local_58[0] == 4) {
      FUN_0029d580(0);
      pcVar4 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
      FUN_002953d0();
      if (*pcVar4 == '\0') {
        pcVar4 = s_<eof>_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,s_syntax_error_00403f88,pcVar4,
                   *(undefined4 *)(param_1 + 0x1c),local_50);
    }
    iVar3 = FUN_0029bda0(param_1,local_58,param_3 + 1);
  }
  else {
    if (*(int *)(param_1 + 4) != 0x3d) {
      FUN_0029a130();
    }
    uVar2 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar2;
    FUN_0029ba30();
    FUN_00299ba0();
  }
  if ((*param_2 == 3) && (iVar1 = param_3 + -1 + iVar3, iVar1 != 0)) {
    FUN_00299580(0x1b,iVar1,0xffffffff);
    return iVar3 + 2;
  }
  FUN_00299da0();
  return iVar3;
}
