/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33185A839C08B13D21F86DB4E2F7281F208AF297A28ACCAA2419491CB445AD6D
 * Entry: 0x003824fa, Ghidra index: 13596, label: FUN_003824fa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412720;
extern uint32_t DAT_00412721;
extern uint32_t DAT_0041279c;
extern uint32_t DAT_004127a0;
void FUN_003824fa(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0038122f(param_1);
  if (pcVar1 != (char *)0x0) {
    FUN_003812a8(pcVar1);
    if (*pcVar1 == -2) {
      pcVar2 = DAT_0041279c;
      if (DAT_0041279c == pcVar1) {
        DAT_0041279c = *(char **)(pcVar1 + 0x10);
      }
      else {
        for (; pcVar1 != *(char **)(pcVar2 + 0x10); pcVar2 = *(char **)(pcVar2 + 0x10)) {
        }
        *(undefined4 *)(pcVar2 + 0x10) = *(undefined4 *)(pcVar1 + 0x10);
      }
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      FUN_00382100(pcVar1);
    }
    else if ((DAT_00412720 == '\0') || (DAT_004127a0 != pcVar1)) {
      FUN_003823f9(pcVar1);
    }
    else {
      DAT_00412721 = 1;
    }
  }
  return;
}
