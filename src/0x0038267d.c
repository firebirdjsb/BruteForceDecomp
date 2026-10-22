/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9096C8D00D25B4C11282A372F0A1663246EADF73993DF743A2322992A945B2CF
 * Entry: 0x0038267d, Ghidra index: 13601, label: FUN_0038267d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
void FUN_0038267d(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  DAT_00412723 = 8;
  if (DAT_00412721 == '\0') {
    pcVar1 = (char *)FUN_00380f6c();
    if (*pcVar1 == '\0') {
      FUN_0038494c(*(int *)(param_2 + 0xc) + 0x18,*(byte *)(param_2 + 4) & 0x7f);
      FUN_0038264a(0,param_2);
    }
    else {
      FUN_00383ef5(pcVar1,*(byte *)(param_2 + 4) & 0x7f,param_2,1);
    }
  }
  else {
    DAT_00412722 = 0;
    FUN_003825b6();
  }
  return;
}
