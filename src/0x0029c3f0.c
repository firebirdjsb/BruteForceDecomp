/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8889870AC7BBC102C2B3FE2802300B86709DB1CA7BE8F221FB5DBAD773BB2A52
 * Entry: 0x0029c3f0, Ghidra index: 9438, label: FUN_0029c3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_NAME_or_____expected_00403eac[];
extern char s___100s__last_token_read_____50s__00404560[];
void FUN_0029c3f0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_50 [80];
  
  if (*(int *)(param_1 + 4) == 0x5b) {
    uVar1 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar1;
    FUN_0029ae00(param_1);
    if (*(int *)(param_1 + 4) != 0x5d) {
      FUN_0029a130();
    }
    uVar1 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else if (*(int *)(param_1 + 4) == 0x114) {
    uVar1 = FUN_0029a3b0();
    FUN_00299580(0xb,uVar1,1);
  }
  else {
    FUN_0029d580(0);
    pcVar2 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar2 == '\0') {
      pcVar2 = s_<eof>_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s_NAME_or_____expected_00403eac,pcVar2,
                 *(undefined4 *)(param_1 + 0x1c),local_50);
  }
  if (*(int *)(param_1 + 4) != 0x3d) {
    FUN_0029a130();
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_0029ae00(param_1);
  return;
}
