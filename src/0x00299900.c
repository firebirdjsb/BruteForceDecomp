/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D5F9C00CEBD59DC511DFC2FBB35DDC42DC1348AF9462AA313D27A3511D17BE6
 * Entry: 0x00299900, Ghidra index: 9385, label: FUN_00299900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_cannot_access_a_variable_in_oute_00404070[];
void FUN_00299900(int param_1,int param_2,undefined4 *param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_50 [80];
  
  if (in_EAX == 0) {
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 4);
  }
  iVar1 = *(int *)(iVar4 + 0x14) + -1;
  if (-1 < iVar1) {
    piVar3 = (int *)(iVar4 + 0x124 + iVar1 * 4);
    do {
      if (param_2 == *piVar3) {
        if (-1 < iVar1) {
          *param_3 = 1;
          param_3[1] = iVar1;
          return;
        }
        break;
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar1);
  }
  iVar4 = *(int *)(iVar4 + 4);
  do {
    if (iVar4 == 0) {
      *param_3 = 0;
      uVar2 = FUN_00299650();
      param_3[1] = uVar2;
      return;
    }
    iVar1 = *(int *)(iVar4 + 0x14) + -1;
    if (-1 < iVar1) {
      piVar3 = (int *)(iVar4 + 0x124 + iVar1 * 4);
      do {
        if (param_2 == *piVar3) {
          if (-1 < iVar1) {
            pcVar5 = (char *)(param_2 + 0x28);
            FUN_002953d0();
            if (*pcVar5 == '\0') {
              pcVar5 = s_<eof>_00404598;
            }
            FUN_00295370(s___100s__last_token_read_____50s__00404560,
                         s_cannot_access_a_variable_in_oute_00404070,pcVar5,
                         *(undefined4 *)(param_1 + 0x1c),local_50);
          }
          break;
        }
        iVar1 = iVar1 + -1;
        piVar3 = piVar3 + -1;
      } while (-1 < iVar1);
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}
