/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7EB619B13B965D0E0505952E6E7305C3B45244CB73763F0BF36C9B78C17CCFB
 * Entry: 0x00293e00, Ghidra index: 9272, label: FUN_00293e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9630;
extern uint32_t DAT_003b9634;
extern char s_tableEM_00404610[];
undefined4 FUN_00293e00(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(in_EAX + 8) + 0x10);
    do {
      if (*piVar3 != -6) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = 0;
  if (DAT_003b9630 < 0x7ffffffd) {
    iVar2 = DAT_003b9630;
    do {
      if (iVar4 * 2 + 2 < iVar2) {
        return (&DAT_003b9630)[iVar1];
      }
      iVar2 = (&DAT_003b9634)[iVar1];
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0x7ffffffd);
  }
  FUN_0028ab50(s_tableEM_00404610);
  return 0;
}
